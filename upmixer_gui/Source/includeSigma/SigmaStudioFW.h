//NOTE: You have to change "array_size" and "fs" variables to match the fimrware!!!!
//NOTE: If you are not using I2C-0 port then you need to change the "deviceHandle" open call (there are 2 locations of this)!!!
//NOTE: This code will only allow for 2 Byte register addresses reads, any more or any less it will fail!!!!
//NOTE: SIGMA_READ_REGISTER can only read 4 Byte register values!!!!
//NOTE: There is rounding error when working with user entered dB value since it must be converted to dec and back for the DSP!!!!
//NOTE: The first #include statment has to be changed to the name of your file!!!
//NOTE: The #include for i2c_dev.h is not for the default file, you have to download it from lmsensors website directly!!!!



#include "basic51_IC_1.h" //NOTE: This must be changed to match the name of your program!!
#include <stdint.h>
#include <fcntl.h>
#include <math.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "i2c_dev.h" //this is the LMSensors version of i2c-dev.h!!!
#include <fcntl.h>

#ifndef __SIGMASTUDIOFW_H__
#define __SIGMASTUDIOFW_H__

#include <stdio.h>
#include <unistd.h>

#define Address_Length  2  //2 byte addresses




//Change the value below based on the PROGRAM_SIZE_IC_1 value in the *_IC_1.h file!!!!
#define array_size 1152




typedef unsigned short ADI_DATA_U16;
typedef unsigned char  ADI_REG_TYPE;

int deviceHandle;

int Tx_Idx, Rx_Idx;
int NextBufferEnd, ThisBufferSize;
unsigned char I2C1_Buffer_Tx[array_size];
unsigned char recvData[4] = {0};
double max = 16777216;
double fs = 44100; // fs=48kHz (used in converting frequency to and from 4 byte ADI_REG_TYPE)
double conversion, fraction;
double mask = 0x0FFFFFFF;

void SIGMA_WRITE_REGISTER_BLOCK(int devAddress, int address, int length, ADI_REG_TYPE *pData); //write to a register
void SIGMA_WRITE_DELAY(int devAddress, int length, ADI_REG_TYPE  *pData ); //i2c transmission delay
void SIGMA_READ_REGISTER(int devAddress, int address, int length, ADI_REG_TYPE * pData ); //read from a register
void SIGMA_USER_TO_FIXPOINT_CONVERT( double fraction, ADI_REG_TYPE * pData ); //convert an float to a 5.23 array
void SIGMA_USER_TO_INTEGER_CONVERT(int value, ADI_REG_TYPE * pData ) ; //conert and int to a 28.0 array

void SIGMA_WRITE_FREQ(int devAddress, int address, int user_value_in_hz); //write a frequency to a register block
void SIGMA_WRITE_LINEAR_GAIN(int devAddress, int address, double user_value); //write to a linear gain register
void SIGMA_WRITE_VOLUME_FADER(int devAddress, int address, double user_value_in_dB); //write to a volume fader register
double SIGMA_READBACK(int devAddress, int address); //get the value of a readback block
double SIGMA_READ_FREQ(int devAddress, int address); //get the value of a frequency block
double SIGMA_READ_LINEAR_GAIN(int devAddress, int address); //get the value of a linear gain block
double SIGMA_READ_VOLUME_FADER(int devAddress, int address); //get the value of a volume fader block

/* 
 * Parameter data format
 */
#define SIGMASTUDIOTYPE_FIXPOINT    0
#define SIGMASTUDIOTYPE_INTEGER     1

/* 
 * Write to a single Device register
 */
#define SIGMA_WRITE_REGISTER( devAddress, address, dataLength, data ) {/*TODO: implement macro or define as function*/}

/* 
 * TODO: CUSTOM MACRO IMPLEMENTATION
 * Write to multiple Device registers
 */
void SIGMA_WRITE_REGISTER_BLOCK(int devAddress, int address, int length, ADI_REG_TYPE *pData ) 
{

  int ii = 0;
  int zz = 0;
  char filename[20];
  Tx_Idx = 0;

     deviceHandle = open("/dev/i2c-1", O_RDWR);


   if(deviceHandle < 0) //if there was a problem opening the file
    {
     printf("\n could not open file \n");
     return;
    }

  // connect to DSP address
  int deviceI2CAddress = (devAddress >> 1); //DEVICE_ADDR_IC_1 found in *_IC_1.h needs to be shifted right 1 bit 

  //setup the device and check for errors
  if(ioctl(deviceHandle, I2C_SLAVE, deviceI2CAddress) < 0)
  {
   printf("\n ioctl failed \n");
   return;
  }



/*----- Transmission Phase -----*/
    ThisBufferSize = Address_Length + length; //2 bytes for the address + the length of the data packet

    I2C1_Buffer_Tx[0] =   (address & 0xFF00)>>8; //mask the upper 8 bits of the address then put into unique variable
    I2C1_Buffer_Tx[1] =   address & 0x00FF; //mask the lower 8 bits of the address then put into unique variable

    for(zz=0;zz<length;zz++)
        {
        I2C1_Buffer_Tx [zz + Address_Length] =   pData[zz]; //fill the buffer array with the data (still leaving room for the address)
        }

  // begin transmission and request acknowledgement
  write(deviceHandle, I2C1_Buffer_Tx, ThisBufferSize); //send it out the port

    // close connection and return
  close(deviceHandle);
  return;
}

void SIGMA_WRITE_DELAY(int devAddress, int length, ADI_REG_TYPE *pData )
{
    int nCount=0;
    nCount=0xFFFFF;
    for(; nCount != 0; nCount--);
}

/*
 * Read device registers 
 */



void SIGMA_READ_REGISTER(int devAddress, int address, int length, ADI_REG_TYPE * pData )
{

  int file;
  unsigned char dataAddr[2] = {0x00, 0x00};
  unsigned char deviceAddr = (devAddress>>1); //Address passed is the Write address, need to remove LSB in order to use this with ioctl
  struct i2c_rdwr_ioctl_data packets; //this is used to allow for the 2 byte register addresses
  struct i2c_msg messages[2]; // 2 transactions; 1st is the write to the register pointer, 2nd is the read


  dataAddr[0] = ((address>>8) & 0xFF); //grab the top 8 bits of the address
  dataAddr[1] = (address & 0xFF);  //grab the bottom 8 bits of the address

  deviceHandle = open("/dev/i2c-1", O_RDWR);

  if(deviceHandle == -1)
    printf("Open Failed!");


  messages[0].addr = deviceAddr; //the address of the DSP chip
  messages[0].len = 2; //2 Bytes register address
  messages[0].flags = 0; //no flags (default write operation)
  //messages[0].buf = &dataAddr[0]; //the locatiion where the 2 element array containing the address is stored

  messages[1].addr = deviceAddr; //the address of the DSP chip
  messages[1].len = 4; //length
  messages[1].flags = I2C_M_RD; //read operation
 // messages[1].buf = pData; //location where to store the info

  packets.nmsgs = 2; //total number of transactions
  packets.msgs = messages; 


  if (ioctl(deviceHandle,I2C_RDWR,&packets) < 0) //starts the transaction and checks for error in 1 step
  {
    printf("ioctl 2 Failed!\n");
    printf("Error no is : %d\n", errno);
    printf("Error description is : %s\n", strerror(errno));
    return;
  }

  close(file);


  return;

}



/*
 * Set a register field's value
 */
#define SIGMA_SET_REGSITER_FIELD( regVal, fieldVal, fieldMask, fieldShift )  \
        { (regVal) = (((regVal) & (~(fieldMask))) | (((fieldVal) << (fieldShift)) && (fieldMask))) }
  
/*
 * Get the value of a register field
 */
#define SIGMA_GET_REGSITER_FIELD( regVal, fieldMask, fieldShift )  \
        { ((regVal) & (fieldMask)) >> (fieldShift) }
 
/* 
 * Convert a floating-point value to SigmaDSP (5.23) fixed point format 
 *    This optional macro is intended for systems having special implementation
 *    requirements (for example: limited memory size or endianness)
 */

/*******5.23 format //  user value --> formatted array*******/
void SIGMA_USER_TO_FIXPOINT_CONVERT( double fraction, ADI_REG_TYPE * pData ) //TODO: update prototypes for this func and below...
{
  int scale;

  scale = round(fraction * max); //accepts the fraction and then finds the closest int after grabbing ratio of max value
  pData[3] = scale & 0xFF; //shift the bits to fill in the 4 byte array
  pData[2] = (scale>>8) & 0xFF;
  pData[1] = (scale>>16) & 0xFF;
  pData[0] = (scale>>24) & 0xFF;
}

/* 
 * Convert integer data to system compatible format
 *    This optional macro is intended for systems having special implementation
 *    requirements (for example: limited memory size or endianness)
 */

/*********28.0 format  //  user value --> formatted array*******/
void SIGMA_USER_TO_INTEGER_CONVERT(int value, ADI_REG_TYPE * pData ) 
{
  pData[3] = value & 0xFF; //shift the bits to fill in the 4 byte array
  pData[2] = (value>>8) & 0xFF;
  pData[1] = (value>>16) & 0xFF;
  pData[0] = (value>>24) & 0xFF;
}





void SIGMA_WRITE_FREQ(int devAddress, int address,  int user_value_in_hz) //user_value_in_hz max = fs/2
{
  double fraction;
  ADI_REG_TYPE myArray[4] = {0}; //4 element array where the converted number will end up
  fraction = user_value_in_hz / (fs/2); //make the fraction based on the user set sampling frequency
  SIGMA_USER_TO_FIXPOINT_CONVERT(fraction, &myArray[0]); //convert to 4 element array
  SIGMA_WRITE_REGISTER_BLOCK( devAddress, address, 4, &myArray[0] ); //will always be 4 bytes (as far as anything I have encountered!)
  
}


void SIGMA_WRITE_LINEAR_GAIN(int devAddress, int address, double user_value) //user_value must be between -16 and 15.999
{
  ADI_REG_TYPE myArray[4] = {0}; //4 element array where the converted number will end up
  SIGMA_USER_TO_FIXPOINT_CONVERT(user_value, &myArray[0]); //convert user value into 4 element array
  SIGMA_WRITE_REGISTER_BLOCK( devAddress, address, 4, &myArray[0] );
}


void SIGMA_WRITE_VOLUME_FADER(int devAddress, int address, double user_value_in_dB) // +24dB to -145dB
{
  double z, q;
  ADI_REG_TYPE myArray[4] = {0};

  z = user_value_in_dB / 10; //process to convert dB value into what the DSP wants
  q = pow(10, z); //process to convert dB value into what the DSP wants


  SIGMA_USER_TO_FIXPOINT_CONVERT(q, &myArray[0]);


  SIGMA_WRITE_REGISTER_BLOCK( devAddress, address, 4, &myArray[0] );
}


double SIGMA_READBACK(int devAddress, int address)
{

  int negFlag = 0;
  double masking = 0;
  ADI_REG_TYPE MyArray[4] = {0};
  SIGMA_READ_REGISTER( devAddress, address, 4, &MyArray[0] );


  if(MyArray[0] & 0x08) // mask the sign bit and see if the number is a negative
  {
        negFlag = 1; //set flag if negative then invert the bits (seen below)
        MyArray[0] = ~MyArray[0];
        MyArray[0] = (MyArray[0] & 0x0F); //destroys the upper nibble (not useful in 28 bit format)
	MyArray[1] = ~MyArray[1];
        MyArray[2] = ~MyArray[2];
        MyArray[3] = ~MyArray[3];
  }


  conversion = MyArray[0]<<24 | MyArray[1]<<16 | MyArray[2]<<8 | MyArray[3]; //recreate the number from the 4 element array

  if(negFlag != 0)
  {
	conversion = (conversion + 1); // Part of 2's compliment
  }

  fraction = conversion / max;

  if(negFlag != 0)
	fraction = fraction * (0-1); //add the neg sign back to num if needed

  return fraction;

}

double SIGMA_READ_FREQ(int devAddress, int address)
{

  ADI_REG_TYPE MyArray[4] = {0};
  double freqReadBack=0;

  SIGMA_READ_REGISTER( devAddress, address, 4, &MyArray[0] );
  conversion = MyArray[0]<<24 | MyArray[1]<<16 | MyArray[2]<<8 | MyArray[3];
  fraction = conversion / max;

  freqReadBack = fraction * (fs/2);

  return freqReadBack;
}

double SIGMA_READ_LINEAR_GAIN(int devAddress, int address)
{

  ADI_REG_TYPE MyArray[4] = {0};
  double freqReadBack=0;

  SIGMA_READ_REGISTER( devAddress, address, 4, &MyArray[0] );
  conversion = MyArray[0]<<24 | MyArray[1]<<16 | MyArray[2]<<8 | MyArray[3];
  
  fraction = conversion / max;

  return fraction;

}

double SIGMA_READ_VOLUME_FADER(int devAddress, int address)
{

  ADI_REG_TYPE MyArray[4] = {0};
  double freqReadBack=0;
  double decibel;

  SIGMA_READ_REGISTER( devAddress, address, 4, &MyArray[0] );
  conversion = MyArray[0]<<24 | MyArray[1]<<16 | MyArray[2]<<8 | MyArray[3];

  fraction = conversion / max;

  decibel = 10 * log10(fraction);


  return decibel;
}

#endif


