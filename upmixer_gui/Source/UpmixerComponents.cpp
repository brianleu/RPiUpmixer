/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#include "UpmixerComponents.h"

#include "includeSigma/SigmaStudioFW.h"
#include "includeSigma/basic51_IC_1.h"
#include "includeSigma/basic51_IC_1_PARAM.h"

#include "Helicopter.h"


//==============================================================================
UpmixerComponents::UpmixerComponents ()
{
    addAndMakeVisible (RRslider = new Slider ("new slider"));
    RRslider->setRange (0, 1, 0.01);
    RRslider->setSliderStyle (Slider::LinearVertical);
    RRslider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    RRslider->addListener (this);
    
    addAndMakeVisible (RLslider = new Slider ("new slider"));
    RLslider->setRange (0, 1, 0.01);
    RLslider->setSliderStyle (Slider::LinearVertical);
    RLslider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    RLslider->addListener (this);
    
    addAndMakeVisible (LFEslider = new Slider ("new slider"));
    LFEslider->setRange (0, 0.5, 0.01);
    LFEslider->setSliderStyle (Slider::LinearVertical);
    LFEslider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    LFEslider->addListener (this);
    
    addAndMakeVisible (Cslider = new Slider ("new slider"));
    Cslider->setRange (0, 2, 0.01);
    Cslider->setSliderStyle (Slider::LinearVertical);
    Cslider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    Cslider->addListener (this);
    
    addAndMakeVisible (FLslider = new Slider ("new slider"));
    FLslider->setRange (0, 1, 0.01);
    FLslider->setSliderStyle (Slider::LinearVertical);
    FLslider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    FLslider->addListener (this);
    
    addAndMakeVisible (FRslider = new Slider ("new slider"));
    FRslider->setRange (0, 1, 0.01);
    FRslider->setSliderStyle (Slider::LinearVertical);
    FRslider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    FRslider->addListener (this);
    
    addAndMakeVisible (modeLabel = new Label ("new label",
                                              String::empty));
    modeLabel->setFont (Font (15.00f, Font::plain));
    modeLabel->setJustificationType (Justification::centred);
    modeLabel->setEditable (false, false, false);
    modeLabel->setColour (TextEditor::textColourId, Colours::black);
    modeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    
    addAndMakeVisible (cutoffSliderLFE = new Slider ("new slider"));
    cutoffSliderLFE->setRange (0, 400, 1);
    cutoffSliderLFE->setSliderStyle (Slider::LinearVertical);
    cutoffSliderLFE->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    cutoffSliderLFE->addListener (this);
    cutoffSliderLFE->setValue(200);
    
    addAndMakeVisible (cutoffSliderSurround = new Slider ("new slider"));
    cutoffSliderSurround->setRange (0, 7000, 1);
    cutoffSliderSurround->setSliderStyle (Slider::LinearVertical);
    cutoffSliderSurround->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    cutoffSliderSurround->addListener (this);
    cutoffSliderSurround->setValue(7000);
    
    addAndMakeVisible (cutoffSliderC = new Slider ("new slider"));
    cutoffSliderC->setRange (0, 7000, 1);
    cutoffSliderC->setSliderStyle (Slider::LinearVertical);
    cutoffSliderC->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    cutoffSliderC->addListener (this);
    cutoffSliderC->setValue(7000);
    
    addAndMakeVisible (delaySlider = new Slider ("new slider"));
    delaySlider->setRange (0, 100, 1);
    delaySlider->setSliderStyle (Slider::LinearHorizontal);
    delaySlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    delaySlider->addListener (this);
    
    addAndMakeVisible (sourceComboBox = new ComboBox ("new combo box"));
    sourceComboBox->setEditableText (false);
    sourceComboBox->setJustificationType (Justification::centredLeft);
    sourceComboBox->setTextWhenNothingSelected (TRANS("Stereo"));
    sourceComboBox->setTextWhenNoChoicesAvailable (TRANS("Stereo"));
    sourceComboBox->addItem (TRANS("Mono"), 1);
    sourceComboBox->addItem (TRANS("Stereo"), 2);
    sourceComboBox->addItem (TRANS("Karaoke"), 3);
    sourceComboBox->addListener (this);
    
    addAndMakeVisible (modeComboBox = new ComboBox ("new combo box"));
    modeComboBox->setEditableText (false);
    modeComboBox->setJustificationType (Justification::centredLeft);
    modeComboBox->setTextWhenNothingSelected (TRANS("User Input"));
    modeComboBox->setTextWhenNoChoicesAvailable (TRANS("User Input"));
    modeComboBox->addItem (TRANS("Decoder"), 1);
    modeComboBox->addItem (TRANS("User Input"), 2);
    modeComboBox->addItem (TRANS("Manual Source Adjustment"), 3);
    modeComboBox->addItem (TRANS("Sound Source Rotation"), 4);
    modeComboBox->addListener (this);
    
    cachedImage_slide1_png4 = ImageCache::getFromMemory (slide1_png4, slide1_png4Size);
    
    setSize (800, 480);

    default_download_IC_1();
}

UpmixerComponents::~UpmixerComponents()
{
    RRslider = nullptr;
    RLslider = nullptr;
    LFEslider = nullptr;
    Cslider = nullptr;
    FLslider = nullptr;
    FRslider = nullptr;
    modeLabel = nullptr;
    cutoffSliderLFE = nullptr;
    cutoffSliderSurround = nullptr;
    cutoffSliderC = nullptr;
    delaySlider = nullptr;
    sourceComboBox = nullptr;
    modeComboBox = nullptr;
}

//==============================================================================
void UpmixerComponents::paint (Graphics& g)
{
    g.fillAll (Colours::white);
    
    g.setColour (Colours::black);
    g.drawImage (cachedImage_slide1_png4,
                 0, 0, 800, 480,
                 0, 0, cachedImage_slide1_png4.getWidth(), cachedImage_slide1_png4.getHeight());
}

void UpmixerComponents::resized()
{
    RRslider->setBounds (165, 219, 23, 200);
    RLslider->setBounds (140, 219, 23, 200);
    LFEslider->setBounds (191, 219, 23, 200);
    Cslider->setBounds (115, 219, 23, 200);
    FLslider->setBounds (65, 219, 23, 200);
    FRslider->setBounds (90, 219, 23, 200);
    modeLabel->setBounds (240, 85, 144, 24);
    cutoffSliderLFE->setBounds (346, 216, 40, 88);
    cutoffSliderSurround->setBounds (302, 216, 40, 88);
    cutoffSliderC->setBounds (259, 216, 40, 88);
    delaySlider->setBounds (262, 379, 128, 40);
    sourceComboBox->setBounds (329, 74, 136, 21);
    modeComboBox->setBounds (539, 74, 189, 21);
}

void UpmixerComponents::sliderValueChanged (Slider* sliderThatWasMoved)
{
    if (sliderThatWasMoved == RRslider)
    {
        RRslidervalue = RRslider->getValue();
        SIGMA_WRITE_LINEAR_GAIN(DEVICE_ADDR_IC_1, MOD_OUTPUTMIXER_ALG5_GAINALGNS145X6GAIN_ADDR, RRslidervalue);
    }
    else if (sliderThatWasMoved == RLslider)
    {
        RLslidervalue = RLslider->getValue();
        SIGMA_WRITE_LINEAR_GAIN(DEVICE_ADDR_IC_1, MOD_OUTPUTMIXER_ALG4_GAINALGNS145X5GAIN_ADDR, RLslidervalue);
    }
    else if (sliderThatWasMoved == LFEslider)
    {
        LFEslidervalue = LFEslider->getValue();
        SIGMA_WRITE_LINEAR_GAIN(DEVICE_ADDR_IC_1, MOD_OUTPUTMIXER_ALG3_GAINALGNS145X4GAIN_ADDR, LFEslidervalue);
    }
    else if (sliderThatWasMoved == Cslider)
    {
        Cslidervalue = Cslider->getValue();
        SIGMA_WRITE_LINEAR_GAIN(DEVICE_ADDR_IC_1, MOD_OUTPUTMIXER_ALG2_GAINALGNS145X3GAIN_ADDR, Cslidervalue);
    }
    else if (sliderThatWasMoved == FLslider)
    {
        FLslidervalue = FLslider->getValue();
        SIGMA_WRITE_LINEAR_GAIN(DEVICE_ADDR_IC_1, MOD_OUTPUTMIXER_ALG0_TARGET_ADDR, FLslidervalue);
    }
    else if (sliderThatWasMoved == FRslider)
    {
        FRslidervalue = FRslider->getValue();
        SIGMA_WRITE_LINEAR_GAIN(DEVICE_ADDR_IC_1, MOD_OUTPUTMIXER_ALG1_GAINALGNS145X2GAIN_ADDR, FRslidervalue);
    }
    else if (sliderThatWasMoved == cutoffSliderLFE)
    {
        LFECutoffvalue = cutoffSliderLFE->getValue();
        IIRCoefficients coeffs (IIRCoefficients::makeLowPass(fs, LFECutoffvalue));
        ADI_REG_TYPE writeData[4] = {0};
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[0], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE0_B0_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE1_B0_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE2_B0_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[1], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE0_B1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE1_B1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE2_B1_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[2], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE0_B2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE1_B2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE2_B2_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[3], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE0_A1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE1_A1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE2_A1_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[4], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE0_A2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE1_A2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_LFEFILTER_ALG0_STAGE2_A2_ADDR, 4, writeData);
    }
    else if (sliderThatWasMoved == cutoffSliderSurround)
    {
        surroundCutoffvalue = cutoffSliderSurround->getValue();
        IIRCoefficients coeffs (IIRCoefficients::makeLowPass(44100, surroundCutoffvalue));
        ADI_REG_TYPE writeData[4] = {0};
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[0], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE0_B0_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE1_B0_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE2_B0_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[1], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE0_B1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE1_B1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE2_B1_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[2], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE0_B2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE1_B2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE2_B2_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[3], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE0_A1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE1_A1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE2_A1_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[4], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE0_A2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE1_A2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDFILTER_ALG0_STAGE2_A2_ADDR, 4, writeData);
    }
    else if (sliderThatWasMoved == cutoffSliderC)
    {
        centerCutoffvalue = cutoffSliderC->getValue();
        IIRCoefficients coeffs (IIRCoefficients::makeLowPass(44100, centerCutoffvalue));
        ADI_REG_TYPE writeData[4] = {0};
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[0], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE0_B0_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE1_B0_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE2_B0_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[1], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE0_B1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE1_B1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE2_B1_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[2], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE0_B2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE1_B2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE2_B2_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[3], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE0_A1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE1_A1_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE2_A1_ADDR, 4, writeData);
        SIGMA_USER_TO_FIXPOINT_CONVERT( coeffs.coefficients[4], writeData );
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE0_A2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE1_A2_ADDR, 4, writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_CFILTER_ALG0_STAGE2_A2_ADDR, 4, writeData);
    }
    else if (sliderThatWasMoved == delaySlider)
    {
	    ADI_REG_TYPE writeData[4] = {0};
        delaySlidervalue = delaySlider->getValue();
	    SIGMA_USER_TO_INTEGER_CONVERT(round(delaySlidervalue*fs/1000), writeData);
        SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SURROUNDDELAY_DELAYAMT_ADDR, 4, writeData);
    }
    
    
}

void UpmixerComponents::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    String comboItem;
    
    if (comboBoxThatHasChanged == sourceComboBox)
    {
        comboItem = sourceComboBox->getText();
        
        ADI_REG_TYPE selectBoth[4] = {0x00, 0x00, 0x00, 0x04};
        ADI_REG_TYPE selectMono[4] = {0x00, 0x00, 0x00, 0x02};
	    ADI_REG_TYPE selectStereo[4] = {0x00, 0x00, 0x00, 0x00}; 
        if (comboItem == "Mono")
        {
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SOURCESELECT_STEREOMUXSIGMA300NS1INDEX_ADDR, 4, selectMono);

        }
        else if (comboItem == "Stereo")
        {
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SOURCESELECT_STEREOMUXSIGMA300NS1INDEX_ADDR, 4, selectStereo);

        }
        else if (comboItem == "Karaoke")
        {
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_SOURCESELECT_STEREOMUXSIGMA300NS1INDEX_ADDR, 4, selectBoth);

        }
    }
    else if (comboBoxThatHasChanged == modeComboBox)
    {
        comboItem = modeComboBox->getText();

        ADI_REG_TYPE volOff[4] = {0x00, 0x00, 0x00, 0x00};
        ADI_REG_TYPE volOn[4] = {0x01, 0x00, 0x00, 0x00}; 
        
        if (comboItem == "Decoder")
        {
            decoderMode = true;
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL0_ADDR, 4, volOn);
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL1_ADDR, 4, volOff);
        }
        else if (comboItem == "User Input")
        {
            userInputMode = true;
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL0_ADDR, 4, volOn);
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL1_ADDR, 4, volOff);
        }
        else if (comboItem == "Manual Source Adjustment")
        {
            manualSourceMode = true;
            LFEslider->setValue(0.25);
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL0_ADDR, 4, volOn);
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL1_ADDR, 4, volOff);
        }
        else if (comboItem == "Sound Source Rotation")
        {
            sourceRotationMode = true;
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL0_ADDR, 4, volOff);
            SIGMA_WRITE_REGISTER_BLOCK(DEVICE_ADDR_IC_1, MOD_2XN_1_ALG0_STEREODEMUXSIGMA300NS1VOL1_ADDR, 4, volOn);
            double FLgain, FRgain, Cgain, RLgain, RRgain;
            
            // Update the sliders with gain values for the sound source rotation
            // Values are stored in Helicopter.h
            int i = 0;
            int j = 0;

            for (j = 0; j < 3; j++){
                for (i = 0; i < 8820; i++)
                {
                    FLgain = FL_channel[i];
                    FRgain = FR_channel[i];
                    Cgain = C_channel[i];
                    RLgain = RL_channel[i];
                    RRgain = RR_channel[i];

                    FLslider->setValue(FLgain,sendNotificationSync);
                    FRslider->setValue(FRgain,sendNotificationSync);
                    Cslider->setValue(Cgain,sendNotificationSync);
                    RLslider->setValue(RLgain,sendNotificationSync);
                    RRslider->setValue(RRgain,sendNotificationSync);

                    repaint();

                    usleep(1000);
                }
            }
        }
    }
}

void UpmixerComponents::mouseDrag (const MouseEvent& event)
{
    if (manualSourceMode){
        handleMouse (event);
    }
}

void UpmixerComponents::handleMouse (const MouseEvent& event)
{
    if (manualSourceMode){
        
        x = event.x;
        y = event.y;
        
        // If the mouse is outside of the grid range
        // saturate to the max values of x and y
        
        if (x > 736 || y > 430)
        {
            x = 736;
            y = 430;
        }
        else if (x < 451 || y < 173){
            x = 451;
            y = 173;
        }
        
        // Convert x and y to strings
        xCoord = String(x);
        yCoord = String(y);
        
        //xLabel->setText(xCoord, sendNotification);
        //yLabel->setText(yCoord, sendNotification);
        
        double gain;
        
        // Update the gain values based on the distance from each speaker
        
        // FL gain
        gain = 50 / (sqrt (pow((x - 451), 2) + pow((y - 173), 2)) );
        FLslider->setValue(gain);
        
        // FR gain
        gain = 50 / (sqrt (pow((x - 736), 2) + pow((y - 173), 2)) );
        FRslider->setValue(gain);
        
        // C gain
        gain = 100 / (sqrt (pow((x - 590), 2) + pow((y - 173), 2)) );
        Cslider->setValue(gain);
        
        // RL gain
        gain = 100 / (sqrt (pow((x - 451), 2) + pow((y - 430), 2)) );
        RLslider->setValue(gain);
    
        // RR gain
        gain = 100 / (sqrt (pow((x - 736), 2) + pow((y - 430), 2)) );
        RRslider->setValue(gain);
    }
}



//==============================================================================
//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: slide1_png, 23188, "../../Winter 2015/EECS 452/project/gui/Slide1.png"
static const unsigned char resource_UpmixerComponents_slide1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,208,0,0,1,176,8,6,0,0,0,128,75,82,91,0,0,3,240,105,67,67,80,73,67,67,32,80,114,
    111,102,105,108,101,0,0,56,141,141,85,221,111,219,84,20,63,137,111,92,164,22,63,160,177,142,14,21,139,175,85,83,91,185,27,26,173,198,6,73,147,165,233,66,26,185,205,216,42,164,201,117,110,26,83,215,54,
    182,211,109,85,159,246,2,111,12,248,3,128,178,7,30,144,120,66,26,12,196,246,178,237,1,180,73,83,65,21,213,36,164,61,116,218,64,104,147,246,130,170,112,174,175,83,187,93,198,184,145,175,127,57,231,119,
    62,239,209,53,64,199,87,154,227,152,73,25,96,222,242,93,53,159,145,143,159,152,150,59,86,33,9,207,65,39,244,64,167,166,123,78,186,92,46,2,46,198,133,71,214,195,95,33,193,222,55,7,218,235,255,115,117,86,
    169,167,3,36,158,66,108,87,61,125,30,241,105,128,148,169,59,174,15,32,222,70,249,240,41,223,65,220,241,60,226,29,46,38,136,88,97,120,150,227,44,195,51,28,31,15,56,83,234,40,98,150,139,164,215,181,42,226,
    37,196,253,51,49,249,108,12,243,28,130,181,35,79,45,234,26,186,204,122,81,118,237,154,97,210,88,186,79,80,255,207,53,111,54,90,241,122,241,233,242,230,38,143,226,187,143,213,94,119,199,212,16,127,174,
    107,185,73,196,47,35,190,230,248,25,38,127,21,241,189,198,92,37,141,120,47,64,242,153,154,123,164,194,249,201,55,22,235,83,239,32,222,137,184,106,248,133,169,80,190,104,205,148,38,184,109,114,121,206,
    62,170,134,156,107,186,55,138,61,131,23,17,223,170,211,66,145,231,35,64,149,102,115,172,95,136,123,235,141,177,208,191,48,238,45,76,230,90,126,22,235,163,37,238,71,112,223,211,198,203,136,123,16,127,232,
    218,234,4,207,89,88,166,102,94,229,254,133,43,142,95,14,115,16,214,45,179,84,228,62,137,68,189,160,198,64,238,215,167,198,184,45,57,224,227,33,114,91,50,93,51,142,20,66,254,146,99,6,179,136,185,145,243,
    110,67,173,132,156,27,154,155,203,115,63,228,62,181,42,161,207,212,174,170,150,101,189,29,68,124,24,142,37,52,160,96,195,12,238,58,88,176,1,50,168,144,135,12,190,29,112,81,83,3,3,76,148,80,212,82,148,
    24,137,167,97,14,101,237,121,229,128,195,113,196,152,13,172,215,153,53,70,105,207,225,17,238,132,28,155,116,19,133,236,199,231,32,41,146,67,100,152,140,128,76,222,36,111,145,195,36,139,210,17,114,112,
    211,182,28,139,207,98,221,217,244,243,62,52,208,43,227,29,131,204,185,158,70,95,20,239,172,123,210,208,175,127,244,247,22,107,251,145,156,105,43,159,120,7,192,195,14,180,152,3,241,250,175,46,253,176,43,
    242,177,66,46,188,123,179,235,234,18,76,60,169,191,169,219,169,245,212,10,238,171,169,181,136,145,250,61,181,134,191,85,72,99,110,102,144,209,60,62,70,144,135,23,203,32,94,195,101,124,124,208,112,255,
    3,121,118,140,183,37,98,205,58,215,19,105,88,39,232,7,165,135,37,56,219,31,73,149,223,148,63,149,21,229,11,229,188,114,119,91,151,219,118,73,248,84,248,86,248,81,248,78,248,94,248,25,100,225,146,112,89,
    248,73,184,34,124,35,92,140,157,213,227,231,99,243,236,131,122,91,213,50,77,187,94,83,48,165,140,180,91,122,73,202,74,47,72,175,72,197,200,159,212,45,13,73,99,210,30,212,236,222,60,183,120,188,120,45,
    6,156,192,189,213,213,246,177,56,175,130,90,3,78,5,21,120,65,135,45,56,179,109,254,67,107,210,75,134,72,97,219,212,14,179,89,110,49,196,156,152,21,211,32,139,123,197,17,113,72,28,103,184,149,159,184,7,
    117,35,184,231,182,76,157,254,152,10,104,140,21,175,115,32,152,58,54,171,204,122,33,208,121,64,125,122,218,103,23,237,168,237,156,113,141,217,186,47,239,83,148,215,229,52,126,170,168,92,176,244,193,126,
    89,51,77,57,80,121,178,75,61,234,46,208,234,32,176,239,32,191,162,31,168,193,247,45,177,243,122,36,243,223,6,56,244,23,222,89,55,34,217,116,3,224,107,15,160,251,181,72,214,135,119,226,179,159,1,92,56,
    160,55,220,133,240,206,79,36,126,1,240,106,251,247,241,127,93,25,188,155,110,53,155,15,240,190,234,248,4,96,227,227,102,243,159,229,102,115,227,75,244,191,6,112,201,252,23,89,0,113,120,18,181,225,134,
    0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,64,0,73,68,65,84,120,1,237,221,7,156,36,85,185,247,241,167,195,244,228,13,51,155,227,44,203,2,178,11,146,163,32,176,176,4,1,175,10,74,48,92,
    84,68,185,10,134,171,152,80,240,21,21,81,20,189,138,32,32,72,70,64,145,140,68,201,57,44,176,128,192,46,155,115,156,216,241,61,79,237,86,211,211,219,61,51,61,211,85,93,85,253,171,207,103,232,80,213,39,
    124,79,177,243,239,51,167,171,67,145,182,99,51,194,134,0,2,8,32,128,0,2,8,32,128,0,2,3,18,8,15,232,40,14,66,0,1,4,16,64,0,1,4,16,64,0,1,75,128,0,205,137,128,0,2,8,32,128,0,2,8,32,128,64,9,2,4,232,18,176,
    56,20,1,4,16,64,0,1,4,16,64,0,1,2,52,231,0,2,8,32,128,0,2,8,32,128,0,2,37,8,16,160,75,192,226,80,4,16,64,0,1,4,16,64,0,1,4,8,208,156,3,8,32,128,0,2,8,32,128,0,2,8,148,32,64,128,46,1,139,67,17,64,0,1,4,
    16,64,0,1,4,16,32,64,115,14,32,128,0,2,8,32,128,0,2,8,32,80,130,0,1,186,4,44,14,69,0,1,4,16,64,0,1,4,16,64,128,0,205,57,128,0,2,8,32,128,0,2,8,32,128,64,9,2,4,232,18,176,56,20,1,4,16,64,0,1,4,16,64,0,
    1,2,52,231,0,2,8,32,128,0,2,8,32,128,0,2,37,8,16,160,75,192,226,80,4,16,64,0,1,4,16,64,0,1,4,8,208,156,3,8,32,128,0,2,8,32,128,0,2,8,148,32,64,128,46,1,139,67,17,64,0,1,4,16,64,0,1,4,16,32,64,115,14,32,
    128,0,2,8,32,128,0,2,8,32,80,130,0,1,186,4,44,14,69,0,1,4,16,64,0,1,4,16,64,128,0,205,57,128,0,2,8,32,128,0,2,8,32,128,64,9,2,4,232,18,176,56,20,1,4,16,64,0,1,4,16,64,0,1,2,52,231,0,2,8,32,128,0,2,8,32,
    128,0,2,37,8,16,160,75,192,226,80,4,16,64,0,1,4,16,64,0,1,4,8,208,156,3,8,32,128,0,2,8,32,128,0,2,8,148,32,64,128,46,1,139,67,17,64,0,1,4,16,64,0,1,4,16,32,64,115,14,32,128,0,2,8,32,128,0,2,8,32,80,130,
    0,1,186,4,44,14,69,0,1,4,16,64,0,1,4,16,64,128,0,205,57,128,0,2,8,32,128,0,2,8,32,128,64,9,2,4,232,18,176,56,20,1,4,16,64,0,1,4,16,64,0,1,2,52,231,0,2,8,32,128,0,2,8,32,128,0,2,37,8,16,160,75,192,226,
    80,4,16,64,0,1,4,16,64,0,1,4,8,208,156,3,8,32,128,0,2,8,32,128,0,2,8,148,32,64,128,46,1,139,67,17,64,0,1,4,16,64,0,1,4,16,32,64,115,14,32,128,0,2,8,32,128,0,2,8,32,80,130,64,180,132,99,61,115,104,70,66,
    158,105,11,13,41,77,32,36,153,210,94,192,209,8,32,128,0,2,8,32,128,128,199,4,124,23,160,173,248,101,254,19,14,85,46,136,105,128,207,216,213,251,37,203,171,153,134,215,10,181,87,185,50,25,227,22,10,169,
    158,199,254,55,160,57,8,32,128,0,2,8,32,128,192,192,5,124,23,160,181,107,99,70,116,203,71,247,93,34,219,142,235,150,76,202,221,68,168,225,175,59,25,150,71,231,181,200,163,175,142,146,238,68,84,66,21,12,
    243,3,25,234,250,154,180,124,230,224,249,210,54,166,199,188,241,24,200,43,202,123,76,40,146,150,185,11,155,228,198,71,166,72,34,197,170,161,242,234,82,26,2,8,32,128,0,2,8,184,45,224,191,0,109,102,49,71,
    54,38,229,168,221,86,203,254,179,58,68,226,46,39,66,83,93,218,140,210,78,109,237,210,221,29,145,39,230,141,182,30,187,61,112,3,173,47,147,14,201,199,247,93,36,103,126,116,153,140,106,74,72,69,178,126,
    109,70,238,122,170,91,110,121,108,178,36,146,6,176,34,141,24,168,24,199,33,128,0,2,8,32,128,0,2,125,11,248,47,64,155,254,132,195,25,105,136,165,165,165,206,44,5,136,84,102,57,192,33,59,182,203,210,53,
    203,100,233,218,58,121,103,89,179,132,42,212,142,190,134,55,99,102,123,119,219,110,149,156,113,244,82,153,222,18,151,168,113,171,200,22,203,72,157,153,5,55,171,55,216,16,64,0,1,4,16,64,0,1,223,11,248,
    50,64,171,186,181,6,89,167,130,205,12,107,37,182,38,19,8,143,217,109,173,188,187,188,65,46,191,191,86,214,183,199,36,84,169,128,90,0,32,99,108,198,142,236,144,239,126,236,61,153,53,161,91,162,202,84,33,
    43,29,172,236,154,241,2,109,229,41,4,16,64,0,1,4,16,64,192,79,2,44,72,29,236,104,153,165,36,227,71,38,229,83,251,175,144,217,59,173,146,88,212,36,214,10,77,240,22,234,66,173,89,119,252,149,35,23,200,65,
    51,55,74,109,212,67,13,43,212,88,158,67,0,1,4,16,64,0,1,4,124,36,224,219,25,104,47,24,235,132,243,172,201,221,114,194,1,203,100,193,170,122,121,254,237,22,79,124,160,80,151,110,28,181,223,18,57,241,192,
    213,50,178,62,101,168,204,244,51,25,122,72,167,204,177,123,172,150,125,102,108,144,58,179,116,136,13,129,114,9,108,50,159,163,248,215,203,173,242,216,27,195,203,85,36,229,32,128,0,2,8,184,32,64,128,30,
    10,178,153,133,174,53,41,122,246,204,77,178,96,229,50,89,177,190,86,22,175,110,172,232,82,14,13,207,31,152,186,86,190,113,204,34,105,27,25,55,151,174,35,60,15,101,136,107,204,236,253,45,255,59,87,14,255,
    224,154,161,20,195,107,17,40,42,240,221,255,122,79,254,112,207,36,249,230,85,51,138,30,195,14,4,16,64,0,1,111,9,176,132,99,168,227,97,66,244,240,134,148,124,124,239,53,114,236,94,43,165,169,62,33,122,
    229,139,74,108,186,206,120,120,99,183,124,251,163,11,100,215,169,93,230,67,131,149,105,71,37,250,238,84,157,103,28,181,136,240,236,20,46,229,102,5,254,231,136,197,114,4,111,210,178,30,220,65,0,1,4,188,
    46,64,128,46,199,8,153,191,234,79,110,141,203,137,7,44,151,15,239,184,70,162,21,186,34,71,141,201,203,95,156,243,158,28,177,251,6,169,215,53,217,186,177,116,99,179,195,32,255,123,180,185,92,34,27,2,110,
    8,28,99,150,9,177,33,128,0,2,8,248,67,128,0,93,150,113,10,73,196,148,179,107,91,167,124,234,195,203,228,3,147,55,152,89,104,119,105,245,11,101,14,217,117,169,124,254,208,149,50,186,62,105,214,98,179,116,
    163,28,67,59,194,92,115,156,13,1,55,4,56,215,220,80,166,14,4,16,64,160,60,2,172,129,46,143,163,153,233,13,73,189,153,121,62,98,167,117,178,96,121,189,172,52,235,161,87,172,111,48,235,161,157,255,208,153,
    134,231,109,38,110,148,255,61,102,177,76,31,213,109,190,109,144,240,92,174,97,165,28,4,16,64,0,1,4,16,64,32,95,192,221,105,210,252,218,131,246,216,132,232,214,166,180,28,183,239,42,57,114,183,85,82,31,
    75,88,193,218,201,110,234,186,231,102,179,238,250,27,199,44,144,61,182,237,144,26,214,61,59,201,77,217,8,32,128,0,2,8,32,128,128,48,3,93,238,147,192,4,218,233,99,123,228,4,179,148,99,225,234,122,121,120,
    238,40,71,151,33,107,94,62,233,160,133,230,3,140,235,164,217,186,196,26,179,207,229,30,210,98,229,133,154,247,145,80,221,54,197,118,243,60,2,91,9,100,58,94,144,76,231,27,91,61,207,19,8,32,128,0,2,254,
    18,32,64,151,123,188,204,44,116,52,148,145,253,204,108,240,39,15,88,42,47,191,59,82,214,182,27,102,7,190,165,80,151,110,236,62,99,181,124,229,136,101,50,190,201,172,123,230,146,117,229,30,205,62,203,11,
    141,253,111,9,141,58,169,207,99,216,137,64,47,129,133,103,19,160,123,129,240,0,1,4,16,240,167,0,75,56,156,24,55,19,162,27,245,171,190,119,93,39,251,207,92,97,190,124,195,124,153,137,121,174,156,155,94,
    42,111,108,75,167,124,249,200,37,178,221,216,110,137,104,241,92,113,163,156,196,148,133,0,2,8,32,128,0,2,8,20,20,32,64,23,100,41,195,147,38,48,143,29,158,148,255,57,114,177,236,56,105,147,249,96,159,249,
    48,97,25,67,116,93,52,41,159,63,100,177,204,217,121,157,212,90,233,185,12,109,166,8,4,16,64,0,1,4,16,64,0,129,126,5,8,208,253,18,13,254,0,179,146,67,246,223,161,93,62,51,123,145,76,108,233,30,124,65,121,
    175,212,217,231,195,119,95,33,199,125,104,165,140,51,33,221,218,152,125,206,83,226,33,2,8,32,128,0,2,8,32,224,140,0,1,218,25,215,205,165,154,25,231,122,179,246,249,196,253,87,203,209,251,44,151,225,230,
    250,204,50,196,111,41,204,164,34,50,115,234,58,57,117,206,82,217,193,124,88,81,175,63,205,210,13,39,7,145,178,17,64,0,1,4,16,64,0,129,222,2,4,232,222,30,229,127,100,66,244,168,166,148,156,54,123,137,236,
    185,195,106,137,69,7,191,30,90,103,158,71,14,235,148,175,28,190,88,246,153,209,46,117,214,71,64,203,187,182,186,252,0,148,88,138,192,226,197,139,229,173,183,222,146,120,60,94,202,203,56,118,144,2,151,
    93,118,153,28,115,204,49,114,220,113,199,13,178,4,94,134,0,2,8,32,80,141,2,4,104,55,70,221,92,45,99,135,73,61,242,229,57,139,101,198,132,14,179,30,218,172,183,24,196,146,139,88,56,37,39,31,184,68,142,
    216,109,173,140,168,51,65,92,183,65,148,179,249,133,252,215,43,2,207,61,247,156,28,118,216,97,50,98,196,8,153,60,121,178,108,191,253,246,210,210,210,34,167,158,122,170,172,94,29,236,175,119,126,240,193,
    7,101,210,164,73,217,159,131,15,62,120,171,97,73,38,147,50,115,230,204,236,49,122,252,59,239,188,179,213,113,131,121,226,245,215,95,151,59,238,184,67,238,186,235,174,193,188,156,215,32,128,0,2,8,84,169,
    128,111,47,99,23,209,203,194,233,79,161,9,216,108,168,44,180,179,50,35,29,53,109,154,189,243,70,153,183,100,145,252,223,63,183,149,21,27,107,77,67,178,13,237,183,81,153,84,88,14,220,109,133,156,124,208,
    114,153,52,50,225,193,75,214,21,25,11,237,153,121,195,96,141,87,191,189,172,190,3,206,62,251,108,249,217,207,126,38,233,116,239,111,172,236,232,232,16,157,29,93,184,112,161,220,123,239,189,190,130,185,
    224,130,11,100,193,130,5,178,195,14,59,200,215,190,246,181,62,219,222,221,221,45,75,150,44,201,30,163,247,95,123,237,53,43,48,219,79,222,119,223,125,162,65,55,119,211,80,205,134,0,2,8,32,128,64,165,4,
    124,25,160,83,102,41,195,186,142,168,172,222,96,38,208,147,189,39,209,53,146,106,108,174,143,101,164,209,252,120,102,51,75,57,154,163,105,249,220,129,43,229,141,37,77,114,219,19,19,164,189,167,198,10,
    151,253,181,81,151,110,76,159,184,222,44,221,88,42,179,38,116,75,141,118,208,67,93,211,246,111,236,9,75,119,60,100,102,215,11,244,166,59,36,27,186,162,162,223,154,200,246,190,128,206,124,254,244,167,63,
    181,158,168,171,171,147,111,125,235,91,178,255,254,251,203,170,85,171,228,247,191,255,189,212,215,215,203,53,215,92,243,254,11,124,114,239,230,155,111,150,103,158,121,70,102,207,158,221,111,128,206,237,
    82,200,124,5,125,198,156,36,215,93,119,157,156,119,222,121,217,93,250,88,55,123,127,118,7,119,16,64,0,1,4,16,168,144,128,47,3,244,210,181,117,242,203,191,207,144,63,63,96,214,137,154,229,17,189,54,19,
    210,134,155,229,13,71,238,185,92,62,119,192,218,33,127,104,175,87,217,67,125,96,66,244,248,145,41,249,154,89,195,188,112,101,131,60,57,175,69,146,105,243,49,64,93,210,81,100,203,152,137,201,97,13,113,
    57,205,44,255,248,208,246,27,164,193,100,238,205,111,17,138,188,160,18,79,71,50,114,241,3,163,229,177,87,198,73,82,147,125,222,144,132,204,254,21,235,106,37,158,247,102,167,18,77,245,74,157,26,20,79,59,
    237,52,171,57,145,72,68,30,121,228,17,217,107,175,189,178,205,59,225,132,19,172,192,88,83,99,13,184,44,91,182,76,214,173,91,39,209,104,84,182,219,110,59,235,56,157,165,126,239,189,247,172,251,109,109,
    109,18,139,197,172,245,211,250,196,248,241,227,165,182,182,86,30,125,244,81,107,57,200,174,187,238,90,116,223,158,123,238,105,149,161,179,224,111,188,241,134,188,249,230,155,214,114,137,15,126,240,131,
    86,153,186,83,103,124,117,109,182,110,186,204,164,189,189,93,158,124,242,73,153,48,97,130,104,217,90,215,250,245,235,101,233,210,165,210,213,213,101,29,167,237,211,153,227,112,56,108,205,70,91,79,246,
    241,159,15,125,232,67,86,123,175,191,254,122,235,141,133,6,102,45,227,31,255,248,135,245,170,3,15,60,208,114,42,84,68,42,149,146,121,243,230,89,109,156,56,113,162,204,154,53,75,26,27,27,183,58,84,13,159,
    122,234,41,235,205,201,238,187,239,190,213,254,220,39,214,174,93,43,175,188,242,138,213,87,237,163,150,203,134,0,2,8,32,128,128,10,248,47,64,155,176,217,209,29,149,151,222,25,97,114,90,129,224,105,66,
    234,200,134,132,204,152,186,97,171,32,231,133,33,15,153,165,203,59,79,235,150,47,29,190,80,86,152,55,2,111,47,111,146,180,118,35,47,116,218,109,213,217,230,227,247,91,34,199,236,185,86,90,26,116,221,179,
    121,162,64,183,237,227,43,114,107,150,210,204,93,212,36,15,189,60,218,188,159,209,0,189,117,3,51,166,221,250,151,131,66,251,42,210,230,10,87,170,107,120,53,108,234,246,185,207,125,174,87,120,214,231,52,
    12,231,110,63,250,209,143,172,37,29,99,198,140,145,21,43,86,88,187,52,8,30,122,232,161,214,125,93,75,172,193,90,215,10,235,246,253,239,127,95,254,242,151,191,88,193,251,211,159,254,180,252,226,23,191,
    40,186,239,234,171,175,150,103,159,125,86,190,244,165,47,201,75,47,189,100,189,94,255,163,229,221,116,211,77,162,65,90,235,180,203,62,229,148,83,172,89,226,158,158,30,235,216,157,119,222,89,30,120,224,
    1,185,245,214,91,179,111,10,116,135,182,79,95,163,65,86,3,119,127,219,199,63,254,113,121,236,177,199,100,254,252,249,86,56,223,111,191,253,228,182,219,110,179,66,116,107,107,171,213,87,125,163,145,191,
    233,107,244,205,72,238,50,15,93,67,174,125,214,117,228,246,166,30,95,254,242,151,179,31,208,212,181,212,219,110,187,173,189,59,123,155,72,36,228,156,115,206,145,95,253,234,87,217,99,53,204,127,251,219,
    223,182,202,212,251,108,8,32,128,0,2,213,45,208,123,253,131,79,44,50,38,36,39,205,154,224,132,185,164,91,161,159,100,58,44,169,173,51,156,71,122,23,146,152,73,192,71,237,186,81,62,182,255,18,25,217,152,
    48,237,42,252,11,89,215,61,239,97,174,220,241,153,67,86,200,180,214,30,179,60,194,28,231,209,126,165,204,76,121,194,204,166,39,140,125,193,49,49,125,41,231,23,201,120,100,48,7,221,140,151,95,126,57,251,
    90,13,138,229,222,206,63,255,124,89,190,124,185,53,91,172,75,65,114,183,252,125,122,229,143,195,15,63,220,10,207,26,200,191,251,221,239,202,212,169,83,173,217,220,79,126,242,147,162,129,50,119,211,32,
    170,75,78,116,214,89,55,157,165,189,252,242,203,173,15,65,106,232,214,125,186,53,52,52,88,33,124,198,140,25,214,227,254,254,163,129,214,182,176,151,109,92,123,237,181,214,203,62,241,137,79,136,61,27,159,
    91,206,219,111,191,45,71,30,121,100,54,60,15,27,54,204,218,173,179,199,250,134,224,134,27,110,176,30,235,7,53,191,240,133,47,100,3,177,30,167,253,126,248,225,135,115,139,179,238,255,224,7,63,176,214,165,
    107,251,191,243,157,239,136,214,173,161,249,151,191,252,165,232,155,13,54,4,16,64,0,1,4,124,25,160,173,89,76,123,166,51,255,118,75,194,44,28,73,61,50,224,230,13,192,112,243,245,222,95,156,189,66,62,188,
    243,74,169,175,49,51,203,230,185,220,45,99,150,166,76,30,187,73,254,231,136,69,178,219,212,78,169,209,145,242,104,120,214,118,111,110,253,150,6,230,143,73,238,227,220,78,86,241,253,220,80,90,40,24,14,
    149,70,3,240,162,69,139,172,15,33,94,122,233,165,189,138,203,223,167,193,80,151,54,232,76,242,61,247,220,99,133,199,191,253,237,111,214,107,116,217,198,253,247,223,223,235,245,135,28,114,136,172,89,179,
    70,22,152,15,10,54,53,53,89,251,116,205,179,134,109,93,254,161,229,232,182,239,190,251,90,143,95,124,241,69,235,241,64,254,99,95,78,78,103,190,117,217,138,126,128,80,183,79,125,234,83,5,95,174,107,165,
    117,118,91,3,174,206,86,107,63,116,22,189,173,173,205,58,254,123,223,251,158,117,251,235,95,255,218,90,95,93,236,56,187,112,189,234,137,206,60,235,166,31,226,212,89,108,181,208,144,174,219,31,254,240,
    7,235,150,255,32,128,0,2,8,84,183,128,63,3,116,16,198,204,4,230,169,163,18,242,85,243,85,223,179,218,54,152,171,84,228,124,213,183,201,161,141,117,9,249,194,161,139,228,224,89,27,205,186,103,13,166,189,
    3,118,16,8,170,185,15,186,44,194,222,116,249,68,185,183,147,79,62,185,232,154,221,252,125,58,59,171,155,206,36,235,26,107,93,179,156,187,30,91,215,69,231,110,71,31,125,180,232,186,237,113,227,198,201,
    142,59,238,104,237,210,25,223,114,108,246,108,175,126,144,82,151,95,232,218,107,173,231,160,131,14,42,88,188,221,118,93,63,125,236,177,199,90,109,87,219,207,126,246,179,214,241,26,242,53,20,107,223,116,
    43,118,156,181,211,252,231,133,23,94,176,130,182,62,214,48,175,22,250,115,231,157,119,90,135,228,91,88,79,242,31,4,16,64,0,129,170,19,240,223,26,232,0,13,145,102,230,189,204,23,162,252,183,9,202,171,214,
    215,202,123,171,26,173,73,102,51,153,38,199,236,189,76,62,190,239,42,25,221,156,52,209,217,60,225,225,217,231,0,13,137,107,93,209,165,14,35,71,142,180,102,76,117,166,243,204,51,207,236,181,30,87,103,85,
    117,9,134,189,70,87,131,173,110,157,157,157,217,54,110,220,184,49,123,63,255,142,174,149,46,182,229,239,179,151,92,232,58,227,189,247,222,123,171,151,141,30,61,186,215,115,246,241,250,164,189,86,59,255,
    50,124,186,79,63,40,89,234,166,31,80,212,54,232,250,105,59,180,30,127,252,241,86,136,45,84,150,221,150,124,139,13,27,204,103,32,204,166,51,206,186,212,68,67,176,110,197,142,179,118,154,255,216,229,233,
    227,125,246,217,199,250,0,166,189,207,190,213,126,105,185,108,8,32,128,0,2,213,43,192,12,116,37,199,222,204,66,215,153,223,195,199,237,189,86,142,217,103,169,12,55,31,126,204,36,194,178,203,180,181,242,
    249,217,203,100,134,153,161,142,16,158,43,57,66,142,213,173,51,184,191,253,237,111,173,242,245,90,200,186,220,225,207,127,254,179,204,157,59,215,186,234,132,46,147,208,43,63,216,107,128,53,108,235,166,
    193,250,198,27,111,180,62,212,167,193,187,216,166,229,23,219,242,247,217,235,142,55,109,218,100,45,95,208,224,170,151,207,211,32,171,151,164,211,15,33,150,178,217,97,85,63,40,169,129,223,254,176,225,64,
    203,176,151,113,216,199,23,91,190,161,251,237,182,235,154,114,93,110,161,215,205,214,171,120,216,110,122,53,142,230,230,102,203,82,143,47,118,156,238,211,77,205,237,16,173,95,104,115,251,237,183,91,65,
    94,103,237,207,58,235,44,235,62,225,121,179,21,255,69,0,1,4,170,89,128,0,93,233,209,55,33,186,213,92,93,227,75,135,46,151,61,183,95,35,19,199,109,50,215,123,54,95,251,189,77,135,196,204,229,223,152,121,
    174,244,0,57,87,191,46,51,208,43,90,232,166,203,12,244,67,111,186,126,248,99,31,251,152,117,85,12,13,203,63,255,249,207,173,89,234,220,37,12,122,137,59,93,214,160,235,149,203,177,233,7,229,166,77,155,
    102,125,192,110,167,157,118,18,189,172,157,174,147,254,241,143,127,44,115,230,204,217,234,75,94,250,171,83,131,167,110,122,137,61,13,254,165,94,254,45,55,64,79,153,50,37,27,146,11,213,171,87,39,209,75,
    233,233,166,235,157,181,221,39,157,116,146,229,169,111,20,236,53,203,250,193,64,123,182,60,247,56,93,203,157,187,105,216,214,47,130,209,237,170,171,174,178,62,132,169,33,92,3,180,190,169,225,27,11,115,
    181,184,143,0,2,8,84,175,0,1,218,11,99,111,46,239,182,221,184,30,57,243,168,133,242,211,19,255,35,115,118,89,43,205,181,172,123,246,194,208,56,221,134,43,174,184,194,154,229,252,192,7,62,208,171,42,157,
    5,213,160,172,215,90,214,16,170,87,199,56,253,244,211,179,75,17,244,57,13,215,229,216,244,138,20,122,189,104,173,79,103,143,117,93,177,94,203,89,175,187,124,229,149,87,102,235,28,104,93,122,9,56,13,157,
    186,197,227,241,236,149,47,6,250,122,13,193,246,181,169,245,131,137,125,205,248,234,178,147,199,31,127,220,122,211,97,47,115,209,122,116,38,89,47,237,119,192,1,7,88,213,106,168,215,15,67,218,225,94,159,
    212,55,43,26,172,243,183,175,126,245,171,214,12,188,134,119,189,212,160,126,51,162,46,123,209,111,140,60,234,168,163,242,15,231,49,2,8,32,128,64,21,10,132,34,109,199,150,190,80,177,130,80,155,27,219,199,
    250,67,19,70,91,204,165,225,78,61,250,109,57,239,248,37,91,127,209,74,5,219,222,119,213,25,233,76,234,181,146,205,229,191,204,55,40,70,116,141,165,95,70,166,38,45,39,253,110,186,220,242,240,244,162,215,
    129,206,237,123,193,235,119,231,30,224,161,251,47,94,240,140,236,56,169,163,96,139,194,219,254,73,66,163,78,42,184,111,48,79,234,18,10,189,150,177,206,148,234,76,112,110,32,180,203,211,37,17,58,179,171,
    51,198,246,82,3,123,95,57,110,245,234,32,122,29,102,93,139,156,127,249,187,82,202,215,117,194,186,156,66,215,34,107,32,30,62,124,120,41,47,31,212,177,26,214,181,237,250,37,50,246,229,236,10,21,180,114,
    229,74,107,45,180,189,190,188,208,49,246,115,122,172,190,153,208,62,148,99,203,44,60,91,210,75,47,42,88,212,205,79,142,145,147,127,183,249,58,222,5,15,224,73,4,16,64,0,1,207,8,240,33,66,207,12,69,72,26,
    162,38,49,91,239,13,124,20,158,61,227,231,255,134,232,242,129,66,31,226,203,237,153,94,155,56,127,182,58,119,255,80,239,235,37,245,244,3,142,67,221,116,214,184,92,161,115,160,109,209,55,30,185,51,204,
    197,94,167,179,201,249,31,164,236,235,216,98,251,120,30,1,4,16,64,160,122,5,88,194,49,232,177,183,195,238,160,11,40,240,66,13,206,78,132,103,39,218,90,160,249,60,133,0,2,8,32,128,0,2,8,84,129,0,1,186,
    212,65,54,95,10,178,104,93,84,94,92,88,43,107,58,12,159,215,5,77,123,151,108,136,200,243,239,213,73,124,203,55,129,151,218,101,142,71,0,1,4,16,64,0,1,4,16,120,95,192,235,241,239,253,150,122,229,158,153,
    32,94,190,49,34,55,60,53,74,254,245,234,112,73,166,205,236,174,135,183,184,105,222,111,239,158,40,143,190,217,32,61,222,110,170,135,21,105,26,2,8,32,128,0,2,8,32,240,190,0,1,250,125,139,129,221,51,1,58,
    109,22,42,191,181,112,184,92,247,240,120,121,102,126,131,152,139,53,123,115,51,223,96,120,195,83,35,229,150,71,166,200,134,142,216,150,245,213,222,108,42,173,66,0,1,4,16,64,0,1,4,252,34,64,128,30,196,
    72,133,205,178,136,68,42,34,143,191,62,90,254,246,216,88,153,191,218,36,104,175,133,104,243,129,196,231,223,173,149,63,221,213,38,75,214,214,75,216,4,127,54,4,16,64,0,1,4,16,64,0,129,161,11,16,160,7,107,
    104,66,244,134,206,168,220,246,244,56,185,227,185,81,178,177,219,20,228,149,144,26,206,200,234,77,97,185,224,31,83,101,238,187,35,37,201,210,141,193,142,50,175,67,0,1,4,16,64,0,1,4,182,18,32,64,111,69,
    50,240,39,244,130,25,75,86,55,202,181,255,158,32,15,189,54,220,44,237,240,198,166,129,249,162,187,199,201,131,47,141,151,238,148,87,82,189,55,108,104,5,2,8,32,128,0,2,8,32,48,84,1,2,244,16,5,83,230,219,
    78,230,206,31,33,215,60,50,94,158,95,88,87,249,165,28,102,221,243,77,102,221,243,117,15,79,149,245,102,134,60,163,41,223,204,150,179,33,128,0,2,8,32,128,0,2,8,148,71,128,47,82,25,170,163,201,167,61,230,
    27,4,31,121,101,148,76,31,219,41,227,134,47,145,201,35,204,245,226,42,49,29,29,201,200,139,11,106,229,143,119,78,149,37,171,234,37,109,135,103,189,101,67,0,1,4,16,64,0,1,4,16,40,139,0,51,208,229,96,52,
    249,116,109,123,173,153,133,158,40,55,61,62,70,54,85,98,61,180,153,101,94,97,174,247,252,253,235,166,203,11,239,232,186,103,134,182,28,67,75,25,8,32,128,0,2,8,32,128,64,190,0,41,43,95,100,176,143,205,
    7,247,86,172,109,144,107,205,165,237,238,157,59,210,76,64,187,185,108,194,92,21,196,204,50,159,247,247,73,242,228,220,209,230,11,83,182,92,18,132,165,27,131,29,77,94,135,0,2,8,32,128,0,2,8,20,21,32,64,
    23,165,41,125,71,198,132,232,215,23,141,144,171,31,26,39,207,154,111,254,19,115,41,57,87,182,88,70,174,248,119,139,220,242,232,20,233,72,108,89,149,67,120,118,133,158,74,16,64,0,1,4,16,64,160,250,4,8,
    208,101,30,243,164,89,254,252,232,107,163,229,166,71,199,203,226,53,38,204,154,80,237,232,102,214,61,63,253,159,122,185,228,206,105,230,210,117,53,124,104,208,81,108,10,71,0,1,4,16,64,0,1,4,76,188,3,161,
    204,2,70,116,163,249,214,191,91,158,28,39,183,61,59,74,52,80,59,118,125,104,51,203,172,215,123,254,233,205,109,242,198,226,97,146,98,221,115,153,7,147,226,16,64,0,1,4,16,64,0,129,173,5,8,208,91,155,12,
    253,153,72,90,150,174,106,148,171,31,158,32,239,174,169,117,232,50,114,25,235,11,82,46,121,112,172,60,62,119,172,89,247,188,101,40,89,186,49,244,241,163,4,4,16,64,0,1,4,16,64,160,15,1,2,116,31,56,67,217,
    149,54,75,55,94,49,215,135,190,242,161,209,178,188,221,129,165,28,53,34,183,189,48,76,110,120,120,178,108,234,97,221,243,80,198,138,215,34,128,0,2,8,32,128,0,2,165,8,16,160,75,209,42,241,216,120,50,44,
    87,222,63,85,238,127,105,132,180,199,203,248,133,38,102,221,243,220,133,49,185,244,158,169,242,206,242,198,205,235,158,93,189,234,71,137,16,28,142,0,2,8,32,128,0,2,8,4,72,128,0,237,228,96,154,89,232,85,
    235,26,228,194,59,166,200,43,11,26,37,165,95,174,50,212,239,52,49,75,52,214,117,132,229,183,119,76,150,103,222,28,41,241,164,125,201,58,39,59,66,217,8,32,128,0,2,8,32,128,0,2,182,0,1,218,150,112,232,54,
    99,214,67,191,246,110,139,252,246,174,241,50,127,237,80,215,67,103,172,47,56,252,227,253,99,229,222,231,199,75,123,79,108,115,171,89,247,236,208,232,81,44,2,8,32,128,0,2,8,32,176,181,0,1,122,107,147,178,
    63,147,50,1,247,222,231,38,201,245,143,182,202,202,14,51,99,60,216,75,219,213,100,228,159,47,53,203,141,143,76,146,149,27,106,55,47,218,32,60,151,125,188,40,16,1,4,16,64,0,1,4,16,232,75,128,0,221,151,
    78,25,247,181,247,68,228,178,251,219,204,53,162,155,165,43,57,136,245,208,102,221,243,188,69,49,185,228,238,54,121,103,89,147,164,205,55,15,10,235,158,203,56,66,20,133,0,2,8,32,128,0,2,8,12,76,96,203,
    229,27,6,118,176,103,142,50,225,49,163,215,87,46,180,160,56,173,251,194,230,250,203,206,189,55,208,240,154,209,16,108,214,31,103,194,186,176,185,208,102,190,64,197,76,54,135,182,204,16,135,204,172,243,
    210,149,13,242,171,219,167,202,212,209,111,203,110,83,59,74,184,8,119,70,54,116,134,229,55,119,77,145,167,223,108,145,158,188,117,207,25,253,174,22,243,129,197,66,28,86,203,204,241,41,227,226,228,150,
    80,111,203,163,192,133,175,181,125,166,255,33,29,18,102,204,157,28,6,202,70,0,1,4,16,64,0,1,23,4,124,25,160,235,106,147,50,121,116,187,52,53,36,204,76,108,158,146,9,183,35,234,19,50,109,116,151,51,19,
    180,166,190,97,245,73,153,49,101,131,44,239,212,132,156,223,0,13,205,34,157,93,81,89,182,166,81,54,117,153,235,205,109,217,50,102,22,249,197,55,71,203,255,221,187,73,206,249,228,98,105,107,137,139,12,
    32,216,234,33,151,62,56,70,238,121,118,220,251,229,229,212,59,174,165,83,198,181,152,254,230,60,103,215,105,221,154,2,166,140,238,148,136,83,25,218,188,135,216,97,98,135,44,252,192,114,73,22,104,67,216,
    212,187,161,61,38,11,150,15,219,122,188,122,53,148,7,8,32,128,0,2,8,32,128,128,247,5,124,25,160,39,183,118,201,255,59,241,63,242,161,29,59,68,226,121,51,205,38,207,234,76,103,99,173,153,9,29,64,56,45,
    121,136,76,153,51,70,165,228,199,31,91,106,102,130,151,23,126,121,52,35,143,255,167,65,126,125,235,54,230,74,25,173,189,214,60,107,192,252,231,19,83,100,167,137,157,242,223,135,174,148,214,122,147,62,
    251,106,167,89,247,124,215,11,77,114,221,195,147,100,249,134,186,173,214,61,235,108,251,145,187,47,151,111,155,246,12,143,154,178,172,165,29,91,55,171,185,46,45,245,121,84,91,31,53,200,103,210,97,249,
    223,35,86,202,233,7,175,177,222,60,108,85,74,109,90,238,124,102,152,124,253,242,157,165,43,190,229,170,33,91,29,196,19,8,32,128,0,2,8,32,128,128,63,4,252,23,160,77,64,140,154,153,220,150,198,132,140,27,
    145,52,1,186,200,180,234,214,19,195,101,27,145,168,89,142,48,178,209,4,244,144,181,142,100,235,114,107,210,210,210,20,147,152,6,218,2,219,198,206,168,252,241,190,54,217,126,82,151,28,58,107,131,212,153,
    192,93,48,248,154,126,190,177,180,70,254,116,247,84,121,107,113,179,164,53,104,23,152,225,109,48,111,22,198,142,136,203,8,29,205,190,250,173,251,250,218,95,160,173,3,122,202,148,57,188,33,109,253,20,60,
    222,4,232,17,230,175,5,58,51,111,245,179,64,31,10,190,142,39,17,64,0,1,4,16,64,0,1,15,10,56,53,39,233,120,87,173,104,90,44,12,22,123,222,241,86,109,169,192,212,223,103,19,76,48,94,184,172,89,126,99,174,
    229,252,214,138,134,34,199,102,100,99,87,88,46,186,115,178,60,49,111,148,244,164,138,207,220,90,117,245,89,161,11,29,239,171,126,179,175,240,91,9,23,218,69,21,8,32,128,0,2,8,32,128,64,153,5,124,27,160,
    45,7,13,109,133,126,202,140,84,180,184,66,117,231,62,87,244,133,166,217,230,250,208,79,188,62,70,254,116,223,88,89,188,209,172,147,206,187,180,93,198,140,204,165,15,141,145,187,159,214,117,207,91,254,
    80,208,223,204,109,110,221,133,238,247,209,158,178,236,42,84,167,62,199,134,0,2,8,32,128,0,2,8,4,72,192,223,1,218,231,3,145,72,133,228,166,127,79,150,127,62,221,34,235,186,205,80,216,33,218,44,253,184,
    123,110,147,92,111,214,61,47,179,214,61,23,94,186,225,243,238,211,124,4,16,64,0,1,4,16,64,192,151,2,4,232,74,14,155,201,197,235,219,107,229,247,119,79,145,103,222,106,54,31,74,52,141,49,225,249,141,101,
    49,249,227,157,83,229,13,179,238,57,101,62,160,215,207,130,144,74,246,128,186,17,64,0,1,4,16,64,0,129,170,19,32,64,87,122,200,205,82,142,119,22,141,48,235,161,39,202,187,171,235,100,147,153,137,254,221,
    93,147,229,41,93,247,156,216,178,238,89,63,124,199,134,0,2,8,32,128,0,2,8,32,224,9,1,255,93,133,195,19,108,229,109,132,174,135,254,247,220,113,114,201,191,58,36,86,147,148,123,204,186,231,13,3,93,247,
    92,222,166,80,26,2,8,32,128,0,2,8,32,128,64,63,2,4,232,126,128,220,218,29,55,151,168,251,235,3,109,86,117,29,221,230,27,14,245,107,5,251,251,208,160,91,141,163,30,4,16,64,0,1,4,16,64,0,129,172,0,1,58,
    75,81,249,59,27,59,205,213,56,236,208,108,223,86,190,89,180,0,1,4,16,64,0,1,4,16,64,32,71,128,53,208,57,24,21,191,171,161,153,203,190,85,124,24,104,0,2,8,32,128,0,2,8,32,208,151,0,1,186,47,157,74,236,
    227,3,131,149,80,167,78,4,16,64,0,1,4,16,64,96,192,2,4,232,1,83,113,32,2,8,32,128,0,2,8,32,128,0,2,230,170,195,32,32,128,192,224,4,50,239,157,45,153,197,23,12,238,197,188,170,58,5,146,107,170,179,223,
    244,26,1,4,16,8,152,0,1,58,96,3,74,119,220,19,200,36,86,137,232,15,27,2,8,32,128,0,2,8,84,149,0,75,56,170,106,184,233,44,2,8,32,128,0,2,8,32,128,192,80,5,8,208,67,21,228,245,129,22,200,112,85,148,64,143,
    175,151,58,199,169,230,165,209,160,45,8,32,128,64,223,2,4,232,190,125,216,91,229,2,75,215,213,86,185,0,221,119,75,128,115,205,45,105,234,65,0,1,4,134,46,64,128,30,186,33,37,4,88,224,202,135,199,7,184,
    119,116,205,43,2,233,180,200,53,255,30,231,149,230,208,14,4,16,64,0,129,126,4,8,208,253,0,177,187,186,5,110,126,114,140,252,191,91,166,73,42,197,5,186,171,251,76,112,174,247,237,93,17,57,229,226,29,229,
    149,247,154,156,171,132,146,17,64,0,1,4,202,42,224,203,171,112,132,76,150,169,169,49,43,6,107,205,180,141,62,240,218,22,205,72,196,180,47,236,210,215,113,215,132,140,131,174,52,136,152,91,47,46,164,140,
    101,36,166,227,229,211,237,167,55,183,201,229,15,76,144,61,167,111,52,253,48,198,108,8,148,73,160,195,132,231,199,223,26,46,27,59,125,249,79,113,153,20,40,6,1,4,16,240,159,128,47,255,213,94,179,169,70,
    110,124,98,148,188,48,191,81,82,105,239,5,232,112,56,35,239,174,168,151,69,107,235,77,192,119,248,164,48,33,253,249,5,35,228,226,59,226,82,19,214,112,231,116,133,165,247,39,26,201,200,203,243,155,36,225,
    227,89,220,101,235,98,242,207,231,70,149,222,121,94,129,0,2,8,32,128,0,2,129,19,8,69,218,142,245,213,212,96,38,19,146,176,89,120,82,31,73,73,36,108,194,162,39,47,147,16,146,164,57,85,122,146,33,19,240,
    77,99,29,158,137,174,49,129,189,206,204,122,135,60,105,97,32,204,95,9,146,233,140,116,38,35,102,188,66,230,33,179,184,129,251,151,132,14,33,128,0,2,8,32,80,69,2,190,155,129,14,153,48,170,57,177,51,105,
    47,223,246,222,140,107,238,249,227,70,88,76,154,60,218,30,87,7,47,91,152,224,172,235,75,28,126,51,145,107,207,125,4,16,64,0,1,4,16,64,192,9,1,59,133,58,81,54,101,34,128,0,2,8,32,128,0,2,8,32,16,56,1,2,
    116,224,134,148,14,33,128,0,2,8,32,128,0,2,8,56,41,64,128,118,82,151,178,17,64,0,1,4,16,64,0,1,4,2,39,64,128,14,220,144,210,33,4,16,64,0,1,4,16,64,0,1,39,5,8,208,78,234,82,54,2,8,32,128,0,2,8,32,128,64,
    224,4,8,208,129,27,82,58,132,0,2,8,32,128,0,2,8,32,224,164,0,1,218,73,93,202,70,0,1,4,16,64,0,1,4,16,8,156,0,1,58,112,67,74,135,16,64,0,1,4,16,64,0,1,4,156,20,32,64,59,169,75,217,8,32,128,0,2,8,32,128,
    0,2,129,19,32,64,7,110,72,233,16,2,8,32,128,0,2,8,32,128,128,147,2,4,104,39,117,41,27,1,4,16,64,0,1,4,16,64,32,112,2,209,192,245,136,14,33,128,0,2,8,32,128,64,69,4,62,243,137,131,229,243,159,60,172,96,
    221,151,223,248,47,185,230,214,135,10,238,227,73,4,252,38,64,128,246,219,136,209,94,4,16,64,0,1,4,60,42,48,101,194,104,57,96,175,153,5,91,119,223,191,95,44,248,60,79,34,224,71,1,2,180,31,71,141,54,35,
    128,0,2,8,32,224,97,129,119,23,46,151,51,127,124,105,175,22,190,249,238,146,94,143,121,128,128,159,5,8,208,126,30,61,218,142,0,2,8,32,128,128,7,5,54,182,119,202,221,15,63,239,193,150,209,36,4,202,35,192,
    135,8,203,227,72,41,8,32,128,0,2,8,32,128,0,2,85,34,192,12,116,149,12,52,221,68,0,1,4,16,64,192,45,129,237,183,153,40,207,220,126,97,175,234,142,62,229,92,89,185,122,67,175,231,120,128,128,95,5,8,208,
    126,29,57,218,141,0,2,8,32,128,128,71,5,234,235,106,101,183,89,211,123,181,46,86,83,211,235,49,15,16,240,179,0,1,218,207,163,71,219,17,64,0,1,4,16,240,160,192,219,11,150,201,169,103,253,190,87,203,86,
    174,89,223,235,49,15,16,240,179,0,1,218,207,163,71,219,17,64,0,1,4,16,240,160,64,123,103,151,60,250,204,107,30,108,25,77,66,160,60,2,124,136,176,60,142,148,130,0,2,8,32,128,0,2,8,32,80,37,2,4,232,42,25,
    104,186,137,0,2,8,32,128,0,2,8,32,80,30,1,2,116,121,28,41,5,1,4,16,64,0,1,4,16,64,160,74,4,66,145,182,99,51,85,210,87,186,137,0,2,8,32,128,0,2,8,32,128,192,144,5,152,129,30,50,33,5,32,128,0,2,8,32,128,
    0,2,8,84,147,0,1,186,154,70,155,190,34,128,0,2,8,32,128,0,2,8,12,89,128,0,61,100,66,10,64,0,1,4,16,64,0,1,4,16,168,38,1,2,116,53,141,54,125,69,0,1,4,16,64,0,1,4,16,24,178,0,1,122,200,132,20,128,0,2,8,
    32,128,0,2,8,32,80,77,2,190,255,38,194,61,166,111,148,105,99,186,37,18,225,98,34,213,116,226,210,87,4,130,32,208,209,21,145,199,222,28,46,235,218,107,124,211,157,237,38,116,202,78,83,219,165,134,127,115,
    125,51,102,52,20,1,175,9,172,223,20,149,71,223,28,33,29,221,17,175,53,109,192,237,241,109,128,110,109,78,200,77,223,156,43,31,218,97,195,128,59,203,129,8,32,128,128,215,4,58,123,34,242,213,43,182,147,
    107,255,61,206,107,77,235,213,30,157,164,248,243,151,222,144,147,15,92,222,235,121,30,32,128,0,2,131,17,208,137,131,207,253,223,7,228,222,151,91,7,243,242,138,191,198,183,75,56,46,57,237,13,194,115,197,
    79,31,26,128,0,2,67,21,104,168,77,201,101,167,205,147,93,218,218,135,90,148,163,175,255,254,127,45,32,60,59,42,76,225,8,84,151,192,200,166,132,220,248,205,215,100,66,75,143,47,59,238,203,0,221,98,208,
    143,217,125,181,47,193,105,52,2,8,32,144,47,16,54,255,18,159,124,128,183,103,118,63,251,97,111,183,47,223,148,199,149,17,200,152,213,148,185,63,149,105,5,181,250,69,160,62,150,146,227,246,89,233,151,230,
    246,106,167,47,151,112,140,27,17,239,213,9,30,32,128,0,2,126,23,24,63,210,219,179,48,126,157,37,242,251,121,225,151,246,219,161,89,86,36,36,188,48,33,18,18,73,237,209,32,58,75,23,50,247,217,16,40,38,48,
    222,167,153,206,151,1,154,255,25,139,157,134,60,143,0,2,126,21,240,122,198,240,122,251,252,58,238,65,105,183,6,232,100,202,204,62,119,164,165,97,125,74,244,99,253,157,241,140,212,198,66,132,232,160,12,
    178,67,253,240,107,166,243,229,18,14,135,198,144,98,17,64,0,1,4,16,64,160,68,1,107,246,217,188,38,158,204,72,119,206,31,136,187,204,31,85,82,38,84,179,33,16,68,1,95,206,64,247,55,16,161,250,25,230,16,
    230,75,250,115,98,63,2,8,184,44,144,88,45,153,228,90,151,43,117,190,186,80,237,20,145,112,157,243,21,81,131,55,5,116,186,57,157,49,51,208,105,73,100,116,173,252,230,245,242,61,225,109,164,177,214,92,166,
    172,38,44,33,166,235,188,57,118,110,181,42,190,76,50,169,77,110,213,230,74,61,129,12,208,225,157,159,52,249,57,230,10,32,149,32,128,0,2,3,21,200,44,60,91,50,75,47,26,232,225,190,57,46,60,227,47,34,77,
    123,250,166,189,52,180,188,2,25,51,5,157,78,38,69,54,110,148,204,186,223,136,44,62,207,252,14,142,72,122,187,127,74,104,244,104,243,222,170,78,194,250,73,89,182,170,21,200,188,125,138,100,86,223,18,168,
    254,115,70,7,106,56,233,12,2,8,32,128,0,2,149,17,208,32,173,63,246,150,123,223,126,142,91,4,130,34,64,128,14,202,72,210,15,4,16,64,0,1,4,16,64,0,1,87,4,8,208,174,48,83,9,2,8,32,128,0,2,8,32,128,64,80,
    4,8,208,65,25,73,250,129,0,2,8,32,128,0,2,8,32,224,138,0,1,218,21,102,42,65,0,1,4,16,64,0,1,4,16,8,138,0,1,58,40,35,73,63,16,64,0,1,4,16,64,0,1,4,92,17,32,64,187,194,76,37,8,32,128,0,2,8,32,128,0,2,65,
    17,32,64,7,101,36,233,7,2,8,32,128,0,2,8,32,128,128,43,2,4,104,87,152,169,4,1,4,16,64,0,1,4,16,64,32,40,2,4,232,160,140,36,253,64,0,1,4,16,64,0,1,4,16,112,69,128,0,237,10,51,149,32,128,0,2,8,32,128,0,
    2,8,4,69,128,0,29,148,145,164,31,8,32,128,0,2,8,32,128,0,2,174,8,16,160,93,97,166,18,4,16,64,0,1,4,16,64,0,129,160,8,16,160,131,50,146,244,3,1,4,16,64,0,129,10,11,132,66,161,10,183,128,234,17,112,71,32,
    234,78,53,212,130,0,2,8,32,128,0,2,65,22,8,135,195,210,61,102,15,89,176,253,25,18,142,68,37,18,137,8,129,58,200,35,94,221,125,35,64,87,247,248,211,123,4,16,64,0,1,4,134,44,160,65,217,10,204,227,118,145,
    141,13,219,72,77,77,141,180,196,98,162,161,154,13,129,32,10,16,160,131,56,170,244,9,1,4,16,64,0,1,151,4,52,60,107,80,142,153,192,220,220,220,44,209,232,230,217,231,250,250,122,102,161,93,26,3,170,113,
    95,128,0,237,190,57,53,34,128,0,2,8,32,16,40,1,13,209,58,235,220,216,216,40,117,117,117,214,210,13,13,210,26,172,89,198,17,168,161,166,51,91,4,8,208,156,10,8,32,128,0,2,8,32,48,36,1,123,9,135,6,230,76,
    38,99,149,69,120,30,18,41,47,246,184,0,1,218,227,3,68,243,16,64,0,1,4,16,240,131,128,134,104,102,155,253,48,82,180,177,28,2,172,238,47,135,34,101,32,128,0,2,8,32,128,128,37,96,207,64,195,129,64,144,5,
    152,129,14,242,232,210,55,4,16,64,0,1,4,92,18,208,224,156,94,253,134,200,146,103,37,20,142,136,204,58,209,154,145,102,86,218,165,1,160,26,87,5,8,208,3,224,238,236,236,148,55,222,48,255,40,20,216,90,91,
    91,101,234,212,169,178,100,201,18,89,177,98,133,12,31,62,92,166,79,159,94,224,72,247,159,122,237,181,215,164,167,167,103,171,138,117,93,218,46,187,236,34,239,189,247,158,172,89,179,38,187,191,182,182,
    86,38,76,152,32,35,71,142,204,62,231,165,59,241,120,92,230,206,157,43,218,47,29,147,61,246,216,195,250,241,66,27,95,122,233,37,73,167,211,86,83,244,151,133,126,18,125,210,164,73,214,135,105,236,246,121,
    241,28,209,182,109,220,184,81,222,126,251,109,187,153,214,135,126,70,143,30,45,227,199,143,239,117,9,170,129,244,49,91,136,131,119,250,115,236,239,188,183,95,95,168,137,250,255,178,254,63,205,134,0,2,
    165,9,104,120,78,165,82,146,126,235,30,137,221,255,77,201,132,34,18,223,254,56,235,131,133,4,232,210,44,57,218,31,2,4,232,1,140,147,254,66,222,107,175,189,10,30,249,153,207,124,70,254,250,215,191,202,
    69,23,93,36,23,92,112,129,124,228,35,31,145,59,238,184,163,224,177,110,63,169,109,209,144,156,191,233,39,164,187,186,186,228,71,63,250,145,213,246,252,253,31,254,240,135,229,242,203,47,247,204,27,1,109,
    223,221,119,223,45,95,253,234,87,229,221,119,223,237,213,220,67,14,57,68,254,246,183,191,73,75,75,75,175,231,221,126,176,223,126,251,89,166,185,245,234,37,156,62,255,249,207,91,231,134,94,31,213,139,231,
    136,182,247,209,71,31,149,163,143,62,58,183,233,214,253,41,83,166,200,249,231,159,47,39,156,112,130,245,120,32,125,220,170,16,7,158,232,207,177,191,243,222,126,125,161,166,233,121,175,99,198,134,0,2,165,
    9,104,128,214,73,142,148,153,180,137,109,121,169,254,158,177,63,72,72,136,46,205,147,163,189,47,64,128,46,113,140,52,84,228,254,67,48,106,212,168,18,75,112,255,112,157,81,107,106,106,202,86,172,51,205,
    185,155,206,148,126,240,131,31,180,102,117,159,122,234,41,121,228,145,71,228,19,159,248,132,232,140,163,23,54,125,67,114,204,49,199,88,77,209,153,209,253,247,223,95,86,175,94,45,143,63,254,184,213,102,
    253,71,219,43,219,158,123,238,41,218,198,229,203,151,203,11,47,188,32,127,248,195,31,172,153,220,31,252,224,7,94,105,98,209,118,104,200,63,226,136,35,172,89,36,157,233,95,184,112,161,232,27,196,157,119,
    222,89,118,220,113,199,236,235,252,210,199,254,206,123,125,131,51,102,204,152,108,191,244,78,238,255,39,189,118,240,0,1,4,138,10,88,75,55,204,95,224,18,137,132,36,76,128,110,222,114,164,6,104,157,176,
    225,27,9,139,210,177,195,199,2,4,232,18,7,79,151,114,232,47,94,63,109,23,94,120,161,124,246,179,159,45,218,228,195,14,59,76,174,184,226,10,107,255,237,183,223,46,199,30,123,172,188,252,242,203,86,72,173,
    244,27,132,246,246,118,57,245,212,83,173,182,29,116,208,65,242,247,191,255,93,70,140,24,97,61,214,0,173,203,56,242,223,16,20,237,168,11,59,126,242,147,159,88,33,84,171,82,243,171,175,190,90,30,120,224,
    1,241,67,128,214,243,218,254,235,137,46,145,209,55,86,235,214,173,179,222,80,229,6,104,191,244,177,191,243,94,255,122,97,247,215,133,83,131,42,16,8,180,128,134,232,100,50,105,253,216,29,213,64,173,207,
    179,33,16,68,1,2,116,137,163,170,129,78,215,121,217,155,134,14,125,119,237,229,173,187,187,91,180,221,246,166,23,187,47,20,58,245,31,191,215,95,127,221,58,76,103,226,116,29,111,165,183,231,158,123,206,
    154,205,213,118,92,118,217,101,217,240,172,143,117,38,218,171,219,134,13,27,172,25,92,109,159,174,37,246,219,166,107,162,53,68,235,86,172,253,94,239,99,127,231,253,250,245,235,69,255,226,146,187,237,186,
    235,174,5,255,223,200,61,134,251,8,32,80,88,192,158,137,182,247,234,231,66,8,208,182,6,183,65,19,32,64,151,56,162,249,127,242,189,235,174,187,228,200,35,143,44,177,20,119,15,63,237,180,211,68,127,236,
    237,148,83,78,201,206,56,235,115,87,93,117,149,92,123,237,181,214,159,223,236,127,236,116,9,71,161,144,109,151,225,214,173,206,132,235,54,113,226,68,79,173,201,46,214,127,93,106,162,75,124,116,230,69,
    55,93,255,103,175,33,46,246,26,175,60,175,111,178,116,204,245,13,162,253,38,81,151,163,204,153,51,167,87,19,253,210,199,254,206,123,253,11,198,190,251,238,219,171,111,243,231,207,151,182,182,182,94,207,
    241,0,1,4,16,64,0,129,124,1,2,116,190,72,21,62,182,103,164,237,181,196,151,94,122,169,124,241,139,95,244,132,132,189,92,70,103,19,253,176,105,123,173,117,128,38,64,107,16,187,245,214,91,69,103,53,253,
    176,105,240,215,191,58,172,93,187,214,106,238,241,199,31,47,151,92,114,137,52,52,52,244,106,190,159,251,152,219,17,253,202,97,189,234,76,238,166,255,47,176,33,128,0,2,8,32,208,159,0,95,164,210,159,80,
    222,126,253,179,175,94,26,206,254,209,15,93,121,125,211,165,15,118,123,245,86,3,114,238,118,210,73,39,201,226,197,139,197,94,239,188,105,211,166,94,31,148,204,61,214,237,251,122,185,61,221,244,114,123,
    249,127,110,119,187,45,3,169,239,166,155,110,146,27,111,188,209,58,116,217,178,101,158,88,6,51,144,118,235,49,26,40,245,195,153,39,159,124,178,245,18,189,220,155,189,222,60,183,12,191,244,177,191,243,
    94,215,212,191,245,214,91,189,126,244,47,29,108,8,32,128,0,2,8,244,39,64,128,238,79,40,111,127,44,22,147,220,159,220,43,114,232,161,58,251,168,51,120,246,143,6,238,74,111,58,171,150,219,230,104,116,235,
    63,60,232,204,227,247,190,247,61,171,169,231,156,115,142,104,248,243,194,166,179,183,122,21,8,221,62,247,185,207,101,215,104,235,140,244,151,191,252,101,107,93,180,23,218,153,219,6,253,16,230,62,251,236,
    99,189,105,57,227,140,51,114,119,89,247,189,120,142,228,54,242,220,115,207,181,174,221,250,196,19,79,200,149,87,94,153,187,43,123,191,191,62,102,15,116,240,78,127,142,253,157,247,249,175,215,255,103,115,
    63,43,224,96,211,41,26,1,4,16,64,192,231,2,4,232,50,15,224,125,247,221,103,125,17,131,94,66,75,127,118,219,109,183,50,215,224,92,113,167,159,126,186,181,214,88,103,160,191,245,173,111,57,87,81,9,37,107,
    8,210,53,218,186,108,64,103,11,103,206,156,105,45,141,208,153,81,93,94,160,87,232,184,230,154,107,74,40,209,157,67,207,59,239,60,171,34,189,126,245,63,254,241,143,94,149,122,253,28,217,102,155,109,228,
    11,95,248,130,213,230,179,206,58,203,186,18,71,175,14,108,121,208,87,31,11,29,95,238,231,134,234,152,255,122,253,255,53,247,179,2,229,110,47,229,33,128,0,2,8,4,71,128,0,29,156,177,28,114,79,244,122,157,
    103,159,125,182,85,206,245,215,95,47,15,61,244,208,144,203,44,71,1,186,140,67,191,204,70,63,188,166,179,231,250,229,48,186,20,69,67,244,175,126,245,43,249,244,167,63,93,142,106,202,90,134,94,34,109,246,
    236,217,86,153,95,255,250,215,179,87,180,40,107,37,14,22,166,231,129,158,15,171,86,173,146,31,254,240,135,5,107,242,123,31,11,118,138,39,17,64,0,1,4,16,24,128,64,40,210,118,172,239,46,210,56,115,114,135,
    188,240,203,103,138,118,47,178,247,106,145,144,253,93,72,69,15,99,135,15,5,244,131,142,58,19,173,75,82,102,204,152,225,153,181,218,62,164,164,201,21,16,200,44,60,91,210,75,47,42,88,243,205,79,142,145,
    147,127,55,179,224,62,47,60,217,121,205,195,230,146,157,133,127,93,68,102,61,96,190,133,102,79,47,52,147,54,84,64,64,175,222,164,151,65,213,75,91,198,31,255,141,76,120,233,103,214,87,121,191,247,217,183,
    173,47,43,210,55,227,122,69,34,182,234,21,200,188,125,138,164,87,223,82,16,224,55,119,76,145,239,94,59,189,224,62,47,63,185,245,98,88,47,183,150,182,85,189,128,6,231,89,179,102,85,189,3,0,8,32,128,0,2,
    8,32,80,57,1,222,18,86,206,158,154,17,64,0,1,4,16,64,0,1,4,124,40,64,128,246,225,160,209,100,4,16,64,0,1,4,16,64,0,129,202,9,16,160,43,103,79,205,8,32,128,0,2,8,32,128,0,2,62,20,32,64,251,112,208,104,
    50,2,8,32,128,0,2,8,32,128,64,229,4,8,208,149,179,167,102,4,16,64,0,1,4,16,64,0,1,31,10,112,21,14,31,14,26,77,70,0,1,4,16,64,192,107,2,250,205,188,233,218,225,210,217,48,89,36,28,229,50,163,94,27,32,218,
    83,86,1,2,116,89,57,41,12,1,4,16,64,0,129,234,19,208,240,28,137,68,164,123,219,143,203,188,209,179,69,191,69,118,148,249,225,250,207,213,119,46,84,75,143,9,208,213,50,210,244,19,1,4,16,64,0,1,135,4,52,
    64,107,104,110,108,108,180,102,158,53,76,219,95,160,162,251,216,16,8,154,0,1,58,104,35,74,127,16,64,0,1,4,16,112,81,64,3,178,206,52,235,23,93,53,55,55,91,193,89,159,171,173,173,181,102,165,9,208,46,14,
    6,85,185,38,64,128,118,141,154,138,16,64,0,1,4,16,8,166,128,134,100,123,214,89,131,179,110,26,170,89,194,17,204,241,166,87,34,4,104,206,2,4,16,64,0,1,4,16,24,178,128,134,229,220,217,230,220,251,67,46,
    156,2,16,240,152,0,1,218,99,3,66,115,16,64,0,1,4,16,240,171,0,161,217,175,35,71,187,75,21,32,64,151,42,198,241,8,32,128,0,2,8,32,80,80,32,147,201,136,254,216,65,218,190,45,120,48,79,34,224,99,1,190,72,
    197,199,131,71,211,17,64,0,1,4,16,240,130,128,134,230,116,58,45,233,231,254,36,161,95,52,139,156,63,66,82,169,148,21,166,189,208,62,218,128,64,185,5,8,208,229,22,165,60,4,16,64,0,1,4,170,76,64,3,116,34,
    145,144,158,206,118,9,37,58,69,226,29,210,221,221,77,136,174,178,243,160,154,186,75,128,174,166,209,166,175,8,32,128,0,2,8,148,89,192,94,182,17,143,199,173,208,108,23,223,217,217,105,5,104,251,49,183,
    8,4,73,128,0,29,164,209,164,47,8,32,128,0,2,8,84,64,192,158,129,214,89,104,123,235,233,233,177,150,117,232,62,54,4,130,38,64,128,14,218,136,210,31,4,16,64,0,1,4,92,22,208,144,108,173,129,54,235,160,237,
    77,31,19,158,109,13,110,131,38,64,128,14,218,136,210,31,4,16,64,0,1,4,42,36,144,27,152,115,239,87,168,57,84,139,128,99,2,4,104,199,104,41,24,1,4,16,64,0,1,4,16,64,32,136,2,4,232,32,142,42,125,66,0,1,4,
    16,64,0,1,4,16,112,76,128,0,237,24,45,5,35,128,0,2,8,32,128,0,2,8,4,81,128,0,29,196,81,165,79,8,32,128,0,2,8,32,128,0,2,142,9,16,160,29,163,165,96,4,16,64,0,1,4,16,64,0,129,32,10,16,160,131,56,170,244,
    9,1,4,16,64,0,1,4,16,64,192,49,1,2,180,99,180,20,140,0,2,8,32,128,0,2,8,32,16,68,1,2,116,16,71,149,62,33,128,0,2,8,32,128,0,2,8,56,38,64,128,118,140,150,130,17,64,0,1,4,16,64,0,1,4,130,40,64,128,14,226,
    168,210,39,4,16,64,0,1,4,16,64,0,1,199,4,8,208,142,209,82,48,2,8,32,128,0,2,8,32,128,64,16,5,8,208,65,28,85,250,132,0,2,8,32,128,0,2,8,32,224,152,0,1,218,49,90,10,70,0,1,4,16,64,160,186,4,66,161,80,182,
    195,185,247,179,79,114,7,129,128,8,68,3,210,15,186,129,0,2,8,32,128,0,2,21,20,8,135,195,210,49,101,142,188,86,51,81,162,209,26,105,48,143,9,209,21,28,16,170,118,84,128,0,237,40,47,133,35,128,0,2,8,32,
    16,124,1,13,202,209,104,84,98,45,109,210,83,211,42,230,129,212,214,214,138,134,106,66,116,240,199,191,26,123,72,128,174,198,81,167,207,8,32,128,0,2,8,148,73,64,3,178,6,101,13,204,205,205,205,18,139,197,
    36,18,137,72,125,125,189,117,91,166,106,40,6,1,79,9,16,160,61,53,28,52,6,1,4,16,64,0,1,255,9,216,51,208,141,141,141,82,87,87,103,205,58,235,140,180,6,105,102,160,253,55,158,180,184,127,1,2,116,255,70,
    28,129,0,2,8,32,128,0,2,125,8,216,179,208,58,19,173,193,89,55,125,142,240,220,7,26,187,124,45,64,128,246,245,240,209,120,4,16,64,0,1,4,188,33,96,135,101,251,214,27,173,162,21,8,56,35,64,128,118,198,149,
    82,17,64,0,1,4,16,168,58,129,76,38,147,237,51,65,58,75,193,157,0,10,16,160,3,56,168,116,9,1,4,16,64,0,1,183,5,210,233,180,100,22,62,38,50,239,22,9,133,163,146,57,236,2,150,113,184,61,8,212,231,154,0,95,
    164,226,26,53,21,33,128,0,2,8,32,16,76,1,157,121,78,165,82,146,92,252,156,68,158,249,157,132,158,190,72,226,241,184,104,168,102,67,32,136,2,4,232,32,142,42,125,66,0,1,4,16,64,192,37,1,13,207,26,148,53,
    48,247,244,244,100,107,237,236,236,180,66,117,238,178,142,236,78,238,32,224,115,1,2,180,207,7,144,230,35,128,0,2,8,32,80,105,1,13,201,137,68,162,87,128,238,238,238,182,130,53,1,186,210,163,67,253,78,8,
    16,160,157,80,165,76,4,16,64,0,1,4,170,72,64,67,178,181,132,35,153,204,246,58,105,238,179,132,35,203,193,157,128,9,16,160,3,54,160,116,7,1,4,16,64,0,129,74,8,104,136,206,157,109,38,60,87,98,20,168,211,
    45,1,2,180,91,210,212,131,0,2,8,32,128,0,2,8,32,16,8,1,2,116,32,134,145,78,32,128,0,2,8,32,128,0,2,8,184,37,64,128,118,75,154,122,16,64,0,1,4,16,64,0,1,4,2,33,64,128,14,196,48,210,9,4,16,64,0,1,4,16,64,
    0,1,183,4,8,208,110,73,83,15,2,8,32,128,0,2,8,32,128,64,32,4,8,208,129,24,70,58,129,0,2,8,32,128,0,2,8,32,224,150,0,1,218,45,105,234,65,0,1,4,16,64,0,1,4,16,8,132,0,1,58,16,195,72,39,16,64,0,1,4,16,64,
    0,1,4,220,18,32,64,187,37,77,61,8,32,128,0,2,8,32,128,0,2,129,16,32,64,7,98,24,233,4,2,8,32,128,0,2,8,32,128,128,91,2,4,104,183,164,169,7,1,4,16,64,0,1,4,16,64,32,16,2,4,232,64,12,35,157,64,0,1,4,16,64,
    0,1,4,16,112,75,128,0,237,150,52,245,32,128,0,2,8,32,128,0,2,8,4,66,32,26,136,94,208,9,4,16,64,0,1,4,16,168,168,64,40,20,146,228,240,109,100,213,248,57,18,10,71,36,28,14,139,62,199,134,64,16,5,8,208,65,
    28,85,250,132,0,2,8,32,128,128,139,2,26,148,35,145,136,36,167,28,44,139,135,239,38,53,53,53,210,106,126,8,208,46,14,2,85,185,42,64,128,118,149,155,202,16,64,0,1,4,16,8,150,128,134,100,253,137,197,98,210,
    212,212,100,205,60,107,152,174,175,175,183,66,53,33,58,88,227,77,111,54,11,16,160,57,19,16,64,0,1,4,16,64,96,72,2,186,92,195,14,208,117,117,117,217,64,173,65,154,0,61,36,90,94,236,81,1,2,180,71,7,134,
    102,33,128,0,2,8,32,224,23,1,13,201,26,150,107,107,107,173,32,173,237,102,13,180,95,70,143,118,14,70,128,0,61,24,53,94,131,0,2,8,32,128,0,2,189,4,236,16,157,201,100,172,231,153,121,238,197,195,131,128,
    9,16,160,3,54,160,116,7,1,4,16,64,0,129,74,10,16,156,43,169,79,221,110,9,16,160,221,146,166,30,4,16,64,0,1,4,2,44,160,51,207,153,238,117,146,217,180,220,90,247,28,26,181,3,235,159,3,60,222,213,222,53,
    190,72,165,218,207,0,250,143,0,2,8,32,128,192,16,5,52,60,167,211,105,73,189,248,87,137,92,60,83,66,23,239,36,201,100,210,122,110,136,69,243,114,4,60,41,64,128,246,228,176,208,40,4,16,64,0,1,4,252,35,160,
    1,58,145,72,72,79,79,79,182,209,221,221,221,86,128,182,215,68,103,119,112,7,129,0,8,16,160,3,48,136,116,1,1,4,16,64,0,129,74,9,216,179,207,241,120,188,87,128,238,236,236,148,84,42,85,169,102,81,47,2,142,
    10,16,160,29,229,165,112,4,16,64,0,1,4,130,47,160,33,90,151,108,232,44,180,189,105,160,214,101,29,204,64,219,34,220,6,73,128,0,29,164,209,164,47,8,32,128,0,2,8,84,72,32,63,44,235,236,51,225,185,66,131,
    65,181,142,11,16,160,29,39,166,2,4,16,64,0,1,4,170,67,128,192,92,29,227,76,47,205,23,5,129,128,0,2,8,32,128,0,2,8,32,128,0,2,3,23,32,64,15,220,138,35,17,64,0,1,4,16,64,0,1,4,16,96,6,154,115,0,1,4,16,64,
    0,1,4,16,64,0,129,82,4,152,129,46,69,139,99,17,64,0,1,4,16,64,0,1,4,170,94,128,175,242,174,250,83,0,0,4,16,64,0,1,4,16,64,192,123,2,199,29,181,191,124,227,139,31,149,113,163,71,74,99,67,157,108,234,232,
    146,249,139,86,200,205,119,62,46,151,221,112,95,69,191,233,146,0,237,189,243,133,22,33,128,0,2,8,32,128,0,2,85,47,176,253,244,137,178,247,174,219,103,29,70,181,12,147,105,147,199,202,33,251,237,44,7,236,
    181,163,124,230,235,23,102,247,185,125,135,37,28,110,139,83,31,2,8,32,128,0,2,8,32,128,192,128,5,222,124,103,177,108,247,225,211,100,206,201,103,203,67,79,190,98,189,238,196,143,126,88,198,143,105,25,
    112,25,229,62,144,25,232,114,139,82,30,2,8,32,128,0,2,8,32,128,64,217,4,186,122,226,242,238,194,229,214,79,183,185,127,240,205,59,91,101,111,51,101,172,44,91,185,182,108,245,148,82,16,51,208,165,104,113,
    44,2,8,32,128,0,2,8,32,128,64,197,4,118,254,192,52,171,238,206,174,30,121,246,149,255,84,172,29,204,64,87,140,158,138,17,64,0,1,119,5,30,184,254,60,9,135,67,242,195,11,174,150,199,159,155,55,232,202,51,
    153,222,47,181,190,125,46,255,73,115,72,40,20,234,125,96,206,163,129,126,99,93,53,148,49,80,11,229,43,230,49,208,50,138,189,94,203,46,79,25,90,142,249,217,82,158,150,105,255,104,29,246,230,100,59,6,218,
    15,109,75,177,118,12,180,140,98,175,215,178,131,82,198,64,251,209,183,231,230,243,66,143,209,173,143,127,26,54,31,144,247,223,214,17,205,114,202,39,15,149,221,119,218,86,142,255,200,254,214,222,59,31,
    120,86,226,241,100,222,145,238,61,36,64,187,103,77,77,8,32,128,64,69,5,244,67,55,225,112,88,90,71,54,15,186,29,233,180,121,233,198,148,132,150,38,172,144,164,5,165,86,254,90,164,102,108,175,50,173,96,
    177,247,153,18,30,57,109,171,144,146,54,133,100,230,221,42,178,240,209,62,67,134,85,198,97,191,148,112,36,214,171,12,253,133,110,253,60,253,59,145,245,243,251,46,163,105,156,132,62,244,93,235,245,185,
    97,39,91,198,253,103,73,38,217,211,171,237,185,15,172,215,140,223,93,66,59,127,186,96,25,233,246,21,34,143,253,188,239,54,104,90,216,254,88,9,181,29,108,249,231,150,175,237,72,47,125,94,228,149,171,251,
    47,99,207,211,37,220,186,93,47,11,45,203,242,124,235,118,145,249,15,246,95,198,33,230,77,84,172,177,87,25,89,139,231,46,22,89,243,86,223,101,52,180,74,232,192,179,11,91,152,113,109,90,246,176,164,172,
    55,88,105,25,254,244,185,18,105,104,144,116,36,34,153,45,137,201,242,28,187,179,132,118,57,165,112,25,93,230,207,241,143,252,164,239,54,104,89,219,30,41,161,233,115,10,123,174,48,107,100,95,188,162,255,
    50,118,59,85,194,99,102,246,178,200,122,190,125,143,200,59,247,246,95,198,65,231,72,184,110,68,175,50,178,158,47,92,38,178,234,181,190,203,168,29,38,161,131,127,82,208,194,42,231,145,115,37,211,181,46,
    247,148,233,117,223,242,28,245,1,9,237,254,165,130,101,164,123,54,137,60,116,118,223,109,80,207,109,14,149,208,140,143,20,246,92,101,222,108,63,127,73,255,101,236,242,223,18,30,183,75,47,11,219,51,189,
    124,137,200,127,186,55,183,61,18,146,244,140,90,115,220,192,131,244,228,9,163,229,207,231,127,205,122,189,158,239,231,95,124,179,252,248,194,235,122,89,184,253,128,0,237,182,56,245,33,128,0,2,62,21,208,
    153,197,148,9,208,153,117,41,169,95,148,120,191,23,139,110,122,255,126,206,189,238,25,255,37,209,97,83,36,98,2,148,29,94,245,151,95,50,105,102,141,222,185,95,98,47,94,146,115,116,225,187,93,7,156,35,177,
    250,168,85,134,125,132,6,139,68,34,33,145,87,111,144,232,210,167,237,167,11,222,166,90,182,147,248,94,223,148,88,172,119,8,215,118,104,25,181,207,254,65,66,201,174,130,175,181,159,76,236,112,188,100,118,
    60,65,162,209,104,182,31,218,134,84,42,37,137,141,43,164,254,25,19,228,251,217,122,234,199,74,120,242,129,214,81,250,38,70,55,45,67,45,82,203,95,149,186,1,148,209,213,54,71,106,70,76,47,232,153,121,231,
    33,169,125,174,255,118,116,237,251,93,137,69,235,173,160,100,143,73,214,243,181,155,37,186,240,97,171,109,197,254,147,106,158,44,241,125,206,42,234,217,186,230,5,137,88,221,203,72,203,155,87,21,44,38,
    177,237,209,146,158,249,105,169,169,169,233,229,105,141,73,251,218,1,89,244,212,12,147,112,219,108,171,252,92,79,29,147,228,138,55,6,84,70,247,164,3,37,218,186,67,65,79,121,239,49,137,13,100,76,246,56,
    211,88,152,182,152,49,205,247,12,207,251,187,212,188,107,130,120,31,91,186,97,180,196,247,255,225,86,158,58,38,241,120,92,98,38,132,71,218,151,246,81,130,72,178,237,80,73,238,124,74,65,207,120,231,134,
    129,157,159,98,198,98,218,225,214,57,190,149,231,234,183,7,230,57,110,79,137,140,154,213,235,255,19,29,83,29,147,244,138,85,82,187,229,223,140,116,68,164,107,90,173,212,152,4,106,178,244,128,182,183,222,
    93,34,223,249,217,95,228,119,231,158,38,147,39,140,178,94,147,76,166,6,244,90,167,14,34,64,59,37,75,185,8,32,128,64,192,4,204,239,116,73,36,77,120,77,135,36,92,27,146,140,206,70,235,166,179,207,225,218,
    205,247,205,127,53,72,232,79,151,201,201,245,38,32,218,225,66,67,129,29,12,210,145,225,34,195,166,21,189,142,171,93,134,126,96,40,18,75,245,42,67,127,41,247,244,244,72,164,110,156,164,154,219,138,206,
    140,105,25,233,134,137,18,215,99,183,132,120,125,78,219,160,101,116,119,119,75,200,188,94,76,128,214,231,10,109,122,124,188,166,69,76,133,217,54,216,101,104,48,232,78,164,37,98,250,97,247,173,80,25,218,
    255,238,80,131,68,77,32,170,171,171,179,142,181,203,208,0,221,147,137,73,184,143,50,244,88,253,233,78,153,144,86,204,51,106,102,50,7,224,217,213,109,44,26,54,123,106,91,109,139,205,158,99,251,247,108,
    154,208,167,103,151,25,215,154,120,183,245,215,137,100,227,196,172,187,237,162,253,72,196,70,73,198,88,228,143,137,90,116,118,199,251,180,208,114,54,123,54,22,244,212,55,69,221,169,72,159,101,100,61,211,
    81,169,53,199,231,159,159,90,70,42,220,52,176,243,211,44,33,136,152,243,192,46,211,246,212,240,27,170,29,45,233,126,206,207,76,125,171,117,30,230,91,88,231,150,57,63,165,105,178,41,59,214,231,249,153,
    208,122,242,206,113,117,178,202,232,49,111,52,251,56,183,178,158,145,102,137,154,126,107,59,180,15,218,31,189,181,60,147,225,1,122,214,72,173,25,67,187,47,250,122,253,81,139,68,198,196,77,243,111,134,
    117,98,68,205,185,28,207,152,55,90,230,223,145,1,6,232,78,115,222,222,97,150,108,212,213,197,228,134,255,251,142,156,245,149,227,228,190,71,94,148,71,158,126,85,187,80,145,141,0,93,17,118,42,69,0,1,4,
    252,37,96,126,15,154,100,108,150,11,152,219,141,77,81,89,56,41,34,237,93,58,11,107,158,158,118,174,73,202,59,88,29,210,95,188,58,83,219,220,220,44,173,195,91,165,214,4,213,220,77,127,161,234,47,246,117,
    51,191,34,235,38,156,32,93,93,93,214,99,125,222,222,180,12,157,157,28,62,124,184,180,166,54,255,34,183,247,233,173,30,171,97,107,229,190,191,146,245,235,215,91,1,68,3,113,238,166,161,168,182,182,118,115,
    25,230,216,220,242,237,50,52,28,44,159,115,171,108,216,176,193,250,37,159,127,140,6,129,250,250,122,25,49,98,132,180,152,54,231,239,183,130,124,221,120,89,58,231,118,217,180,105,147,21,54,114,143,209,
    126,104,25,141,141,141,50,114,228,72,25,105,218,152,187,95,239,171,69,251,184,3,101,225,236,127,72,71,71,135,213,175,220,99,108,207,166,166,38,105,109,217,236,153,187,223,46,99,221,246,159,151,117,99,
    62,214,167,231,176,97,195,100,84,216,44,169,216,210,14,45,219,182,208,118,172,220,243,167,150,133,142,73,49,79,171,140,2,158,90,142,190,230,177,93,46,151,21,75,23,153,126,138,52,143,28,45,122,188,142,
    165,142,135,90,232,27,8,203,162,64,25,250,250,120,172,85,254,211,143,103,131,89,22,98,149,145,55,38,106,161,101,116,142,221,87,22,13,192,179,165,165,69,106,182,88,88,16,230,63,89,207,109,79,150,117,173,
    71,73,103,103,103,209,243,83,251,214,26,29,46,245,166,140,220,77,203,208,243,115,237,238,63,150,245,211,55,159,159,234,155,187,169,135,254,85,196,58,199,11,88,216,101,188,119,208,85,217,243,179,208,152,
    20,59,63,109,139,120,184,81,150,29,126,135,108,220,184,177,232,249,169,101,168,197,200,34,158,93,163,118,147,197,135,222,38,237,237,237,69,207,79,61,199,181,140,104,145,50,54,140,157,38,11,122,230,89,
    111,192,27,27,66,210,106,222,92,235,57,82,234,166,95,160,242,239,207,188,42,7,238,61,75,126,247,147,211,100,183,163,206,52,227,211,219,191,212,50,7,123,60,1,122,176,114,188,14,1,4,16,168,66,1,157,49,210,
    63,189,214,198,244,23,96,200,44,233,48,179,85,13,245,34,13,141,150,134,29,248,52,40,105,144,214,160,144,191,105,144,210,80,165,191,184,245,120,13,6,250,11,223,222,244,57,221,175,1,56,119,217,68,238,126,
    125,94,3,136,134,41,45,175,80,71,88,214,110,0,0,22,62,73,68,65,84,184,208,253,253,149,161,251,181,12,173,47,183,13,90,151,150,171,251,181,28,189,111,7,78,187,29,218,55,109,135,246,85,3,146,134,166,220,
    50,244,120,125,157,238,183,67,100,110,25,246,126,219,66,95,171,229,244,85,134,190,38,183,12,187,157,218,198,190,60,237,118,234,173,182,59,183,12,187,29,218,87,45,67,247,23,242,180,199,164,152,133,190,
    118,196,200,86,19,146,54,143,167,134,42,219,54,183,142,190,60,181,142,190,60,181,109,90,79,161,50,180,14,221,95,138,103,49,11,219,83,125,11,157,159,234,216,215,185,165,70,90,134,125,126,22,10,208,182,
    167,150,149,59,30,90,167,62,182,235,176,13,11,141,73,177,243,51,215,66,61,245,220,44,116,126,106,255,251,58,63,109,79,61,70,235,47,118,126,234,152,104,127,242,207,141,247,219,97,222,208,154,127,51,162,
    102,246,185,182,70,255,223,210,62,106,79,75,223,190,113,238,101,242,236,29,23,202,204,237,166,200,25,167,28,35,191,185,236,182,210,11,41,195,43,8,208,101,64,164,8,4,16,64,32,232,2,250,203,110,115,120,
    14,73,83,67,70,162,102,241,98,66,103,145,204,180,116,100,92,171,72,227,248,44,65,238,47,221,220,112,96,255,50,213,96,161,51,212,122,155,255,75,221,46,68,203,176,67,76,238,47,229,220,50,116,246,206,14,
    91,185,161,211,46,67,235,214,50,52,100,104,121,250,90,221,236,50,244,181,58,187,172,1,37,63,224,216,199,217,33,70,203,201,47,67,219,165,175,213,231,53,44,230,7,28,187,12,59,40,233,173,214,157,219,14,45,
    95,95,171,183,106,82,168,12,45,95,95,107,7,157,220,215,235,62,109,155,190,86,143,25,168,167,182,77,55,219,66,141,116,70,85,111,243,67,210,230,35,223,127,67,161,237,200,181,208,251,106,161,179,228,19,38,
    76,176,102,85,117,60,236,112,103,31,171,117,233,113,250,188,254,216,207,219,237,208,125,26,196,244,184,161,120,218,161,181,63,79,109,131,186,231,122,234,125,117,212,190,232,173,254,149,162,208,185,165,
    109,87,119,181,200,47,67,247,105,217,3,241,28,200,249,169,38,197,206,207,98,158,106,170,251,114,207,241,66,231,150,246,87,219,175,199,105,91,244,113,174,135,238,179,207,241,33,121,54,152,207,49,12,51,
    111,150,205,251,100,125,3,94,23,211,55,59,131,11,209,47,207,155,47,151,93,127,159,124,233,228,35,228,71,103,158,32,215,223,246,111,89,190,170,248,7,45,237,243,183,220,183,4,232,114,139,82,30,2,8,32,16,
    80,1,243,187,213,250,128,152,254,242,139,153,223,30,250,203,80,183,200,72,179,158,185,201,172,19,206,217,52,68,232,47,240,220,144,164,187,237,95,216,250,75,89,127,105,23,250,165,110,31,167,175,181,127,
    114,138,182,202,208,95,246,118,64,40,20,112,114,203,208,227,236,80,96,151,163,229,106,25,26,16,180,13,165,150,161,229,105,185,118,8,211,215,23,43,195,238,131,125,107,183,193,46,195,14,47,197,44,244,120,
    125,109,95,158,186,95,219,82,172,12,173,203,174,79,143,213,251,246,166,247,53,44,234,243,218,150,98,253,208,227,244,24,251,199,126,189,222,106,219,52,244,170,169,46,175,208,50,138,181,87,95,175,251,242,
    219,160,207,185,233,89,168,29,250,156,158,19,122,91,73,79,173,95,199,68,77,52,64,247,55,38,133,60,237,62,104,127,244,245,197,202,208,227,236,159,252,49,177,45,180,45,197,206,45,29,127,251,245,122,155,
    91,134,62,214,50,234,235,204,95,157,26,205,114,44,61,86,223,140,155,240,60,144,245,207,231,253,254,38,209,159,252,237,244,31,94,44,250,83,201,141,0,93,73,125,234,70,0,1,4,124,38,160,191,248,66,230,183,
    224,230,43,45,108,110,124,68,255,38,107,194,91,161,45,247,151,169,238,215,199,246,143,254,210,239,111,203,127,125,126,25,253,189,222,62,62,255,56,45,87,235,215,95,240,3,217,138,181,195,14,14,131,45,195,
    14,28,3,177,208,58,242,219,161,143,237,159,129,148,145,255,122,187,76,187,140,161,244,67,251,146,223,134,66,245,217,117,230,215,165,199,86,218,83,219,84,202,152,20,234,159,109,89,104,95,126,159,245,113,
    161,227,244,185,114,156,159,229,40,163,28,99,162,137,57,148,147,56,77,247,124,191,229,116,199,247,125,161,3,8,32,128,0,2,3,16,168,51,97,183,177,161,174,215,145,61,241,132,249,243,127,239,15,58,245,58,
    32,231,65,254,47,63,43,0,228,63,153,115,124,161,187,133,66,67,161,227,250,122,206,11,101,120,161,13,106,228,149,118,104,216,26,202,230,149,126,208,142,247,71,177,60,22,122,142,190,95,102,16,238,17,160,
    131,48,138,244,1,1,4,16,40,65,224,186,223,255,239,86,71,235,53,86,47,252,243,63,182,122,158,39,16,40,69,32,127,153,64,57,194,87,41,245,115,44,2,110,9,12,237,173,162,91,173,164,30,4,16,64,0,1,4,16,240,
    172,128,6,103,93,35,155,126,253,22,201,252,229,64,201,92,117,112,159,107,203,61,219,17,26,134,192,0,5,152,129,30,32,20,135,33,128,0,2,126,23,136,77,255,152,223,187,64,251,61,42,160,1,90,175,0,146,90,179,
    192,124,75,229,99,230,171,187,35,210,109,190,220,67,63,136,103,175,41,246,104,211,105,22,2,131,18,96,6,122,80,108,188,8,1,4,16,64,0,1,4,84,64,195,179,254,232,55,206,233,55,26,218,155,253,37,57,246,99,
    110,17,8,146,0,1,58,72,163,73,95,16,64,0,1,4,16,168,128,128,6,104,189,102,114,110,128,214,175,74,47,118,77,233,10,52,145,42,17,40,171,0,1,186,172,156,20,134,0,2,8,32,128,64,245,9,104,128,182,214,64,155,
    117,208,246,86,236,75,93,236,253,220,34,224,103,1,2,180,159,71,143,182,35,128,0,2,8,32,224,17,1,123,41,135,221,28,125,204,134,64,80,5,8,208,65,29,89,250,133,0,2,8,32,128,0,2,8,32,224,136,0,1,218,17,86,
    10,69,0,1,4,16,64,0,1,4,16,8,170,0,1,58,168,35,75,191,16,64,0,1,4,16,64,0,1,4,28,17,32,64,59,194,74,161,8,32,128,0,2,8,32,128,0,2,65,21,32,64,7,117,100,233,23,2,8,32,128,0,2,8,32,128,128,35,2,4,104,71,
    88,41,20,1,4,16,64,0,1,4,16,64,32,168,2,4,232,160,142,44,253,66,0,1,4,16,64,0,1,4,16,112,68,128,0,237,8,43,133,34,128,0,2,8,32,128,0,2,8,4,85,128,0,29,212,145,165,95,8,32,128,0,2,8,32,128,0,2,142,8,16,
    160,29,97,165,80,4,16,64,0,1,4,16,64,0,129,160,10,16,160,131,58,178,244,11,1,4,16,64,0,1,4,16,64,192,17,1,2,180,35,172,20,138,0,2,8,32,128,0,2,8,32,16,84,1,2,116,80,71,150,126,33,128,0,2,8,32,224,178,
    64,40,20,114,185,70,170,67,160,50,2,209,202,84,75,173,8,32,128,0,2,8,32,16,36,129,112,56,44,221,99,246,144,5,219,159,33,225,72,84,34,145,136,16,168,131,52,194,244,37,87,128,0,157,171,193,125,4,16,64,0,
    1,4,16,40,89,64,131,178,21,152,199,237,34,27,27,182,145,154,154,26,105,137,197,68,67,53,27,2,65,20,32,64,7,113,84,233,19,2,8,32,128,0,2,46,9,104,120,214,160,28,51,129,185,185,185,89,162,209,205,179,207,
    245,245,245,204,66,187,52,6,84,227,190,0,1,218,125,115,106,68,0,1,4,16,64,32,80,2,26,162,117,214,185,177,177,81,234,234,234,172,165,27,26,164,53,88,179,140,35,80,67,77,103,182,8,16,160,57,21,16,64,0,1,
    4,16,64,96,72,2,246,18,14,13,204,153,76,198,42,139,240,60,36,82,94,236,113,1,2,180,199,7,136,230,33,128,0,2,8,32,224,7,1,13,209,204,54,251,97,164,104,99,57,4,88,221,95,14,69,202,64,0,1,4,16,64,0,1,75,
    192,158,129,134,3,129,32,11,48,3,29,228,209,165,111,8,32,128,0,2,8,184,36,160,193,57,189,250,13,145,37,207,74,40,28,17,153,117,162,53,35,205,172,180,75,3,64,53,174,10,16,160,93,229,166,50,4,16,64,0,1,
    4,130,39,160,225,57,149,74,73,250,173,123,36,118,255,55,37,19,138,72,124,251,227,172,15,22,18,160,131,55,222,244,72,132,37,28,156,5,8,32,128,0,2,8,32,48,36,1,13,208,241,120,92,122,122,122,178,229,116,
    117,117,89,161,154,37,29,89,18,238,4,72,128,0,29,160,193,164,43,8,32,128,0,2,8,184,45,96,45,221,72,167,37,145,72,16,160,221,198,167,190,138,9,16,160,43,70,79,197,8,32,128,0,2,8,4,67,64,67,116,50,153,180,
    126,236,30,105,160,102,246,217,214,224,54,104,2,4,232,160,141,40,253,65,0,1,4,16,64,160,2,2,246,76,180,93,117,218,204,74,19,160,109,13,110,131,38,64,128,14,218,136,210,31,4,16,64,0,1,4,16,64,0,1,71,5,
    8,208,142,242,82,56,2,8,32,128,0,2,8,32,128,64,208,4,8,208,65,27,81,250,131,0,2,8,32,128,0,2,8,32,224,168,0,1,218,81,94,10,71,0,1,4,16,64,0,1,4,16,8,154,0,1,58,104,35,74,127,16,64,0,1,4,16,64,0,1,4,28,
    21,32,64,59,202,75,225,8,32,128,0,2,8,32,128,0,2,65,19,32,64,7,109,68,233,15,2,8,32,128,0,2,8,32,128,128,163,2,4,104,71,121,41,28,1,4,16,64,0,1,4,16,64,32,104,2,4,232,160,141,40,253,65,0,1,4,16,64,0,1,
    4,16,112,84,128,0,237,40,47,133,35,128,0,2,8,32,128,0,2,8,4,77,128,0,29,180,17,165,63,8,32,128,0,2,8,32,128,0,2,142,10,16,160,29,229,165,112,4,16,64,0,1,4,16,64,0,129,160,9,16,160,131,54,162,244,7,1,4,
    16,64,0,1,4,16,64,192,81,129,168,163,165,83,56,2,8,32,128,0,2,8,84,133,64,40,20,146,116,237,112,233,108,152,44,18,142,138,62,102,67,32,168,2,4,232,160,142,44,253,66,0,1,4,16,64,192,37,1,13,203,145,72,
    68,186,183,253,184,204,27,61,91,106,106,106,100,148,249,9,135,249,67,183,75,67,64,53,46,11,16,160,93,6,167,58,4,16,64,0,1,4,130,38,160,1,90,67,115,99,99,163,53,243,172,97,186,174,174,206,10,208,204,68,
    7,109,180,233,143,10,16,160,57,15,16,64,0,1,4,16,64,96,208,2,26,144,117,166,57,22,139,73,115,115,179,21,156,245,185,218,218,90,107,86,154,0,61,104,90,94,232,97,1,2,180,135,7,135,166,33,128,0,2,8,32,224,
    7,1,13,201,246,172,179,6,103,221,52,84,179,132,195,15,163,71,27,7,35,64,128,30,140,26,175,65,0,1,4,16,64,0,129,94,2,26,150,115,103,155,115,239,247,58,144,7,8,4,64,128,0,29,128,65,164,11,8,32,128,0,2,8,
    120,65,128,208,236,133,81,160,13,110,8,16,160,221,80,166,14,4,16,64,0,1,4,170,64,32,147,201,136,254,216,65,218,190,173,130,174,211,197,42,19,224,250,50,85,54,224,116,23,1,4,16,64,0,129,114,11,104,104,
    78,167,211,146,126,238,79,18,250,69,179,200,249,35,36,149,74,89,97,186,220,117,81,30,2,94,16,32,64,123,97,20,104,3,2,8,32,128,0,2,62,22,208,0,157,72,36,164,167,179,93,66,137,78,145,120,135,116,119,119,
    19,162,125,60,166,52,189,111,1,2,116,223,62,236,69,0,1,4,16,64,0,129,62,4,236,101,27,241,120,220,10,205,246,161,157,157,157,86,128,182,31,115,139,64,144,4,8,208,65,26,77,250,130,0,2,8,32,128,64,5,4,236,
    25,104,157,133,182,183,158,158,30,107,89,135,238,99,67,32,104,2,4,232,160,141,40,253,65,0,1,4,16,64,192,101,1,13,201,214,26,104,179,14,218,222,244,49,225,217,214,224,54,104,2,4,232,160,141,40,253,65,0,
    1,4,16,64,160,66,2,185,129,57,247,126,133,154,67,181,8,56,38,64,128,118,140,150,130,17,64,0,1,4,16,64,0,1,4,130,40,64,128,14,226,168,210,39,4,16,64,0,1,4,16,64,0,1,199,4,8,208,142,209,82,48,2,8,32,128,
    0,2,8,32,128,64,16,5,8,208,65,28,85,250,132,0,2,8,32,128,0,2,8,32,224,152,0,1,218,49,90,10,70,0,1,4,16,64,0,1,4,16,8,162,0,1,58,136,163,74,159,16,64,0,1,4,16,64,0,1,4,28,19,32,64,59,70,75,193,8,32,128,
    0,2,8,32,128,0,2,65,20,32,64,7,113,84,233,19,2,8,32,128,0,2,8,32,128,128,99,2,4,104,199,104,41,24,1,4,16,64,0,1,4,16,64,32,136,2,4,232,32,142,42,125,66,0,1,4,16,64,0,1,4,16,112,76,128,0,237,24,45,5,35,
    128,0,2,8,32,128,0,2,8,4,81,128,0,29,196,81,165,79,8,32,128,0,2,8,32,128,0,2,142,9,16,160,29,163,165,96,4,16,64,0,1,4,170,75,32,20,10,101,59,156,123,63,251,36,119,16,8,136,64,52,32,253,160,27,8,32,128,
    0,2,8,32,80,65,129,112,56,44,29,83,230,200,107,53,19,37,26,173,145,6,243,152,16,93,193,1,161,106,71,5,8,208,142,242,82,56,2,8,32,128,0,2,193,23,208,160,28,141,70,37,214,210,38,61,53,173,98,30,72,109,109,
    173,104,168,38,68,7,127,252,171,177,135,4,232,106,28,117,250,140,0,2,8,32,128,64,153,4,52,32,107,80,214,192,220,220,220,44,177,88,76,34,145,136,212,215,215,91,183,101,170,134,98,16,240,148,0,1,218,83,
    195,65,99,16,64,0,1,4,16,240,159,128,61,3,221,216,216,40,117,117,117,214,172,179,206,72,107,144,102,6,218,127,227,73,139,251,23,32,64,247,111,196,17,8,32,128,0,2,8,32,208,135,128,61,11,173,51,209,26,156,
    117,211,231,8,207,125,160,177,203,215,2,4,104,95,15,31,141,71,0,1,4,16,64,192,27,2,118,88,182,111,189,209,42,90,129,128,51,2,4,104,103,92,41,21,1,4,16,64,0,129,170,19,200,100,50,217,62,19,164,179,20,220,
    9,160,0,1,58,128,131,74,151,16,64,0,1,4,16,112,91,32,157,78,75,102,225,99,34,243,110,145,80,56,42,153,195,46,96,25,135,219,131,64,125,174,9,240,69,42,174,81,83,17,2,8,32,128,0,2,193,20,208,153,231,84,
    42,37,201,197,207,73,228,153,223,73,232,233,139,36,30,143,139,134,106,54,4,130,40,64,128,14,226,168,210,39,4,16,64,0,1,4,92,18,208,240,172,65,89,3,115,79,79,79,182,214,206,206,78,43,84,231,46,235,200,
    238,228,14,2,62,23,32,64,251,124,0,105,62,2,8,32,128,0,2,149,22,208,144,156,72,36,122,5,232,238,238,110,43,88,19,160,43,61,58,212,239,132,0,1,218,9,85,202,68,0,1,4,16,64,160,138,4,52,36,91,75,56,146,201,
    108,175,147,230,62,75,56,178,28,220,9,152,0,1,58,96,3,74,119,16,64,0,1,4,16,168,132,128,134,232,220,217,102,194,115,37,70,129,58,221,18,32,64,187,37,77,61,8,32,128,0,2,8,32,128,0,2,129,16,32,64,7,98,24,
    233,4,2,8,32,128,0,2,8,32,128,128,91,2,4,104,183,164,169,7,1,4,16,64,0,1,4,16,64,32,16,2,4,232,64,12,35,157,64,0,1,4,16,64,0,1,4,16,112,75,128,0,237,150,52,245,32,128,0,2,8,32,128,0,2,8,4,66,128,0,29,
    136,97,164,19,8,32,128,0,2,8,32,128,0,2,110,9,16,160,221,146,166,30,4,16,64,0,1,4,16,64,0,129,64,8,16,160,3,49,140,116,2,1,4,16,64,0,1,4,16,64,192,45,1,2,180,91,210,212,131,0,2,8,32,128,0,2,8,32,16,8,
    1,2,116,32,134,145,78,32,128,0,2,8,32,128,0,2,8,184,37,64,128,118,75,154,122,16,64,0,1,4,16,64,0,1,4,2,33,64,128,14,196,48,210,9,4,16,64,0,1,4,16,64,0,1,183,4,8,208,110,73,83,15,2,8,32,128,0,2,8,32,128,
    64,32,4,162,129,232,5,157,64,0,1,4,16,64,0,129,138,10,132,66,33,73,14,223,70,86,141,159,35,161,112,68,194,225,176,232,115,108,8,4,81,128,0,29,196,81,165,79,8,32,128,0,2,8,184,40,160,65,57,18,137,72,114,
    202,193,178,120,248,110,82,83,83,35,173,230,135,0,237,226,32,80,149,171,2,4,104,87,185,169,12,1,4,16,64,0,129,96,9,104,72,214,159,88,44,38,77,77,77,214,204,179,134,233,250,250,122,43,84,19,162,131,53,
    222,244,102,179,0,1,154,51,1,1,4,16,64,0,1,4,134,36,160,203,53,236,0,93,87,87,151,13,212,26,164,9,208,67,162,229,197,30,21,32,64,123,116,96,104,22,2,8,32,128,0,2,126,17,208,144,172,97,185,182,182,214,
    10,210,218,110,214,64,251,101,244,104,231,96,4,8,208,131,81,227,53,8,32,128,0,2,8,32,208,75,192,14,209,153,76,198,122,158,153,231,94,60,60,8,152,0,1,58,96,3,74,119,16,64,0,1,4,16,168,164,0,193,185,146,
    250,212,237,150,0,1,218,45,105,234,65,0,1,4,16,64,32,192,2,58,243,156,233,94,39,153,77,203,173,117,207,161,81,59,176,254,57,192,227,93,237,93,227,139,84,170,253,12,160,255,8,32,128,0,2,8,12,81,64,195,
    115,58,157,150,212,139,127,149,200,197,51,37,116,241,78,146,76,38,173,231,134,88,52,47,71,192,147,2,4,104,79,14,11,141,66,0,1,4,16,64,192,63,2,26,160,19,137,132,244,244,244,100,27,221,221,221,109,5,104,
    123,77,116,118,7,119,16,8,128,0,1,58,0,131,72,23,16,64,0,1,4,16,168,148,128,61,251,28,143,199,123,5,232,206,206,78,73,165,82,149,106,22,245,34,224,168,0,1,218,81,94,10,71,0,1,4,16,64,32,248,2,26,162,117,
    201,134,206,66,219,155,6,106,93,214,193,12,180,45,194,109,144,4,130,249,33,194,245,255,18,9,213,4,105,156,232,11,2,8,4,64,32,211,51,63,0,189,160,11,8,20,22,200,15,203,58,251,76,120,46,108,197,179,254,
    23,8,100,128,78,189,121,162,255,71,134,30,32,128,0,2,62,17,200,44,191,88,164,230,239,62,105,45,205,44,183,128,153,124,150,76,202,204,52,111,236,145,244,250,103,54,23,159,49,143,151,92,96,174,202,209,32,
    153,218,168,100,194,161,114,87,75,121,62,18,200,116,188,226,163,214,14,172,169,129,12,208,3,235,58,71,33,128,0,2,8,148,67,32,189,250,230,114,20,67,25,62,21,208,0,157,54,75,157,211,237,230,78,123,124,75,
    47,204,85,57,86,94,37,233,68,72,210,49,19,158,89,48,234,211,209,165,217,197,4,56,165,139,201,240,60,2,8,32,128,0,2,8,32,128,0,2,5,4,124,25,160,227,73,254,20,84,96,44,121,10,1,4,124,44,16,79,250,242,159,
    99,31,139,211,116,167,5,66,252,170,118,154,152,242,43,40,224,203,37,28,243,87,214,203,218,246,26,105,105,122,255,211,190,21,52,164,106,4,16,64,96,200,2,207,189,219,60,228,50,156,44,96,83,119,84,70,52,
    242,111,174,147,198,126,46,91,195,114,216,188,7,220,48,42,42,75,106,35,82,19,13,73,139,89,247,204,215,122,251,121,84,221,105,251,166,238,136,59,21,149,185,22,95,78,121,36,83,33,249,254,245,211,203,76,
    65,113,8,32,128,64,101,4,230,45,105,144,191,60,52,190,50,149,15,176,214,123,95,106,25,224,145,28,86,141,2,26,160,107,204,148,92,99,93,88,26,155,194,210,208,24,146,186,216,230,80,205,76,116,53,158,17,3,
    239,243,125,47,251,243,223,22,95,206,64,235,176,252,229,193,241,178,110,83,141,156,241,145,133,50,125,108,151,240,1,223,129,159,172,28,137,0,2,222,16,216,212,21,149,127,189,50,82,206,253,219,52,233,236,
    241,246,44,204,89,215,110,43,123,205,216,40,211,198,116,121,3,143,86,120,70,64,3,114,200,124,126,48,86,19,146,97,141,25,19,156,67,214,108,180,6,232,168,183,79,107,207,24,86,107,67,126,245,207,41,242,236,
    219,195,124,217,253,80,164,237,88,115,218,179,33,128,0,2,8,32,208,183,64,83,125,74,62,127,240,82,249,224,148,14,51,219,152,238,251,96,246,86,149,128,94,137,67,183,116,58,35,118,168,8,155,100,109,133,107,
    214,66,111,198,225,191,150,128,158,43,235,58,106,228,159,207,141,146,7,95,29,233,91,21,2,180,111,135,142,134,35,128,0,2,8,32,128,0,2,8,84,66,192,151,107,160,43,1,69,157,8,32,128,0,2,8,32,128,0,2,8,168,
    0,1,154,243,0,1,4,16,64,0,1,4,16,64,0,129,18,4,8,208,37,96,113,40,2,8,32,128,0,2,8,32,128,0,2,4,104,206,1,4,16,64,0,1,4,16,64,0,1,4,74,16,32,64,151,128,197,161,8,32,128,0,2,8,32,128,0,2,8,16,160,57,7,
    16,64,0,1,4,16,64,0,1,4,16,40,65,128,0,93,2,22,135,34,128,0,2,8,32,128,0,2,8,32,224,219,111,34,100,232,16,64,0,1,4,16,64,192,59,2,255,188,226,108,105,155,52,70,90,70,52,139,249,10,21,89,185,102,189,60,
    241,252,60,249,227,95,239,146,215,222,90,232,157,134,210,18,4,202,32,192,23,169,148,1,145,34,16,64,0,1,4,16,168,118,129,248,59,127,55,95,225,189,245,31,182,55,181,119,202,236,19,127,40,47,188,250,78,181,
    19,209,255,0,9,108,125,166,7,168,115,116,5,1,4,16,64,0,1,4,220,21,56,227,199,151,200,204,217,167,203,153,231,92,106,190,218,59,45,205,77,13,114,234,137,135,187,219,8,106,67,192,97,1,2,180,195,192,20,143,
    0,2,8,32,128,64,53,9,44,94,182,90,222,124,119,137,252,225,170,59,229,193,39,94,177,186,190,205,212,113,213,68,64,95,171,64,128,0,93,5,131,76,23,17,64,0,1,4,16,112,91,32,18,9,203,204,237,166,88,213,62,
    242,212,171,110,87,79,125,8,56,42,192,135,8,29,229,165,112,4,16,64,0,1,4,170,75,96,246,254,187,200,182,109,19,228,35,135,236,41,227,199,180,72,34,145,148,219,239,127,186,186,16,232,109,224,5,248,16,97,
    224,135,152,14,34,128,0,2,8,32,224,188,64,161,15,17,190,241,206,98,249,236,215,47,228,3,132,206,243,83,131,203,2,44,225,112,25,156,234,16,64,0,1,4,16,8,178,192,15,126,249,87,249,237,229,183,89,93,140,
    213,68,165,189,179,59,200,221,165,111,85,42,64,128,174,210,129,167,219,8,32,128,0,2,8,56,33,48,239,237,69,242,157,159,93,41,175,190,249,158,108,51,101,156,252,241,188,175,56,81,13,101,34,80,81,1,2,116,
    69,249,169,28,1,4,16,64,0,129,224,9,232,229,235,190,113,238,159,173,142,29,180,207,78,242,169,99,14,8,94,39,233,81,85,11,16,160,171,122,248,233,60,2,8,32,128,0,2,206,8,60,244,228,92,185,245,158,39,173,
    194,47,248,193,41,210,212,88,239,76,69,148,138,64,5,4,8,208,21,64,167,74,4,16,64,0,1,4,170,65,224,59,231,93,33,221,61,113,153,48,182,85,126,116,230,9,213,208,101,250,88,37,2,92,133,163,74,6,154,110,34,
    128,0,2,8,32,128,0,2,8,148,71,128,25,232,242,56,82,10,2,8,32,128,0,2,8,32,128,64,149,8,16,160,171,100,160,233,38,2,8,32,128,0,2,8,32,128,64,121,4,8,208,229,113,164,20,4,16,64,0,1,4,16,64,0,129,42,17,32,
    64,87,201,64,211,77,4,16,64,0,1,4,16,64,0,129,242,8,16,160,203,227,72,41,8,32,128,0,2,8,32,128,0,2,85,34,64,128,174,146,129,166,155,8,32,128,0,2,8,32,128,0,2,229,17,32,64,151,199,145,82,16,64,0,1,4,16,
    64,0,1,4,170,68,128,0,93,37,3,77,55,17,64,0,1,4,16,64,0,1,4,202,35,64,128,46,143,35,165,32,128,0,2,8,32,128,0,2,8,84,137,0,1,186,74,6,154,110,34,128,0,2,8,32,128,0,2,8,148,71,128,0,93,30,71,74,65,0,1,
    4,16,64,0,1,4,16,168,18,1,2,116,149,12,52,221,68,0,1,4,16,64,0,1,4,16,40,143,192,255,7,74,148,212,166,188,133,198,61,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* UpmixerComponents::slide1_png = (const char*) resource_UpmixerComponents_slide1_png;
const int UpmixerComponents::slide1_pngSize = 23188;

// JUCER_RESOURCE: slide1_png2, 23180, "../../Winter 2015/EECS 452/project/gui/Slide1.png"
static const unsigned char resource_UpmixerComponents_slide1_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,208,0,0,1,176,8,6,0,0,0,128,75,82,91,0,0,3,240,105,67,67,80,73,67,67,32,80,114,
    111,102,105,108,101,0,0,56,141,141,85,221,111,219,84,20,63,137,111,92,164,22,63,160,177,142,14,21,139,175,85,83,91,185,27,26,173,198,6,73,147,165,233,66,26,185,205,216,42,164,201,117,110,26,83,215,54,
    182,211,109,85,159,246,2,111,12,248,3,128,178,7,30,144,120,66,26,12,196,246,178,237,1,180,73,83,65,21,213,36,164,61,116,218,64,104,147,246,130,170,112,174,175,83,187,93,198,184,145,175,127,57,231,119,
    62,239,209,53,64,199,87,154,227,152,73,25,96,222,242,93,53,159,145,143,159,152,150,59,86,33,9,207,65,39,244,64,167,166,123,78,186,92,46,2,46,198,133,71,214,195,95,33,193,222,55,7,218,235,255,115,117,86,
    169,167,3,36,158,66,108,87,61,125,30,241,105,128,148,169,59,174,15,32,222,70,249,240,41,223,65,220,241,60,226,29,46,38,136,88,97,120,150,227,44,195,51,28,31,15,56,83,234,40,98,150,139,164,215,181,42,226,
    37,196,253,51,49,249,108,12,243,28,130,181,35,79,45,234,26,186,204,122,81,118,237,154,97,210,88,186,79,80,255,207,53,111,54,90,241,122,241,233,242,230,38,143,226,187,143,213,94,119,199,212,16,127,174,
    107,185,73,196,47,35,190,230,248,25,38,127,21,241,189,198,92,37,141,120,47,64,242,153,154,123,164,194,249,201,55,22,235,83,239,32,222,137,184,106,248,133,169,80,190,104,205,148,38,184,109,114,121,206,
    62,170,134,156,107,186,55,138,61,131,23,17,223,170,211,66,145,231,35,64,149,102,115,172,95,136,123,235,141,177,208,191,48,238,45,76,230,90,126,22,235,163,37,238,71,112,223,211,198,203,136,123,16,127,232,
    218,234,4,207,89,88,166,102,94,229,254,133,43,142,95,14,115,16,214,45,179,84,228,62,137,68,189,160,198,64,238,215,167,198,184,45,57,224,227,33,114,91,50,93,51,142,20,66,254,146,99,6,179,136,185,145,243,
    110,67,173,132,156,27,154,155,203,115,63,228,62,181,42,161,207,212,174,170,150,101,189,29,68,124,24,142,37,52,160,96,195,12,238,58,88,176,1,50,168,144,135,12,190,29,112,81,83,3,3,76,148,80,212,82,148,
    24,137,167,97,14,101,237,121,229,128,195,113,196,152,13,172,215,153,53,70,105,207,225,17,238,132,28,155,116,19,133,236,199,231,32,41,146,67,100,152,140,128,76,222,36,111,145,195,36,139,210,17,114,112,
    211,182,28,139,207,98,221,217,244,243,62,52,208,43,227,29,131,204,185,158,70,95,20,239,172,123,210,208,175,127,244,247,22,107,251,145,156,105,43,159,120,7,192,195,14,180,152,3,241,250,175,46,253,176,43,
    242,177,66,46,188,123,179,235,234,18,76,60,169,191,169,219,169,245,212,10,238,171,169,181,136,145,250,61,181,134,191,85,72,99,110,102,144,209,60,62,70,144,135,23,203,32,94,195,101,124,124,208,112,255,
    3,121,118,140,183,37,98,205,58,215,19,105,88,39,232,7,165,135,37,56,219,31,73,149,223,148,63,149,21,229,11,229,188,114,119,91,151,219,118,73,248,84,248,86,248,81,248,78,248,94,248,25,100,225,146,112,89,
    248,73,184,34,124,35,92,140,157,213,227,231,99,243,236,131,122,91,213,50,77,187,94,83,48,165,140,180,91,122,73,202,74,47,72,175,72,197,200,159,212,45,13,73,99,210,30,212,236,222,60,183,120,188,120,45,
    6,156,192,189,213,213,246,177,56,175,130,90,3,78,5,21,120,65,135,45,56,179,109,254,67,107,210,75,134,72,97,219,212,14,179,89,110,49,196,156,152,21,211,32,139,123,197,17,113,72,28,103,184,149,159,184,7,
    117,35,184,231,182,76,157,254,152,10,104,140,21,175,115,32,152,58,54,171,204,122,33,208,121,64,125,122,218,103,23,237,168,237,156,113,141,217,186,47,239,83,148,215,229,52,126,170,168,92,176,244,193,126,
    89,51,77,57,80,121,178,75,61,234,46,208,234,32,176,239,32,191,162,31,168,193,247,45,177,243,122,36,243,223,6,56,244,23,222,89,55,34,217,116,3,224,107,15,160,251,181,72,214,135,119,226,179,159,1,92,56,
    160,55,220,133,240,206,79,36,126,1,240,106,251,247,241,127,93,25,188,155,110,53,155,15,240,190,234,248,4,96,227,227,102,243,159,229,102,115,227,75,244,191,6,112,201,252,23,89,0,113,120,18,181,225,134,
    0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,64,0,73,68,65,84,120,1,237,221,7,156,36,85,185,247,241,167,195,244,228,221,157,153,205,113,150,101,1,217,5,201,81,16,88,88,130,128,87,5,37,
    24,46,42,162,92,5,195,85,76,40,248,138,138,40,138,94,69,16,16,36,35,160,72,70,162,228,28,22,88,64,96,151,205,57,78,236,248,158,167,118,171,233,233,233,9,61,211,85,93,85,253,171,207,103,118,186,43,156,
    58,231,123,106,103,254,125,230,116,117,40,210,122,108,70,88,16,64,0,1,4,16,64,0,1,4,16,64,96,80,2,225,65,237,197,78,8,32,128,0,2,8,32,128,0,2,8,32,96,9,16,160,185,16,16,64,0,1,4,16,64,0,1,4,16,40,66,128,
    0,93,4,22,187,34,128,0,2,8,32,128,0,2,8,32,64,128,230,26,64,0,1,4,16,64,0,1,4,16,64,160,8,1,2,116,17,88,236,138,0,2,8,32,128,0,2,8,32,128,0,1,154,107,0,1,4,16,64,0,1,4,16,64,0,129,34,4,8,208,69,96,177,
    43,2,8,32,128,0,2,8,32,128,0,2,4,104,174,1,4,16,64,0,1,4,16,64,0,1,4,138,16,32,64,23,129,197,174,8,32,128,0,2,8,32,128,0,2,8,16,160,185,6,16,64,0,1,4,16,64,0,1,4,16,40,66,128,0,93,4,22,187,34,128,0,2,
    8,32,128,0,2,8,32,64,128,230,26,64,0,1,4,16,64,0,1,4,16,64,160,8,1,2,116,17,88,236,138,0,2,8,32,128,0,2,8,32,128,0,1,154,107,0,1,4,16,64,0,1,4,16,64,0,129,34,4,8,208,69,96,177,43,2,8,32,128,0,2,8,32,128,
    0,2,4,104,174,1,4,16,64,0,1,4,16,64,0,1,4,138,16,32,64,23,129,197,174,8,32,128,0,2,8,32,128,0,2,8,16,160,185,6,16,64,0,1,4,16,64,0,1,4,16,40,66,128,0,93,4,22,187,34,128,0,2,8,32,128,0,2,8,32,64,128,230,
    26,64,0,1,4,16,64,0,1,4,16,64,160,8,1,2,116,17,88,236,138,0,2,8,32,128,0,2,8,32,128,0,1,154,107,0,1,4,16,64,0,1,4,16,64,0,129,34,4,8,208,69,96,177,43,2,8,32,128,0,2,8,32,128,0,2,4,104,174,1,4,16,64,0,
    1,4,16,64,0,1,4,138,16,32,64,23,129,197,174,8,32,128,0,2,8,32,128,0,2,8,16,160,185,6,16,64,0,1,4,16,64,0,1,4,16,40,66,128,0,93,4,22,187,34,128,0,2,8,32,128,0,2,8,32,64,128,230,26,64,0,1,4,16,64,0,1,4,
    16,64,160,8,1,2,116,17,88,236,138,0,2,8,32,128,0,2,8,32,128,0,1,154,107,0,1,4,16,64,0,1,4,16,64,0,129,34,4,8,208,69,96,177,43,2,8,32,128,0,2,8,32,128,0,2,4,104,174,1,4,16,64,0,1,4,16,64,0,1,4,138,16,136,
    22,177,175,103,118,205,72,200,51,117,161,34,197,9,132,36,83,220,1,236,141,0,2,8,32,128,0,2,8,120,76,192,119,1,218,138,95,230,159,112,168,124,65,76,3,124,198,62,189,95,178,188,154,105,120,45,83,125,149,
    43,147,49,110,161,144,234,121,236,191,1,213,65,0,1,4,16,64,0,1,4,6,47,224,187,0,173,77,27,59,170,75,62,186,239,82,217,118,124,151,100,82,238,38,66,13,127,93,201,176,60,58,191,89,30,125,117,180,116,37,
    162,18,42,99,152,31,76,87,215,86,165,229,51,7,47,144,214,177,221,230,133,199,96,142,40,237,62,161,72,90,230,45,106,144,27,31,153,42,137,20,179,134,74,171,75,105,8,32,128,0,2,8,32,224,182,128,255,2,180,
    25,197,108,170,79,202,81,187,173,145,253,103,183,139,196,93,78,132,230,116,105,211,75,59,181,182,73,87,87,68,158,152,63,198,122,238,118,199,13,246,124,153,116,72,62,190,239,98,57,243,163,203,101,116,67,
    66,202,146,245,171,51,114,215,83,93,114,203,99,83,36,145,52,128,101,169,196,96,197,216,15,1,4,16,64,0,1,4,16,232,95,192,127,1,218,180,39,28,206,72,93,44,45,205,53,102,42,64,164,60,211,1,14,217,177,77,
    150,173,93,46,203,214,213,200,59,203,27,37,84,166,122,244,215,189,25,51,218,187,219,118,171,229,140,163,151,201,140,230,184,68,141,91,89,150,88,70,106,204,40,184,153,189,193,130,0,2,8,32,128,0,2,8,248,
    94,192,151,1,90,213,173,57,200,58,20,108,70,88,203,177,52,152,64,120,204,110,235,228,221,21,117,114,249,253,213,178,161,45,38,161,114,5,212,2,0,25,99,51,174,169,93,190,251,177,247,100,246,196,46,137,42,
    83,153,172,180,179,178,115,198,11,212,149,85,8,32,128,0,2,8,32,128,128,159,4,152,144,58,212,222,50,83,73,38,52,37,229,83,251,175,148,57,59,173,150,88,212,36,214,50,13,240,22,106,66,181,153,119,252,149,
    35,23,202,65,179,54,73,117,212,67,21,43,84,89,214,33,128,0,2,8,32,128,0,2,62,18,240,237,8,180,23,140,117,192,121,246,148,46,57,225,128,229,178,112,117,173,60,255,118,179,39,222,80,168,83,55,142,218,111,
    169,156,120,224,26,105,170,77,25,42,51,252,76,134,30,214,37,115,236,30,107,100,159,153,27,165,198,76,29,98,65,160,84,2,155,205,251,40,254,245,114,139,60,246,198,200,82,21,73,57,8,32,128,0,2,46,8,16,160,
    135,131,108,70,161,171,77,138,158,51,107,179,44,92,181,92,86,110,168,150,37,107,234,203,58,149,67,195,243,7,166,173,147,111,28,179,88,90,155,226,230,214,117,132,231,225,116,113,149,25,189,191,229,127,
    231,201,225,31,92,59,156,98,56,22,129,62,5,190,251,95,239,201,31,238,153,44,223,188,106,102,159,251,176,1,1,4,16,64,192,91,2,76,225,24,110,127,152,16,61,178,46,37,31,223,123,173,28,187,215,42,105,168,
    77,136,222,249,162,28,139,206,51,30,89,223,37,223,254,232,66,217,117,90,167,121,211,96,121,234,81,142,182,59,117,206,51,142,90,76,120,118,10,151,114,179,2,255,115,196,18,57,130,23,105,89,15,30,32,128,
    0,2,94,23,32,64,151,162,135,204,95,245,167,180,196,229,196,3,86,200,135,119,92,43,209,50,221,145,163,202,228,229,47,206,125,79,142,216,125,163,212,234,156,108,93,152,186,177,197,97,136,255,30,109,110,
    151,200,130,128,27,2,199,152,105,66,44,8,32,128,0,2,254,16,32,64,151,164,159,66,18,49,229,236,218,218,33,159,250,240,114,249,192,148,141,102,20,218,93,90,253,64,153,67,118,93,38,159,63,116,149,140,169,
    77,154,185,216,76,221,40,69,215,142,50,247,28,103,65,192,13,1,174,53,55,148,57,7,2,8,32,80,26,1,230,64,151,198,209,140,244,134,164,214,140,60,31,177,211,122,89,184,162,86,86,153,249,208,43,55,212,153,
    249,208,206,191,233,76,195,243,54,147,54,201,255,30,179,68,102,140,238,50,159,54,72,120,46,85,183,82,14,2,8,32,128,0,2,8,32,144,47,224,238,48,105,254,217,131,246,220,132,232,150,134,180,28,183,239,106,
    57,114,183,213,82,27,75,88,193,218,201,102,234,188,231,70,51,239,250,27,199,44,148,61,182,109,151,42,230,61,59,201,77,217,8,32,128,0,2,8,32,128,128,48,2,93,234,139,192,4,218,25,227,186,229,4,51,149,99,
    209,154,90,121,120,222,104,71,167,33,107,94,62,233,160,69,230,13,140,235,165,209,186,197,26,163,207,165,238,210,190,202,11,53,238,35,161,154,109,250,218,204,122,4,122,9,100,218,95,144,76,199,27,189,214,
    179,2,1,4,16,64,192,95,2,4,232,82,247,151,25,133,142,134,50,178,159,25,13,254,228,1,203,228,229,119,155,100,93,155,97,118,224,83,10,117,234,198,238,51,215,200,87,142,88,46,19,26,204,188,103,110,89,87,
    234,222,236,183,188,208,184,255,150,208,232,147,250,221,135,141,8,244,16,88,116,54,1,186,7,8,79,16,64,0,1,127,10,48,133,195,137,126,51,33,186,94,63,234,123,215,245,178,255,172,149,230,195,55,204,135,153,
    152,117,165,92,244,86,121,227,154,59,228,203,71,46,149,237,198,117,73,68,139,231,142,27,165,36,166,44,4,16,64,0,1,4,16,64,160,160,0,1,186,32,75,9,86,154,192,60,110,100,82,254,231,200,37,178,227,228,205,
    230,141,125,230,205,132,37,12,209,53,209,164,124,254,144,37,50,119,231,245,82,109,165,231,18,212,153,34,16,64,0,1,4,16,64,0,1,4,6,20,32,64,15,72,52,244,29,204,76,14,217,127,135,54,249,204,156,197,50,169,
    185,107,232,5,229,29,169,163,207,135,239,190,82,142,251,208,42,25,111,66,186,181,48,250,156,167,196,83,4,16,64,0,1,4,16,64,192,25,1,2,180,51,174,91,74,53,35,206,181,102,238,243,137,251,175,145,163,247,
    89,33,35,205,253,153,101,152,159,82,152,73,69,100,214,180,245,114,234,220,101,178,131,121,179,162,222,127,154,169,27,78,118,34,101,35,128,0,2,8,32,128,0,2,61,5,8,208,61,61,74,255,204,132,232,209,13,41,
    57,109,206,82,217,115,135,53,18,139,14,125,62,180,142,60,55,141,232,144,175,28,190,68,246,153,217,38,53,214,91,64,75,59,183,186,244,0,148,88,140,192,146,37,75,228,173,183,222,146,120,60,94,204,97,236,
    59,68,129,203,46,187,76,142,57,230,24,57,238,184,227,134,88,2,135,33,128,0,2,8,84,162,0,1,218,141,94,55,119,203,216,97,114,183,124,121,238,18,153,57,177,221,204,135,54,243,45,134,48,229,34,22,78,201,201,
    7,46,149,35,118,91,39,163,106,76,16,215,101,8,229,108,57,144,127,189,34,240,220,115,207,201,97,135,29,38,163,70,141,146,41,83,166,200,246,219,111,47,205,205,205,114,234,169,167,202,154,53,193,254,120,
    231,7,31,124,80,38,79,158,156,253,58,248,224,131,123,117,75,50,153,148,89,179,102,101,247,209,253,223,121,231,157,94,251,13,101,197,235,175,191,46,119,220,113,135,220,117,215,93,67,57,156,99,16,64,0,1,
    4,42,84,192,183,183,177,139,232,109,225,244,171,208,0,108,54,84,22,218,88,158,158,142,154,58,205,217,121,147,204,95,186,88,254,239,159,219,202,202,77,213,166,34,217,138,14,88,169,76,42,44,7,238,182,82,
    78,62,104,133,76,110,74,120,240,150,117,125,244,133,182,204,188,96,176,250,107,192,86,86,222,14,103,159,125,182,252,236,103,63,147,116,186,231,39,86,182,183,183,139,142,142,46,90,180,72,238,189,247,94,
    95,193,92,112,193,5,178,112,225,66,217,97,135,29,228,107,95,251,90,191,117,239,234,234,146,165,75,151,102,247,209,199,175,189,246,154,21,152,237,149,247,221,119,159,104,208,205,93,52,84,179,32,128,0,2,
    8,32,80,46,1,95,6,232,148,153,202,176,190,61,42,107,54,154,1,244,100,207,65,116,141,164,26,155,107,99,25,169,55,95,158,89,204,84,142,198,104,90,62,119,224,42,121,99,105,131,220,246,196,68,105,235,174,
    178,194,229,64,117,212,169,27,51,38,109,48,83,55,150,201,236,137,93,82,165,13,244,80,211,180,254,155,186,195,210,21,15,153,209,245,2,173,233,10,201,198,206,168,232,167,38,178,188,47,160,35,159,63,253,
    233,79,173,21,53,53,53,242,173,111,125,75,246,223,127,127,89,189,122,181,252,254,247,191,151,218,218,90,185,230,154,107,222,63,192,39,143,110,190,249,102,121,230,153,103,100,206,156,57,3,6,232,220,38,
    133,204,71,208,103,204,69,114,221,117,215,201,121,231,157,151,221,164,207,117,177,183,103,55,240,0,1,4,16,64,0,129,50,9,248,50,64,47,91,87,35,191,252,251,76,249,243,3,102,158,168,153,30,209,99,49,33,109,
    164,153,222,112,228,158,43,228,115,7,172,27,246,155,246,122,148,61,220,39,38,68,79,104,74,201,215,204,28,230,69,171,234,228,201,249,205,146,76,155,183,1,234,148,142,62,150,140,25,152,28,81,23,151,211,
    204,244,143,15,109,191,81,234,76,230,222,242,18,161,143,3,202,177,58,146,145,139,31,24,35,143,189,50,94,146,154,236,243,186,36,100,182,175,92,95,45,241,188,23,59,229,168,170,87,206,169,65,241,180,211,
    78,179,170,19,137,68,228,145,71,30,145,189,246,218,43,91,189,19,78,56,193,10,140,85,85,86,135,203,242,229,203,101,253,250,245,18,141,70,101,187,237,182,179,246,211,81,234,247,222,123,207,122,220,218,218,
    42,177,88,204,154,63,173,43,38,76,152,32,213,213,213,242,232,163,143,90,211,65,118,221,117,215,62,183,237,185,231,158,86,25,58,10,254,198,27,111,200,155,111,190,105,77,151,248,224,7,63,104,149,169,27,
    117,196,87,231,102,235,162,211,76,218,218,218,228,201,39,159,148,137,19,39,138,150,173,231,218,176,97,131,44,91,182,76,58,59,59,173,253,180,126,58,114,28,14,135,173,209,104,107,101,63,255,124,232,67,31,
    178,234,123,253,245,215,91,47,44,52,48,107,25,255,248,199,63,172,163,14,60,240,64,203,169,80,17,169,84,74,230,207,159,111,213,113,210,164,73,50,123,246,108,169,175,175,239,181,171,26,62,245,212,83,214,
    139,147,221,119,223,189,215,246,220,21,235,214,173,147,87,94,121,197,106,171,182,81,203,101,65,0,1,4,16,64,64,5,252,23,160,77,216,108,239,138,202,75,239,140,50,57,173,64,240,52,33,181,169,46,33,51,167,
    109,236,21,228,188,208,229,33,51,117,121,231,233,93,242,165,195,23,201,74,243,66,224,237,21,13,146,214,102,228,133,78,187,174,58,218,124,252,126,75,229,152,61,215,73,115,157,206,123,54,43,10,52,219,222,
    191,44,223,205,84,154,121,139,27,228,161,151,199,152,215,51,26,160,123,87,48,99,234,173,127,57,40,180,173,44,117,46,243,73,117,14,175,134,77,93,62,247,185,207,245,8,207,186,78,195,112,238,242,163,31,253,
    200,154,210,49,118,236,88,89,185,114,165,181,73,131,224,161,135,30,106,61,214,185,196,26,172,117,174,176,46,223,255,254,247,229,47,127,249,139,21,188,63,253,233,79,203,47,126,241,139,62,183,93,125,245,
    213,242,236,179,207,202,151,190,244,37,121,233,165,151,172,227,245,31,45,239,166,155,110,18,13,210,122,78,187,236,83,78,57,197,26,37,238,238,238,182,246,221,121,231,157,229,129,7,30,144,91,111,189,53,
    251,162,64,55,104,253,244,24,13,178,26,184,7,90,62,254,241,143,203,99,143,61,38,11,22,44,176,194,249,126,251,237,39,183,221,118,155,21,162,91,90,90,172,182,234,11,141,252,69,143,209,23,35,185,211,60,116,
    14,185,182,89,231,145,219,139,122,124,249,203,95,206,190,65,83,231,82,111,187,237,182,246,230,236,247,68,34,33,231,156,115,142,252,234,87,191,202,238,171,97,254,219,223,254,182,85,166,62,102,65,0,1,4,
    16,168,108,129,158,243,31,124,98,145,49,33,57,105,230,4,39,204,45,221,10,125,37,211,97,73,245,206,112,30,105,93,72,98,38,1,31,181,235,38,249,216,254,75,165,169,62,97,234,85,248,23,178,206,123,222,195,
    220,185,227,51,135,172,148,233,45,221,102,122,132,217,207,163,237,74,153,145,242,132,25,77,79,24,251,130,125,98,218,82,202,15,146,241,72,103,14,185,26,47,191,252,114,246,88,13,138,165,94,206,63,255,124,
    89,177,98,133,53,90,172,83,65,114,151,252,109,122,231,143,195,15,63,220,10,207,26,200,191,251,221,239,202,180,105,211,172,209,220,79,126,242,147,162,129,50,119,209,32,170,83,78,116,212,89,23,29,165,189,
    252,242,203,173,55,65,106,232,214,109,186,212,213,213,89,33,124,230,204,153,214,243,129,254,209,64,107,91,216,211,54,174,189,246,90,235,176,79,124,226,19,98,143,198,231,150,243,246,219,111,203,145,71,
    30,153,13,207,35,70,140,176,54,235,232,177,190,32,184,225,134,27,172,231,250,70,205,47,124,225,11,217,64,172,251,105,187,31,126,248,225,220,226,172,199,63,248,193,15,172,121,233,90,255,239,124,231,59,
    162,231,214,208,252,203,95,254,82,244,197,6,11,2,8,32,128,0,2,190,12,208,214,40,166,61,210,153,255,125,107,194,44,28,73,61,210,225,230,5,192,72,243,241,222,95,156,179,82,62,188,243,42,169,173,50,35,203,
    102,93,238,146,49,83,83,166,140,219,44,255,115,196,98,217,109,90,135,84,105,79,121,52,60,107,189,183,212,126,107,5,243,251,36,247,121,110,35,43,248,113,110,40,45,20,12,135,75,163,1,120,241,226,197,214,
    155,16,47,189,244,210,30,197,229,111,211,96,168,83,27,116,36,249,158,123,238,177,194,227,223,254,246,55,235,24,157,182,113,255,253,247,247,56,254,144,67,14,145,181,107,215,202,66,243,70,193,134,134,6,
    107,155,206,121,214,176,173,211,63,180,28,93,246,221,119,95,235,249,139,47,190,104,61,31,204,63,246,237,228,116,228,91,167,173,232,27,8,117,249,212,167,62,85,240,112,157,43,173,163,219,26,112,117,180,
    90,219,161,163,232,173,173,173,214,254,223,251,222,247,172,239,191,254,245,175,173,249,213,125,237,103,23,174,119,61,209,145,103,93,244,77,156,58,138,173,22,26,210,117,249,195,31,254,96,125,231,31,4,16,
    64,0,129,202,22,240,103,128,14,66,159,153,192,60,109,116,66,190,106,62,234,123,118,235,70,115,151,138,156,143,250,54,57,180,190,38,33,95,56,116,177,28,60,123,147,153,247,172,193,180,103,192,14,2,65,37,
    183,65,167,69,216,139,78,159,40,245,114,242,201,39,247,57,103,55,127,155,142,206,234,162,35,201,58,199,90,231,44,231,206,199,214,121,209,185,203,209,71,31,45,58,111,123,252,248,241,178,227,142,59,90,155,
    116,196,183,20,139,61,218,171,111,164,212,233,23,58,247,90,207,115,208,65,7,21,44,222,174,187,206,159,62,246,216,99,173,186,171,237,103,63,251,89,107,127,13,249,26,138,181,109,186,244,181,159,181,209,
    252,243,194,11,47,88,65,91,159,107,152,87,11,253,186,243,206,59,173,93,242,45,172,149,252,131,0,2,8,32,80,113,2,254,155,3,29,160,46,210,204,188,151,249,64,148,255,54,65,121,245,134,106,121,111,117,189,
    53,200,108,6,211,228,152,189,151,203,199,247,93,45,99,26,147,38,58,155,21,30,30,125,14,80,151,184,214,20,157,234,208,212,212,100,141,152,234,72,231,153,103,158,217,99,62,174,142,170,234,20,12,123,142,
    174,6,91,93,58,58,58,178,117,220,180,105,83,246,113,254,3,157,43,221,215,146,191,205,158,114,161,243,140,247,222,123,239,94,135,141,25,51,166,199,58,123,127,93,105,207,213,206,191,13,159,110,211,55,74,
    22,187,232,27,20,181,14,58,127,218,14,173,199,31,127,188,21,98,11,149,101,215,37,223,98,227,70,243,30,8,179,232,136,179,78,53,209,16,172,75,95,251,89,27,205,63,118,121,250,124,159,125,246,177,222,128,
    105,111,179,191,107,187,180,92,22,4,16,64,0,129,202,21,96,4,186,156,125,111,70,161,107,204,239,225,227,246,94,39,199,236,179,76,70,154,55,63,102,18,97,217,101,250,58,249,252,156,229,50,211,140,80,71,8,
    207,229,236,33,199,206,173,35,184,191,253,237,111,173,242,245,94,200,58,221,225,207,127,254,179,204,155,55,207,186,235,132,78,147,208,59,63,216,115,128,53,108,235,162,193,250,198,27,111,180,222,212,167,
    193,187,175,69,203,239,107,201,223,102,207,59,222,188,121,179,53,125,65,131,171,222,62,79,131,172,222,146,78,223,132,88,204,98,135,85,125,163,164,6,126,251,205,134,131,45,195,158,198,97,239,223,215,244,
    13,221,110,215,93,231,148,235,116,11,189,111,182,222,197,195,118,211,187,113,52,54,54,90,150,186,127,95,251,233,54,93,212,220,14,209,250,129,54,183,223,126,187,21,228,117,212,254,172,179,206,178,30,19,
    158,183,88,241,47,2,8,32,80,201,2,4,232,114,247,190,9,209,45,230,238,26,95,58,116,133,236,185,253,90,153,52,126,179,185,223,179,249,216,239,109,218,37,102,110,255,198,200,115,185,59,200,185,243,235,52,
    3,189,163,133,46,58,205,64,223,244,166,243,135,63,246,177,143,89,119,197,208,176,252,243,159,255,220,26,165,206,157,194,160,183,184,211,105,13,58,95,185,20,139,190,81,110,250,244,233,214,27,236,118,218,
    105,39,209,219,218,233,60,233,31,255,248,199,50,119,238,220,94,31,242,50,208,57,53,120,234,162,183,216,211,224,95,236,237,223,114,3,244,212,169,83,179,33,185,208,121,245,238,36,122,43,61,93,116,190,179,
    214,251,164,147,78,178,60,245,133,130,61,103,89,223,24,104,143,150,231,238,167,115,185,115,23,13,219,250,65,48,186,92,117,213,85,214,155,48,53,132,107,128,214,23,53,124,98,97,174,22,143,17,64,0,129,202,
    21,32,64,123,161,239,205,237,221,182,27,223,45,103,30,181,72,126,122,226,127,100,238,46,235,164,177,154,121,207,94,232,26,167,235,112,197,21,87,88,163,156,31,248,192,7,122,156,74,71,65,53,40,235,189,150,
    53,132,234,221,49,78,63,253,244,236,84,4,93,167,225,186,20,139,222,145,66,239,23,173,231,211,209,99,157,87,172,247,114,214,251,46,95,121,229,149,217,115,14,246,92,122,11,56,13,157,186,196,227,241,236,
    157,47,6,123,188,134,96,251,222,212,250,198,196,254,70,124,117,218,201,227,143,63,110,189,232,176,167,185,232,121,116,36,89,111,237,119,192,1,7,88,167,213,80,175,111,134,180,195,189,174,212,23,43,26,172,
    243,151,175,126,245,171,214,8,188,134,119,189,213,160,126,50,162,78,123,209,79,140,60,234,168,163,242,119,231,57,2,8,32,128,64,5,10,132,34,173,199,22,63,81,177,140,80,91,42,219,207,252,67,19,70,155,205,
    173,225,78,61,250,109,57,239,248,165,189,63,104,165,140,117,239,255,212,25,233,72,234,189,146,205,237,191,204,39,40,70,116,142,165,95,122,166,42,45,39,253,110,134,220,242,240,140,62,239,3,157,219,246,
    130,247,239,206,221,193,67,143,95,188,224,25,217,113,114,123,193,26,133,183,253,147,132,70,159,84,112,219,80,86,234,20,10,189,151,177,142,148,234,72,112,110,32,180,203,211,41,17,58,178,171,35,198,246,
    84,3,123,91,41,190,235,221,65,244,62,204,58,23,57,255,246,119,197,148,175,243,132,117,58,133,206,69,214,64,60,114,228,200,98,14,31,210,190,26,214,181,238,250,33,50,246,237,236,10,21,180,106,213,42,107,
    46,180,61,191,188,208,62,246,58,221,87,95,76,104,27,74,177,100,22,157,45,233,101,23,21,44,234,230,39,199,202,201,191,219,114,31,239,130,59,176,18,1,4,16,64,192,51,2,188,137,208,51,93,17,146,186,168,73,
    204,214,107,3,31,133,103,207,248,249,191,34,58,125,160,208,155,248,114,91,166,247,38,206,31,173,206,221,62,220,199,122,75,61,125,131,227,112,23,29,53,46,85,232,28,108,93,244,133,71,238,8,115,95,199,233,
    104,114,254,27,41,251,219,183,175,109,172,71,0,1,4,16,168,92,1,166,112,12,185,239,237,176,59,228,2,10,28,168,193,217,137,240,236,68,93,11,84,159,85,8,32,128,0,2,8,32,128,64,5,8,16,160,139,237,100,243,
    161,32,139,215,71,229,197,69,213,178,182,221,240,121,93,208,212,119,233,198,136,60,255,94,141,196,183,126,18,120,177,77,102,127,4,16,64,0,1,4,16,64,0,129,247,5,188,30,255,222,175,169,87,30,153,1,226,21,
    155,34,114,195,83,163,229,95,175,142,148,100,218,140,238,122,120,137,155,234,253,246,238,73,242,232,155,117,210,237,237,170,122,88,145,170,33,128,0,2,8,32,128,0,2,239,11,16,160,223,183,24,220,35,19,160,
    211,102,162,242,91,139,70,202,117,15,79,144,103,22,212,137,185,89,179,55,23,243,9,134,55,60,213,36,183,60,50,85,54,182,199,182,206,175,246,102,85,169,21,2,8,32,128,0,2,8,32,224,23,1,2,244,16,122,42,108,
    166,69,36,82,17,121,252,245,49,242,183,199,198,201,130,53,38,65,123,45,68,155,55,36,62,255,110,181,252,233,174,86,89,186,174,86,194,38,248,179,32,128,0,2,8,32,128,0,2,8,12,95,128,0,61,84,67,19,162,55,
    118,68,229,182,167,199,203,29,207,141,150,77,93,166,32,175,132,212,112,70,214,108,14,203,5,255,152,38,243,222,109,146,36,83,55,134,218,203,28,135,0,2,8,32,128,0,2,8,244,18,32,64,247,34,25,252,10,189,97,
    198,210,53,245,114,237,191,39,202,67,175,141,52,83,59,188,177,104,96,190,232,238,241,242,224,75,19,164,43,229,149,84,239,13,27,106,129,0,2,8,32,128,0,2,8,12,87,128,0,61,76,193,148,249,180,147,121,11,70,
    201,53,143,76,144,231,23,213,148,127,42,135,153,247,124,147,153,247,124,221,195,211,100,131,25,33,207,104,202,55,163,229,44,8,32,128,0,2,8,32,128,0,2,165,17,224,131,84,134,235,104,242,105,183,249,4,193,
    71,94,25,45,51,198,117,200,248,145,75,101,202,40,115,191,184,114,12,71,71,50,242,226,194,106,249,227,157,211,100,233,234,90,73,219,225,89,191,179,32,128,0,2,8,32,128,0,2,8,148,68,128,17,232,82,48,154,
    124,186,174,173,218,140,66,79,146,155,30,31,43,155,203,49,31,218,140,50,175,52,247,123,254,254,117,51,228,133,119,116,222,51,93,91,138,174,165,12,4,16,64,0,1,4,16,64,32,95,128,148,149,47,50,212,231,230,
    141,123,43,215,213,201,181,230,214,118,247,206,107,50,3,208,110,78,155,48,119,5,49,163,204,231,253,125,178,60,57,111,140,249,192,148,173,183,4,97,234,198,80,123,147,227,16,64,0,1,4,16,64,0,129,62,5,8,
    208,125,210,20,191,33,99,66,244,235,139,71,201,213,15,141,151,103,205,39,255,137,185,149,156,43,75,44,35,87,252,187,89,110,121,116,170,180,39,182,206,202,33,60,187,66,207,73,16,64,0,1,4,16,64,160,242,
    4,8,208,37,238,243,164,153,254,252,232,107,99,228,166,71,39,200,146,181,38,204,154,80,237,232,98,230,61,63,253,159,90,185,228,206,233,230,214,117,85,188,105,208,81,108,10,71,0,1,4,16,64,0,1,4,76,188,3,
    161,196,2,70,116,147,249,212,191,91,158,28,47,183,61,59,90,52,80,59,118,127,104,51,202,172,247,123,254,233,205,173,242,198,146,17,146,98,222,115,137,59,147,226,16,64,0,1,4,16,64,0,129,222,2,4,232,222,
    38,195,95,19,73,203,178,213,245,114,245,195,19,229,221,181,213,14,221,70,46,99,125,64,202,37,15,142,147,199,231,141,51,243,158,183,118,37,83,55,134,223,127,148,128,0,2,8,32,128,0,2,8,244,35,64,128,238,
    7,103,56,155,210,102,234,198,43,230,254,208,87,62,52,70,86,180,57,48,149,163,74,228,182,23,70,200,13,15,79,145,205,221,204,123,30,78,95,113,44,2,8,32,128,0,2,8,32,80,140,0,1,186,24,173,34,247,141,39,195,
    114,229,253,211,228,254,151,70,73,91,188,132,31,104,98,230,61,207,91,20,147,75,239,153,38,239,172,168,223,50,239,217,213,187,126,20,9,193,238,8,32,128,0,2,8,32,128,64,128,4,8,208,78,118,166,25,133,94,
    189,190,78,46,188,99,170,188,178,176,94,82,250,225,42,195,253,76,19,51,69,99,125,123,88,126,123,199,20,121,230,205,38,137,39,237,91,214,57,217,16,202,70,0,1,4,16,64,0,1,4,16,176,5,8,208,182,132,67,223,
    51,102,62,244,107,239,54,203,111,239,154,32,11,214,13,119,62,116,198,250,128,195,63,222,63,78,238,125,126,130,180,117,199,182,212,154,121,207,14,245,30,197,34,128,0,2,8,32,128,0,2,189,5,8,208,189,77,74,
    190,38,101,2,238,189,207,77,150,235,31,109,145,85,237,102,196,120,168,183,182,171,202,200,63,95,106,148,27,31,153,44,171,54,86,111,153,180,65,120,46,121,127,81,32,2,8,32,128,0,2,8,32,208,159,0,1,186,63,
    157,18,110,107,235,142,200,101,247,183,154,123,68,55,74,103,114,8,243,161,205,188,231,249,139,99,114,201,221,173,242,206,242,6,73,155,79,30,20,230,61,151,176,135,40,10,1,4,16,64,0,1,4,16,24,156,192,214,
    219,55,12,110,103,207,236,101,194,99,70,239,175,92,104,66,113,90,183,133,205,253,151,157,123,109,160,225,53,163,33,216,204,63,206,132,117,98,115,161,197,124,128,138,25,108,14,109,29,33,14,153,81,231,101,
    171,234,228,87,183,79,147,105,99,222,150,221,166,181,23,113,19,238,140,108,236,8,203,111,238,154,42,79,191,217,44,221,121,243,158,51,250,89,45,230,13,139,133,56,172,154,153,253,83,198,197,201,37,161,222,
    150,71,129,27,95,107,253,76,251,67,218,37,140,152,59,217,13,148,141,0,2,8,32,128,0,2,46,8,248,50,64,215,84,39,101,202,152,54,105,168,75,152,145,216,60,37,19,110,71,213,38,100,250,152,78,103,6,104,205,
    249,70,212,38,101,230,212,141,178,162,67,19,114,126,5,52,52,139,116,116,70,101,249,218,122,217,220,105,238,55,183,117,201,152,81,228,23,223,28,35,255,119,239,102,57,231,147,75,164,181,57,46,50,136,96,
    171,187,92,250,224,88,185,231,217,241,239,151,151,115,222,241,205,29,50,190,217,180,55,103,157,125,78,235,187,41,96,234,152,14,137,56,149,161,205,107,136,29,38,181,203,162,15,172,144,100,129,58,132,205,
    121,55,182,197,100,225,138,17,189,251,171,71,69,121,130,0,2,8,32,128,0,2,8,120,95,192,151,1,122,74,75,167,252,191,19,255,35,31,218,177,93,36,158,55,210,108,242,172,142,116,214,87,155,145,208,65,132,211,
    162,187,200,148,57,115,116,74,126,252,177,101,102,36,120,69,225,195,163,25,121,252,63,117,242,235,91,183,49,119,202,104,233,49,231,89,3,230,63,159,152,42,59,77,234,144,255,62,116,149,180,212,154,244,217,
    95,61,205,188,231,187,94,104,144,235,30,158,44,43,54,214,244,154,247,172,163,237,71,238,190,66,190,109,234,51,50,106,202,178,166,118,244,174,86,99,77,90,106,243,168,122,239,53,196,53,233,176,252,239,17,
    171,228,244,131,215,90,47,30,122,149,82,157,150,59,159,25,33,95,191,124,103,233,140,111,189,107,72,175,157,88,129,0,2,8,32,128,0,2,8,248,67,192,127,1,218,4,196,168,25,201,109,174,79,200,248,81,73,19,160,
    251,24,86,237,61,48,92,178,30,137,154,233,8,77,245,38,160,135,172,121,36,189,203,173,74,75,115,67,76,98,26,104,11,44,155,58,162,242,199,251,90,101,251,201,157,114,232,236,141,82,99,2,119,193,224,107,218,
    249,198,178,42,249,211,221,211,228,173,37,141,146,214,160,93,96,132,183,206,188,88,24,55,42,46,163,180,55,251,107,183,110,235,111,123,129,186,14,106,149,41,115,100,93,218,250,42,184,191,9,208,163,204,
    95,11,116,100,222,106,103,129,54,20,60,142,149,8,32,128,0,2,8,32,128,128,7,5,156,26,147,116,188,169,86,52,237,43,12,246,181,222,241,90,109,61,129,57,127,191,85,48,193,120,209,242,70,249,141,185,151,243,
    91,43,235,250,216,55,35,155,58,195,114,209,157,83,228,137,249,163,165,59,213,247,200,173,117,174,126,79,232,66,195,251,59,191,217,86,248,165,132,11,245,226,20,8,32,128,0,2,8,32,128,64,137,5,124,27,160,
    45,7,13,109,133,190,74,140,212,103,113,133,206,157,187,174,207,3,77,181,205,253,161,159,120,125,172,252,233,190,113,178,100,147,153,39,157,119,107,187,140,233,153,75,31,26,43,119,63,173,243,158,183,254,
    161,96,160,145,219,220,115,23,122,220,79,125,74,178,169,208,57,117,29,11,2,8,32,128,0,2,8,32,16,32,1,127,7,104,159,119,68,34,21,146,155,254,61,69,254,249,116,179,172,239,50,93,97,135,104,51,245,227,238,
    121,13,114,189,153,247,188,220,154,247,92,120,234,134,207,155,79,245,17,64,0,1,4,16,64,0,1,95,10,16,160,203,217,109,38,23,111,104,171,150,223,223,61,85,158,121,171,209,188,41,209,84,198,132,231,55,150,
    199,228,143,119,78,147,55,204,188,231,148,121,131,222,0,19,66,202,217,2,206,141,0,2,8,32,128,0,2,8,84,156,0,1,186,220,93,110,166,114,188,179,120,148,153,15,61,73,222,93,83,35,155,205,72,244,239,238,154,
    34,79,233,188,231,196,214,121,207,250,230,59,22,4,16,64,0,1,4,16,64,0,1,79,8,248,239,46,28,158,96,43,109,37,116,62,244,191,231,141,151,75,254,213,46,177,170,164,220,99,230,61,111,28,236,188,231,210,86,
    133,210,16,64,0,1,4,16,64,0,1,4,6,16,32,64,15,0,228,214,230,184,185,69,221,95,31,104,181,78,215,222,101,62,225,80,63,86,112,160,55,13,186,85,57,206,131,0,2,8,32,128,0,2,8,32,144,21,32,64,103,41,202,255,
    96,83,135,185,27,135,29,154,237,239,229,175,22,53,64,0,1,4,16,64,0,1,4,16,200,17,96,14,116,14,70,217,31,106,104,230,182,111,101,239,6,42,128,0,2,8,32,128,0,2,8,244,39,64,128,238,79,167,28,219,120,195,
    96,57,212,57,39,2,8,32,128,0,2,8,32,48,104,1,2,244,160,169,216,17,1,4,16,64,0,1,4,16,64,0,1,115,215,97,16,16,64,96,104,2,153,247,206,150,204,146,11,134,118,48,71,85,166,64,114,109,101,182,155,86,35,128,
    0,2,1,19,32,64,7,172,67,105,142,123,2,153,196,106,17,253,98,65,0,1,4,16,64,0,129,138,18,96,10,71,69,117,55,141,69,0,1,4,16,64,0,1,4,16,24,174,0,1,122,184,130,28,31,104,129,12,119,69,9,116,255,122,169,
    113,92,106,94,234,13,234,130,0,2,8,244,47,64,128,238,223,135,173,21,46,176,108,125,117,133,11,208,124,183,4,184,214,220,146,230,60,8,32,128,192,240,5,8,208,195,55,164,132,0,11,92,249,240,132,0,183,142,
    166,121,69,32,157,22,185,230,223,227,189,82,29,234,129,0,2,8,32,48,128,0,1,122,0,32,54,87,182,192,205,79,142,149,255,119,203,116,73,165,184,65,119,101,95,9,206,181,190,173,51,34,167,92,188,163,188,242,
    94,131,115,39,161,100,4,16,64,0,129,146,10,248,242,46,28,33,147,101,170,170,204,140,193,106,51,108,163,79,188,182,68,51,18,49,245,11,187,244,113,220,85,33,227,160,51,13,34,230,187,23,39,82,198,50,18,211,
    254,242,233,242,211,155,91,229,242,7,38,202,158,51,54,153,118,24,99,22,4,74,36,208,110,194,243,227,111,141,148,77,29,190,252,81,92,34,5,138,65,0,1,4,252,39,224,203,159,218,107,55,87,201,141,79,140,150,
    23,22,212,75,42,237,189,0,29,14,103,228,221,149,181,178,120,93,173,9,248,14,95,20,38,164,63,191,112,148,92,124,71,92,170,194,26,238,156,62,97,241,237,137,70,50,242,242,130,6,73,248,120,20,119,249,250,
    152,252,243,185,209,197,55,158,35,16,64,0,1,4,16,64,32,112,2,161,72,235,177,190,26,26,204,100,66,18,54,19,79,106,35,41,137,132,77,88,244,228,109,18,66,146,52,151,74,119,50,100,2,190,169,172,195,35,209,
    85,38,176,215,152,81,239,144,39,45,12,132,249,43,65,50,157,145,142,100,196,244,87,200,60,101,20,55,112,63,73,104,16,2,8,32,128,0,2,21,36,224,187,17,232,144,9,163,154,19,59,146,246,244,109,239,141,184,
    230,94,63,110,132,197,164,201,163,109,113,117,240,178,133,9,206,58,191,196,225,23,19,185,246,60,70,0,1,4,16,64,0,1,4,156,16,176,83,168,19,101,83,38,2,8,32,128,0,2,8,32,128,0,2,129,19,32,64,7,174,75,105,
    16,2,8,32,128,0,2,8,32,128,128,147,2,4,104,39,117,41,27,1,4,16,64,0,1,4,16,64,32,112,2,4,232,192,117,41,13,66,0,1,4,16,64,0,1,4,16,112,82,128,0,237,164,46,101,35,128,0,2,8,32,128,0,2,8,4,78,128,0,29,184,
    46,165,65,8,32,128,0,2,8,32,128,0,2,78,10,16,160,157,212,165,108,4,16,64,0,1,4,16,64,0,129,192,9,16,160,3,215,165,52,8,1,4,16,64,0,1,4,16,64,192,73,1,2,180,147,186,148,141,0,2,8,32,128,0,2,8,32,16,56,
    1,2,116,224,186,148,6,33,128,0,2,8,32,128,0,2,8,56,41,64,128,118,82,151,178,17,64,0,1,4,16,64,0,1,4,2,39,16,13,92,139,104,16,2,8,32,128,0,2,8,148,69,224,51,159,56,88,62,255,201,195,10,158,251,242,27,255,
    37,215,220,250,80,193,109,172,68,192,111,2,4,104,191,245,24,245,69,0,1,4,16,64,192,163,2,83,39,142,145,3,246,154,85,176,118,247,253,251,197,130,235,89,137,128,31,5,8,208,126,236,53,234,140,0,2,8,32,128,
    128,135,5,222,93,180,66,206,252,241,165,61,106,248,230,187,75,123,60,231,9,2,126,22,32,64,251,185,247,168,59,2,8,32,128,0,2,30,20,216,212,214,33,119,63,252,188,7,107,70,149,16,40,141,0,111,34,44,141,35,
    165,32,128,0,2,8,32,128,0,2,8,84,136,0,35,208,21,210,209,52,19,1,4,16,64,0,1,183,4,182,223,102,146,60,115,251,133,61,78,119,244,41,231,202,170,53,27,123,172,227,9,2,126,21,32,64,251,181,231,168,55,2,8,
    32,128,0,2,30,21,168,173,169,150,221,102,207,232,81,187,88,85,85,143,231,60,65,192,207,2,4,104,63,247,30,117,71,0,1,4,16,64,192,131,2,111,47,92,46,167,158,245,251,30,53,91,181,118,67,143,231,60,65,192,
    207,2,4,104,63,247,30,117,71,0,1,4,16,64,192,131,2,109,29,157,242,232,51,175,121,176,102,84,9,129,210,8,240,38,194,210,56,82,10,2,8,32,128,0,2,8,32,128,64,133,8,16,160,43,164,163,105,38,2,8,32,128,0,2,
    8,32,128,64,105,4,8,208,165,113,164,20,4,16,64,0,1,4,16,64,0,129,10,17,8,69,90,143,205,84,72,91,105,38,2,8,32,128,0,2,8,32,128,0,2,195,22,96,4,122,216,132,20,128,0,2,8,32,128,0,2,8,32,80,73,2,4,232,74,
    234,109,218,138,0,2,8,32,128,0,2,8,32,48,108,1,2,244,176,9,41,0,1,4,16,64,0,1,4,16,64,160,146,4,8,208,149,212,219,180,21,1,4,16,64,0,1,4,16,64,96,216,2,4,232,97,19,82,0,2,8,32,128,0,2,8,32,128,64,37,9,
    248,254,147,8,247,152,177,73,166,143,237,146,72,132,155,137,84,210,133,75,91,17,8,130,64,123,103,68,30,123,115,164,172,111,171,242,77,115,182,155,216,33,59,77,107,147,42,126,230,250,166,207,168,40,2,94,
    19,216,176,57,42,143,190,57,74,218,187,34,94,171,218,160,235,227,219,0,221,210,152,144,155,190,57,79,62,180,195,198,65,55,150,29,17,64,0,1,175,9,116,116,71,228,171,87,108,39,215,254,123,188,215,170,214,
    163,62,58,72,241,231,47,189,33,39,31,184,162,199,122,158,32,128,0,2,67,17,208,129,131,207,253,223,7,228,222,151,91,134,114,120,217,143,241,237,20,142,75,78,123,131,240,92,246,203,135,10,32,128,192,112,
    5,234,170,83,114,217,105,243,101,151,214,182,225,22,229,232,241,223,255,175,133,132,103,71,133,41,28,129,202,18,104,106,72,200,141,223,124,77,38,54,119,251,178,225,190,12,208,205,6,253,152,221,215,248,
    18,156,74,35,128,0,2,249,2,97,243,147,248,228,3,188,61,178,251,217,15,123,187,126,249,166,60,47,143,64,198,204,166,204,253,42,79,45,56,171,95,4,106,99,41,57,110,159,85,126,169,110,143,122,250,114,10,199,
    248,81,241,30,141,224,9,2,8,32,224,119,129,9,77,222,30,133,241,235,40,145,223,175,11,191,212,223,14,205,178,50,33,225,69,9,145,144,72,106,143,58,209,81,186,144,121,204,130,64,95,2,19,124,154,233,124,25,
    160,249,207,216,215,101,200,122,4,16,240,171,128,215,51,134,215,235,231,215,126,15,74,189,53,64,39,83,102,244,185,61,45,117,27,82,162,111,235,239,136,103,164,58,22,34,68,7,165,147,29,106,135,95,51,157,
    47,167,112,56,212,135,20,139,0,2,8,32,128,0,2,69,10,88,163,207,230,152,120,50,35,93,57,127,32,238,52,127,84,73,153,80,205,130,64,16,5,124,57,2,61,80,71,132,106,103,154,93,24,47,25,200,137,237,8,32,224,
    178,64,98,141,100,146,235,92,62,169,243,167,11,85,79,21,9,215,56,127,34,206,224,77,1,29,110,78,103,204,8,116,90,18,25,157,43,191,101,190,124,119,120,27,169,175,54,183,41,171,10,75,136,225,58,111,246,157,
    91,181,138,47,151,76,106,179,91,103,115,229,60,129,12,208,225,157,159,52,249,57,230,10,32,39,65,0,1,4,6,43,144,89,116,182,100,150,93,52,216,221,125,179,95,120,230,95,68,26,246,244,77,125,169,104,105,5,
    50,102,8,58,157,76,138,108,218,36,153,245,191,17,89,114,158,249,29,28,145,244,118,255,148,208,152,49,230,181,85,141,132,245,157,178,44,21,43,144,121,251,20,201,172,185,37,80,237,231,138,14,84,119,210,
    24,4,16,64,0,1,4,202,35,160,65,90,191,236,37,247,177,189,142,239,8,4,69,128,0,29,148,158,164,29,8,32,128,0,2,8,32,128,0,2,174,8,16,160,93,97,230,36,8,32,128,0,2,8,32,128,0,2,65,17,32,64,7,165,39,105,7,
    2,8,32,128,0,2,8,32,128,128,43,2,4,104,87,152,57,9,2,8,32,128,0,2,8,32,128,64,80,4,8,208,65,233,73,218,129,0,2,8,32,128,0,2,8,32,224,138,0,1,218,21,102,78,130,0,2,8,32,128,0,2,8,32,16,20,1,2,116,80,122,
    146,118,32,128,0,2,8,32,128,0,2,8,184,34,64,128,118,133,153,147,32,128,0,2,8,32,128,0,2,8,4,69,128,0,29,148,158,164,29,8,32,128,0,2,8,32,128,0,2,174,8,16,160,93,97,230,36,8,32,128,0,2,8,32,128,0,2,65,
    17,32,64,7,165,39,105,7,2,8,32,128,0,2,8,32,128,128,43,2,4,104,87,152,57,9,2,8,32,128,0,2,8,32,128,64,80,4,8,208,65,233,73,218,129,0,2,8,32,128,64,153,5,66,161,80,153,107,192,233,17,112,71,32,234,206,
    105,56,11,2,8,32,128,0,2,8,4,89,32,28,14,75,215,216,61,100,225,246,103,72,56,18,149,72,36,34,4,234,32,247,120,101,183,141,0,93,217,253,79,235,17,64,0,1,4,16,24,182,128,6,101,43,48,143,223,69,54,213,109,
    35,85,85,85,210,28,139,137,134,106,22,4,130,40,64,128,14,98,175,210,38,4,16,64,0,1,4,92,18,208,240,172,65,57,102,2,115,99,99,163,68,163,91,70,159,107,107,107,25,133,118,169,15,56,141,251,2,4,104,247,205,
    57,35,2,8,32,128,0,2,129,18,208,16,173,163,206,245,245,245,82,83,83,99,77,221,208,32,173,193,154,105,28,129,234,106,26,179,85,128,0,205,165,128,0,2,8,32,128,0,2,195,18,176,167,112,104,96,206,100,50,86,
    89,132,231,97,145,114,176,199,5,8,208,30,239,32,170,135,0,2,8,32,128,128,31,4,52,68,51,218,236,135,158,162,142,165,16,96,118,127,41,20,41,3,1,4,16,64,0,1,4,44,1,123,4,26,14,4,130,44,192,8,116,144,123,
    151,182,33,128,0,2,8,32,224,146,128,6,231,244,154,55,68,150,62,43,161,112,68,100,246,137,214,136,52,163,210,46,117,0,167,113,85,128,0,61,8,238,142,142,14,121,227,13,243,67,161,192,210,210,210,34,211,166,
    77,147,165,75,151,202,202,149,43,101,228,200,145,50,99,198,140,2,123,186,191,234,181,215,94,147,238,238,238,94,39,214,121,105,187,236,178,139,188,247,222,123,178,118,237,218,236,246,234,234,106,153,56,
    113,162,52,53,53,101,215,121,249,65,60,30,151,121,243,230,137,182,83,251,104,143,61,246,176,190,202,93,231,151,94,122,73,210,233,180,85,13,253,197,161,239,74,159,60,121,178,245,198,26,187,110,94,186,94,
    54,109,218,36,111,191,253,182,93,53,235,77,63,99,198,140,145,9,19,38,244,184,5,213,96,218,149,45,196,193,7,3,217,13,116,221,219,199,23,170,162,254,95,214,255,211,44,8,32,80,156,128,134,231,84,42,37,233,
    183,238,145,216,253,223,148,76,40,34,241,237,143,179,222,88,72,128,46,206,146,189,253,33,64,128,30,68,63,233,47,228,189,246,218,171,224,158,159,249,204,103,228,175,127,253,171,92,116,209,69,114,193,5,
    23,200,71,62,242,17,185,227,142,59,10,238,235,246,74,173,139,134,228,252,69,223,33,221,217,217,41,63,250,209,143,172,186,231,111,255,240,135,63,44,151,95,126,185,103,94,8,228,215,79,159,223,125,247,221,
    242,213,175,126,85,222,125,247,221,30,155,15,57,228,16,249,219,223,254,38,205,205,205,61,214,187,249,100,191,253,246,179,124,115,207,169,183,115,250,252,231,63,111,93,39,122,175,84,47,93,47,143,62,250,
    168,28,125,244,209,185,213,181,30,79,157,58,85,206,63,255,124,57,225,132,19,172,231,131,105,87,175,66,28,88,49,144,221,64,215,189,125,124,161,170,233,117,175,253,196,130,0,2,197,9,104,128,214,65,141,148,
    25,180,137,109,61,84,127,207,216,111,36,36,68,23,231,201,222,222,23,32,64,23,217,71,26,42,114,127,16,140,30,61,186,200,18,220,223,93,71,212,26,26,26,178,39,214,145,230,220,69,71,71,63,248,193,15,90,163,
    184,79,61,245,148,60,242,200,35,242,137,79,124,66,116,196,209,139,139,190,64,57,230,152,99,172,170,233,72,233,254,251,239,47,107,214,172,145,199,31,127,220,106,131,254,16,247,194,178,231,158,123,138,214,
    111,197,138,21,242,194,11,47,200,31,254,240,7,107,84,247,7,63,248,129,23,170,215,171,14,26,236,143,56,226,8,107,20,73,71,246,23,45,90,36,250,2,113,231,157,119,150,29,119,220,49,187,191,95,218,53,208,117,
    175,47,106,198,142,29,155,109,151,62,200,253,127,210,99,3,79,16,64,160,79,1,107,234,134,249,171,91,34,145,144,132,9,208,141,91,247,212,0,173,3,54,124,34,97,159,116,108,240,177,0,1,186,200,206,211,169,
    28,250,139,215,79,203,133,23,94,40,159,253,236,103,251,172,242,97,135,29,38,87,92,113,133,181,253,246,219,111,151,99,143,61,86,94,126,249,101,43,148,122,237,5,66,91,91,155,156,122,234,169,86,93,15,58,
    232,32,249,251,223,255,46,163,70,141,178,158,107,128,214,105,28,249,47,16,250,108,184,195,27,126,242,147,159,88,129,84,79,163,254,87,95,125,181,60,240,192,3,226,213,0,173,215,181,253,215,19,157,18,163,
    47,172,214,175,95,111,189,160,202,13,208,126,105,215,64,215,189,254,181,194,110,175,195,151,2,197,35,16,120,1,13,209,201,100,210,250,178,27,171,129,90,215,179,32,16,68,1,2,116,145,189,170,1,78,231,121,
    217,139,134,14,125,117,237,229,165,171,171,75,180,222,246,162,55,187,47,20,50,245,135,223,235,175,191,110,237,166,35,113,58,119,215,107,203,115,207,61,103,141,232,106,189,46,187,236,178,108,120,214,231,
    58,18,237,197,101,227,198,141,214,104,174,214,77,231,21,251,97,209,57,209,26,162,117,233,171,206,94,111,215,64,215,253,134,13,27,68,255,226,146,187,236,186,235,174,5,255,111,228,238,195,99,4,16,40,44,
    96,143,68,219,91,245,189,32,4,104,91,131,239,65,19,32,64,23,217,163,249,127,242,189,235,174,187,228,200,35,143,44,178,20,119,119,63,237,180,211,68,191,236,229,148,83,78,201,142,56,235,186,171,174,186,
    74,174,189,246,90,235,207,111,246,15,59,157,194,81,40,100,219,101,148,235,187,142,140,235,50,105,210,36,79,207,209,214,58,234,52,19,157,238,163,163,48,186,232,92,64,123,62,177,181,194,99,255,232,139,44,
    237,115,125,129,104,191,72,212,41,40,115,231,206,237,81,83,191,180,107,160,235,94,255,98,177,239,190,251,246,104,219,130,5,11,164,181,181,181,199,58,158,32,128,0,2,8,32,144,47,64,128,206,23,169,192,231,
    246,136,180,61,119,248,210,75,47,149,47,126,241,139,158,148,176,167,207,232,232,162,215,23,173,171,53,39,208,4,104,13,101,183,222,122,171,232,8,167,87,23,13,251,250,87,135,117,235,214,89,85,60,254,248,
    227,229,146,75,46,145,186,186,186,30,85,246,91,187,122,84,62,231,137,126,228,176,222,117,38,119,209,255,11,44,8,32,128,0,2,8,12,36,192,7,169,12,36,148,183,93,255,236,171,183,134,179,191,244,77,87,94,95,
    116,170,131,93,95,253,174,1,57,119,57,233,164,147,100,201,146,37,98,207,119,222,188,121,115,143,55,74,230,238,91,238,199,122,251,61,93,244,246,123,249,127,126,47,119,221,242,207,127,211,77,55,201,141,
    55,222,104,173,94,190,124,185,39,167,196,228,214,89,3,165,190,25,243,228,147,79,182,86,235,237,222,236,249,229,185,251,249,165,93,3,93,247,58,135,254,173,183,222,234,241,165,127,217,96,65,0,1,4,16,64,
    96,32,1,2,244,64,66,121,219,99,177,152,228,126,229,222,145,67,119,213,17,71,29,193,179,191,52,112,151,123,209,81,181,220,58,71,163,189,255,240,160,35,143,223,251,222,247,172,170,158,115,206,57,162,129,
    207,139,139,142,224,234,93,33,116,249,220,231,62,151,157,179,173,35,210,95,254,242,151,173,121,209,94,170,183,190,33,115,159,125,246,177,94,192,156,113,198,25,189,170,230,197,235,229,220,115,207,181,238,
    221,250,196,19,79,200,149,87,94,217,171,206,186,98,160,118,21,60,168,196,43,7,178,27,232,186,207,63,94,255,207,230,190,87,160,196,213,165,56,4,16,64,0,129,0,9,16,160,75,220,153,247,221,119,159,245,65,
    12,122,11,45,253,218,109,183,221,74,124,6,231,138,59,253,244,211,173,185,197,58,2,253,173,111,125,203,185,19,13,163,100,13,69,58,103,91,167,17,232,232,225,172,89,179,172,233,17,58,82,170,211,13,244,14,
    29,215,92,115,205,48,206,80,250,67,207,59,239,60,171,80,189,119,245,63,254,241,143,30,39,240,226,245,178,205,54,219,200,23,190,240,5,171,158,103,157,117,150,117,39,142,30,149,222,250,164,191,118,21,218,
    191,212,235,134,107,151,127,188,254,127,205,125,175,64,169,235,75,121,8,32,128,0,2,193,17,32,64,7,167,47,135,221,18,189,95,231,217,103,159,109,149,115,253,245,215,203,67,15,61,52,236,50,157,40,64,167,
    113,232,135,219,232,155,217,116,52,93,63,44,70,167,166,104,136,254,213,175,126,37,159,254,244,167,157,56,237,144,203,212,219,165,205,153,51,199,58,254,235,95,255,122,246,238,22,67,46,208,133,3,245,58,
    208,235,97,245,234,213,242,195,31,254,176,224,25,253,216,174,130,13,97,37,2,8,32,128,0,2,69,10,132,34,173,199,250,238,38,141,179,166,180,203,11,191,124,166,207,166,70,246,94,35,18,178,63,11,169,207,221,
    216,16,0,1,125,227,163,142,68,235,20,149,153,51,103,122,118,238,118,0,168,105,66,9,4,50,139,206,150,244,178,139,10,150,116,243,147,99,229,228,223,205,42,184,205,11,43,59,174,121,216,220,178,179,240,175,
    139,200,236,7,204,167,208,236,233,133,106,82,135,50,8,232,221,155,244,54,168,122,107,203,248,227,191,145,137,47,253,204,250,40,239,247,62,251,182,245,97,69,250,98,92,239,66,196,82,185,2,153,183,79,145,
    244,154,91,10,2,252,230,142,169,242,221,107,103,20,220,230,229,149,189,39,195,122,185,182,212,13,129,60,1,13,206,179,103,207,206,91,203,83,4,16,64,0,1,4,16,64,192,57,1,94,18,58,103,75,201,8,32,128,0,2,
    8,32,128,0,2,1,20,32,64,7,176,83,105,18,2,8,32,128,0,2,8,32,128,128,115,2,4,104,231,108,41,25,1,4,16,64,0,1,4,16,64,32,128,2,4,232,0,118,42,77,66,0,1,4,16,64,0,1,4,16,112,78,128,0,237,156,45,37,35,128,
    0,2,8,32,128,0,2,8,4,80,128,187,112,4,176,83,105,18,2,8,32,128,0,2,110,11,232,39,243,166,171,71,74,71,221,20,145,112,148,219,138,186,221,1,156,207,85,1,2,180,171,220,156,12,1,4,16,64,0,129,224,9,104,120,
    142,68,34,210,181,237,199,101,254,152,57,162,159,26,59,218,124,113,255,231,224,245,53,45,218,34,64,128,230,74,64,0,1,4,16,64,0,129,97,9,104,128,214,208,92,95,95,111,141,60,107,152,182,63,64,69,183,177,
    32,16,52,1,2,116,208,122,148,246,32,128,0,2,8,32,224,162,128,6,100,29,105,214,15,182,106,108,108,180,130,179,174,171,174,174,182,70,165,9,208,46,118,6,167,114,77,128,0,237,26,53,39,66,0,1,4,16,64,32,152,
    2,26,146,237,81,103,13,206,186,104,168,102,10,71,48,251,155,86,137,16,160,185,10,16,64,0,1,4,16,64,96,216,2,26,150,115,71,155,115,31,15,187,112,10,64,192,99,2,4,104,143,117,8,213,65,0,1,4,16,64,192,175,
    2,132,102,191,246,28,245,46,86,128,0,93,172,24,251,35,128,0,2,8,32,128,64,65,129,76,38,35,250,101,7,105,251,123,193,157,89,137,128,143,5,248,32,21,31,119,30,85,71,0,1,4,16,64,192,11,2,26,154,211,233,180,
    164,159,251,147,132,126,209,40,114,254,40,73,165,82,86,152,246,66,253,168,3,2,165,22,32,64,151,90,148,242,16,64,0,1,4,16,168,48,1,13,208,137,68,66,186,59,218,36,148,232,16,137,183,75,87,87,23,33,186,194,
    174,131,74,106,46,1,186,146,122,155,182,34,128,0,2,8,32,80,98,1,123,218,70,60,30,183,66,179,93,124,71,71,135,21,160,237,231,124,71,32,72,2,4,232,32,245,38,109,65,0,1,4,16,64,160,12,2,246,8,180,142,66,
    219,75,119,119,183,53,173,67,183,177,32,16,52,1,2,116,208,122,148,246,32,128,0,2,8,32,224,178,128,134,100,107,14,180,153,7,109,47,250,156,240,108,107,240,61,104,2,4,232,160,245,40,237,65,0,1,4,16,64,160,
    76,2,185,129,57,247,113,153,170,195,105,17,112,76,128,0,237,24,45,5,35,128,0,2,8,32,128,0,2,8,4,81,128,0,29,196,94,165,77,8,32,128,0,2,8,32,128,0,2,142,9,16,160,29,163,165,96,4,16,64,0,1,4,16,64,0,129,
    32,10,16,160,131,216,171,180,9,1,4,16,64,0,1,4,16,64,192,49,1,2,180,99,180,20,140,0,2,8,32,128,0,2,8,32,16,68,1,2,116,16,123,149,54,33,128,0,2,8,32,128,0,2,8,56,38,64,128,118,140,150,130,17,64,0,1,4,16,
    64,0,1,4,130,40,64,128,14,98,175,210,38,4,16,64,0,1,4,16,64,0,1,199,4,8,208,142,209,82,48,2,8,32,128,0,2,8,32,128,64,16,5,8,208,65,236,85,218,132,0,2,8,32,128,0,2,8,32,224,152,0,1,218,49,90,10,70,0,1,
    4,16,64,0,1,4,16,8,162,0,1,58,136,189,74,155,16,64,0,1,4,16,64,0,1,4,28,19,32,64,59,70,75,193,8,32,128,0,2,8,84,150,64,40,20,202,54,56,247,113,118,37,15,16,8,136,64,52,32,237,160,25,8,32,128,0,2,8,32,
    80,70,129,112,56,44,237,83,231,202,107,85,147,36,26,173,146,58,243,156,16,93,198,14,225,212,142,10,16,160,29,229,165,112,4,16,64,0,1,4,130,47,160,65,57,26,141,74,172,185,85,186,171,90,196,60,145,234,234,
    106,209,80,77,136,14,126,255,87,98,11,9,208,149,216,235,180,25,1,4,16,64,0,129,18,9,104,64,214,160,172,129,185,177,177,81,98,177,152,68,34,17,169,173,173,181,190,151,232,52,20,131,128,167,4,8,208,158,
    234,14,42,131,0,2,8,32,128,128,255,4,236,17,232,250,250,122,169,169,169,177,70,157,117,68,90,131,52,35,208,254,235,79,106,60,176,0,1,122,96,35,246,64,0,1,4,16,64,0,129,126,4,236,81,104,29,137,214,224,
    172,139,174,35,60,247,131,198,38,95,11,16,160,125,221,125,84,30,1,4,16,64,0,1,111,8,216,97,217,254,238,141,90,81,11,4,156,17,32,64,59,227,74,169,8,32,128,0,2,8,84,156,64,38,147,201,182,153,32,157,165,
    224,65,0,5,8,208,1,236,84,154,132,0,2,8,32,128,128,219,2,233,116,90,50,139,30,19,153,127,139,132,194,81,201,28,118,1,211,56,220,238,4,206,231,154,0,31,164,226,26,53,39,66,0,1,4,16,64,32,152,2,58,242,156,
    74,165,36,185,228,57,137,60,243,59,9,61,125,145,196,227,113,209,80,205,130,64,16,5,8,208,65,236,85,218,132,0,2,8,32,128,128,75,2,26,158,53,40,107,96,238,238,238,206,158,181,163,163,195,10,213,185,211,
    58,178,27,121,128,128,207,5,8,208,62,239,64,170,143,0,2,8,32,128,64,185,5,52,36,39,18,137,30,1,186,171,171,203,10,214,4,232,114,247,14,231,119,66,128,0,237,132,42,101,34,128,0,2,8,32,80,65,2,26,146,173,
    41,28,201,100,182,213,73,243,152,41,28,89,14,30,4,76,128,0,29,176,14,165,57,8,32,128,0,2,8,148,67,64,67,116,238,104,51,225,185,28,189,192,57,221,18,32,64,187,37,205,121,16,64,0,1,4,16,64,0,1,4,2,33,64,
    128,14,68,55,210,8,4,16,64,0,1,4,16,64,0,1,183,4,8,208,110,73,115,30,4,16,64,0,1,4,16,64,0,129,64,8,16,160,3,209,141,52,2,1,4,16,64,0,1,4,16,64,192,45,1,2,180,91,210,156,7,1,4,16,64,0,1,4,16,64,32,16,
    2,4,232,64,116,35,141,64,0,1,4,16,64,0,1,4,16,112,75,128,0,237,150,52,231,65,0,1,4,16,64,0,1,4,16,8,132,0,1,58,16,221,72,35,16,64,0,1,4,16,64,0,1,4,220,18,32,64,187,37,205,121,16,64,0,1,4,16,64,0,1,4,
    2,33,64,128,14,68,55,210,8,4,16,64,0,1,4,16,64,0,1,183,4,8,208,110,73,115,30,4,16,64,0,1,4,16,64,0,129,64,8,16,160,3,209,141,52,2,1,4,16,64,0,1,4,16,64,192,45,1,2,180,91,210,156,7,1,4,16,64,0,1,4,16,64,
    32,16,2,209,64,180,130,70,32,128,0,2,8,32,128,64,89,5,66,161,144,36,71,110,35,171,39,204,149,80,56,34,225,112,88,116,29,11,2,65,20,32,64,7,177,87,105,19,2,8,32,128,0,2,46,10,104,80,142,68,34,146,156,122,
    176,44,25,185,155,84,85,85,73,139,249,34,64,187,216,9,156,202,85,1,2,180,171,220,156,12,1,4,16,64,0,129,96,9,104,72,214,175,88,44,38,13,13,13,214,200,179,134,233,218,218,90,43,84,19,162,131,213,223,180,
    102,139,0,1,154,43,1,1,4,16,64,0,1,4,134,37,160,211,53,236,0,93,83,83,147,13,212,26,164,9,208,195,162,229,96,143,10,16,160,61,218,49,84,11,1,4,16,64,0,1,191,8,104,72,214,176,92,93,93,109,5,105,173,55,
    115,160,253,210,123,212,115,40,2,4,232,161,168,113,12,2,8,32,128,0,2,8,244,16,176,67,116,38,147,177,214,51,242,220,131,135,39,1,19,32,64,7,172,67,105,14,2,8,32,128,0,2,229,20,32,56,151,83,159,115,187,
    37,64,128,118,75,154,243,32,128,0,2,8,32,16,96,1,29,121,206,116,173,151,204,230,21,214,188,231,208,232,29,152,255,28,224,254,174,244,166,241,65,42,149,126,5,208,126,4,16,64,0,1,4,134,41,160,225,57,157,
    78,75,234,197,191,74,228,226,89,18,186,120,39,73,38,147,214,186,97,22,205,225,8,120,82,128,0,237,201,110,161,82,8,32,128,0,2,8,248,71,64,3,116,34,145,144,238,238,238,108,165,187,186,186,172,0,109,207,
    137,206,110,224,1,2,1,16,32,64,7,160,19,105,2,2,8,32,128,0,2,229,18,176,71,159,227,241,120,143,0,221,209,209,33,169,84,170,92,213,226,188,8,56,42,64,128,118,148,151,194,17,64,0,1,4,16,8,190,128,134,104,
    157,178,161,163,208,246,162,129,90,167,117,48,2,109,139,240,61,72,2,4,232,32,245,38,109,65,0,1,4,16,64,160,76,2,249,97,89,71,159,9,207,101,234,12,78,235,184,0,1,218,113,98,78,128,0,2,8,32,128,64,101,8,
    16,152,43,163,159,105,165,249,160,32,16,16,64,0,1,4,16,64,0,1,4,16,64,96,240,2,4,232,193,91,177,39,2,8,32,128,0,2,8,32,128,0,2,140,64,115,13,32,128,0,2,8,32,128,0,2,8,32,80,140,0,35,208,197,104,177,47,
    2,8,32,128,0,2,8,32,128,64,197,11,240,81,222,21,127,9,0,128,0,2,8,32,128,0,2,8,120,79,224,184,163,246,151,111,124,241,163,50,126,76,147,212,215,213,200,230,246,78,89,176,120,165,220,124,231,227,114,217,
    13,247,149,245,147,46,9,208,222,187,94,168,17,2,8,32,128,0,2,8,32,80,241,2,219,207,152,36,123,239,186,125,214,97,116,243,8,153,62,101,156,28,178,223,206,114,192,94,59,202,103,190,126,97,118,155,219,15,
    152,194,225,182,56,231,67,0,1,4,16,64,0,1,4,16,24,180,192,155,239,44,145,237,62,124,154,204,61,249,108,121,232,201,87,172,227,78,252,232,135,101,194,216,230,65,151,81,234,29,25,129,46,181,40,229,33,128,
    0,2,8,32,128,0,2,8,148,76,160,179,59,46,239,46,90,97,125,117,153,199,7,223,188,179,85,246,54,83,199,201,242,85,235,74,118,158,98,10,98,4,186,24,45,246,69,0,1,4,16,64,0,1,4,16,40,155,192,206,31,152,110,
    157,187,163,179,91,158,125,229,63,101,171,7,35,208,101,163,231,196,8,32,128,128,187,2,15,92,127,158,132,195,33,249,225,5,87,203,227,207,205,31,242,201,51,153,158,135,90,159,62,151,191,210,236,18,10,133,
    122,238,152,243,108,176,159,88,87,9,101,12,214,66,249,250,242,24,108,25,125,29,175,101,151,166,12,45,199,124,109,45,79,203,180,191,244,28,246,226,100,61,6,219,14,173,75,95,245,24,108,25,125,29,175,101,
    7,165,140,193,182,163,127,207,45,215,133,238,163,75,63,63,26,182,236,144,247,111,203,168,70,57,229,147,135,202,238,59,109,43,199,127,100,127,107,235,157,15,60,43,241,120,50,111,79,247,158,18,160,221,179,
    230,76,8,32,128,64,89,5,244,77,55,225,112,88,90,154,26,135,92,143,116,218,28,186,41,37,161,101,9,43,36,105,65,169,85,191,22,169,26,215,163,76,43,88,236,125,166,132,155,166,247,10,41,105,83,72,102,254,
    173,34,139,30,237,55,100,88,101,28,246,75,9,71,98,61,202,208,95,232,214,215,211,191,19,217,176,160,255,50,26,198,75,232,67,223,181,142,207,13,59,217,50,238,63,75,50,201,238,30,117,207,125,98,29,51,97,
    119,9,237,252,233,130,101,164,219,86,138,60,246,243,254,235,160,105,97,251,99,37,212,122,176,229,159,91,190,214,35,189,236,121,145,87,174,30,184,140,61,79,151,112,203,118,61,44,180,44,203,243,173,219,
    69,22,60,56,112,25,135,152,23,81,177,250,30,101,100,45,158,187,88,100,237,91,253,151,81,215,34,161,3,207,46,108,97,250,181,97,249,195,146,178,94,96,165,101,228,211,231,74,164,174,78,210,145,136,100,182,
    38,38,203,115,220,206,18,218,229,148,194,101,116,154,63,199,63,242,147,254,235,160,101,109,123,164,132,102,204,45,236,185,210,204,145,125,241,138,129,203,216,237,84,9,143,157,213,195,34,235,249,246,61,
    34,239,220,59,112,25,7,157,35,225,154,81,61,202,200,122,190,112,153,200,234,215,250,47,163,122,132,132,14,254,73,65,11,171,156,71,206,149,76,231,250,220,75,166,199,99,203,115,244,7,36,180,251,151,10,150,
    145,238,222,44,242,208,217,253,215,65,61,183,57,84,66,51,63,82,216,115,181,121,177,253,252,37,3,151,177,203,127,75,120,252,46,61,44,108,207,244,138,165,34,255,233,218,82,247,72,72,210,51,171,205,126,131,
    15,210,83,38,142,145,63,159,255,53,235,120,189,222,207,191,248,102,249,241,133,215,245,176,112,251,9,1,218,109,113,206,135,0,2,8,248,84,64,71,22,83,38,64,103,214,167,164,118,113,226,253,86,44,190,233,
    253,199,57,143,186,102,254,151,68,71,76,149,136,9,80,118,120,213,95,126,201,164,25,53,122,231,126,137,189,120,73,206,222,133,31,118,30,112,142,196,106,163,86,25,246,30,26,44,18,137,132,68,94,189,65,162,
    203,158,182,87,23,252,158,106,222,78,226,123,125,83,98,177,158,33,92,235,161,101,84,63,251,7,9,37,59,11,30,107,175,76,236,112,188,100,118,60,65,162,209,104,182,29,90,135,84,42,37,137,77,43,165,246,25,
    19,228,7,88,186,107,199,73,120,202,129,214,94,250,34,70,23,45,67,45,82,43,94,149,154,65,148,209,217,58,87,170,70,205,40,232,153,121,231,33,169,126,110,224,122,116,238,251,93,137,69,107,173,160,100,247,
    73,214,243,181,155,37,186,232,97,171,110,125,253,147,106,156,34,241,125,206,234,211,179,101,237,11,18,177,154,151,145,230,55,175,42,88,76,98,219,163,37,61,235,211,82,85,85,213,195,211,234,147,182,117,
    131,178,232,174,26,33,225,214,57,86,249,185,158,218,39,201,149,111,12,170,140,174,201,7,74,180,101,135,130,158,242,222,99,18,27,76,159,236,113,166,177,48,117,49,125,154,239,25,158,255,119,169,122,215,
    4,241,126,150,116,221,24,137,239,255,195,94,158,218,39,241,120,92,98,38,132,71,218,150,245,83,130,72,178,245,80,73,238,124,74,65,207,120,199,198,193,93,159,98,250,98,250,225,214,53,222,203,115,205,219,
    131,243,28,191,167,68,70,207,238,241,255,68,251,84,251,36,189,114,181,84,111,253,153,145,142,136,116,78,175,150,42,147,64,77,150,30,212,242,214,187,75,229,59,63,251,139,252,238,220,211,100,202,196,209,
    214,49,201,100,106,80,199,58,181,19,1,218,41,89,202,69,0,1,4,2,38,96,126,167,75,34,105,194,107,58,36,225,234,144,100,116,52,90,23,29,125,14,87,111,121,108,254,213,32,161,95,157,38,39,215,154,128,104,135,
    11,13,5,118,48,72,71,70,138,140,152,222,231,125,92,237,50,244,13,67,145,88,170,71,25,250,75,185,187,187,91,34,53,227,37,213,216,218,231,200,152,150,145,174,155,36,113,221,119,107,136,215,117,90,7,45,163,
    171,171,75,66,230,120,49,1,90,215,21,90,116,255,120,85,179,152,19,102,235,96,151,161,193,160,43,145,150,136,105,135,221,182,66,101,104,251,187,66,117,18,53,129,168,166,166,198,218,215,46,67,3,116,119,
    38,38,225,126,202,208,125,245,171,43,101,66,90,95,158,81,51,146,57,8,207,206,46,99,81,183,197,83,235,106,91,108,241,28,55,176,103,195,196,126,61,59,77,191,86,197,187,172,191,78,36,235,39,101,221,109,23,
    109,71,34,54,90,50,198,34,191,79,212,162,163,43,222,175,133,150,179,197,179,190,160,167,190,40,234,74,69,250,45,35,235,153,142,74,181,217,63,255,250,212,50,82,225,134,193,93,159,102,10,65,196,92,7,118,
    153,182,167,134,223,80,245,24,73,15,112,125,102,106,91,172,235,48,223,194,186,182,204,245,41,13,83,76,217,177,126,175,207,132,158,39,239,26,87,39,171,140,110,243,66,179,159,107,43,235,25,105,148,168,105,
    183,214,67,219,160,237,209,239,150,103,50,60,72,207,42,169,54,125,104,183,69,143,215,47,181,72,100,76,220,52,63,51,172,11,35,106,174,229,120,198,188,208,50,63,71,6,25,160,59,204,117,123,135,153,178,81,
    83,19,147,27,254,239,59,114,214,87,142,147,251,30,121,81,30,121,250,85,109,66,89,22,2,116,89,216,57,41,2,8,32,224,47,1,243,123,208,36,99,51,93,192,124,223,212,16,149,69,147,35,210,214,169,163,176,102,
    245,244,115,77,82,222,193,106,144,254,226,213,145,218,198,198,70,105,25,217,34,213,38,168,230,46,250,11,85,127,177,175,159,245,21,89,63,241,4,233,236,236,180,158,235,122,123,209,50,116,116,114,228,200,
    145,210,146,218,242,139,220,222,166,223,117,95,13,91,171,246,253,149,108,216,176,193,10,32,26,136,115,23,13,69,213,213,213,91,202,48,251,230,150,111,151,161,225,96,197,220,91,101,227,198,141,214,47,249,
    252,125,52,8,212,214,214,202,168,81,163,164,217,212,57,127,187,21,228,107,38,200,178,185,183,203,230,205,155,173,176,145,187,143,182,67,203,168,175,175,151,166,166,38,105,50,117,204,221,174,143,213,162,
    109,252,129,178,104,206,63,164,189,189,221,106,87,238,62,182,103,67,67,131,180,52,111,241,204,221,110,151,177,126,251,207,203,250,177,31,235,215,115,196,136,17,50,58,108,166,84,108,173,135,150,109,91,
    104,61,86,237,249,83,203,66,251,164,47,79,171,140,2,158,90,142,30,243,216,46,151,203,202,101,139,77,59,69,26,155,198,136,238,175,125,169,253,161,22,250,2,194,178,40,80,134,30,31,143,181,200,127,6,240,
    172,51,211,66,172,50,242,250,68,45,180,140,142,113,251,202,226,65,120,54,55,55,75,213,86,11,11,194,252,147,245,220,246,100,89,223,114,148,116,116,116,244,121,125,106,219,90,162,35,165,214,148,145,187,
    104,25,122,125,174,219,253,199,178,97,198,150,235,83,125,115,23,245,208,191,138,88,215,120,1,11,187,140,247,14,186,42,123,125,22,234,147,190,174,79,219,34,30,174,151,229,135,223,33,155,54,109,234,243,
    250,212,50,212,162,169,15,207,206,209,187,201,146,67,111,147,182,182,182,62,175,79,189,198,181,140,104,31,101,108,28,55,93,22,118,207,183,94,128,215,215,133,164,197,188,184,214,107,164,216,69,63,64,229,
    223,159,121,85,14,220,123,182,252,238,39,167,201,110,71,157,105,250,167,167,127,177,101,14,117,127,2,244,80,229,56,14,1,4,16,168,64,1,29,49,210,63,189,86,199,244,23,96,200,76,233,48,163,85,117,181,34,
    117,245,150,134,29,248,52,40,105,144,214,160,144,191,104,144,210,80,165,191,184,117,127,13,6,250,11,223,94,116,157,110,215,0,156,59,109,34,119,187,174,215,0,162,97,74,203,43,20,46,116,251,64,101,232,118,
    45,67,207,151,91,7,61,111,93,247,244,0,0,22,54,73,68,65,84,151,150,171,219,181,28,125,108,7,78,187,30,218,54,173,135,182,85,3,146,134,166,220,50,116,127,61,78,183,219,33,50,183,12,123,187,109,161,199,
    106,57,253,149,161,199,228,150,97,215,83,235,216,159,167,93,79,253,174,245,206,45,195,174,135,182,85,203,208,237,133,60,237,62,233,203,66,143,29,213,212,98,66,210,150,254,212,80,101,219,230,158,163,63,
    79,61,71,127,158,90,55,61,79,161,50,244,28,186,189,24,207,190,44,108,79,245,45,116,125,170,99,127,215,150,26,105,25,246,245,89,40,64,219,158,90,86,110,127,232,57,245,185,125,14,219,176,80,159,244,117,
    125,230,90,168,167,94,155,133,174,79,109,127,127,215,167,237,169,251,232,249,251,186,62,181,79,180,61,249,215,198,251,245,48,47,104,205,207,140,168,25,125,174,174,210,255,91,218,70,109,105,241,203,55,
    206,189,76,158,189,227,66,153,181,221,84,57,227,148,99,228,55,151,221,86,124,33,37,56,130,0,93,2,68,138,64,0,1,4,130,46,160,191,236,182,132,231,144,52,212,101,36,106,38,47,38,116,20,201,12,75,71,198,183,
    136,212,79,200,18,228,254,210,205,13,7,246,47,83,13,22,58,66,173,223,243,127,169,219,133,104,25,118,136,201,253,165,156,91,134,142,222,217,97,43,55,116,218,101,232,185,181,12,13,25,90,158,30,171,139,93,
    134,30,171,163,203,26,80,242,3,142,189,159,29,98,180,156,252,50,180,94,122,172,174,215,176,152,31,112,236,50,236,160,164,223,245,220,185,245,208,242,245,88,253,174,38,133,202,208,242,245,88,59,232,228,
    30,175,219,180,110,122,172,238,51,88,79,173,155,46,182,133,26,233,136,170,126,207,15,73,91,246,124,255,5,133,214,35,215,66,31,171,133,142,146,79,156,56,209,26,85,213,254,176,195,157,189,175,158,75,247,
    211,245,250,101,175,183,235,161,219,52,136,233,126,195,241,180,67,235,64,158,90,7,117,207,245,212,199,234,168,109,209,239,250,87,138,66,215,150,214,93,221,213,34,191,12,221,166,101,15,198,115,48,215,167,
    154,244,117,125,246,229,169,166,186,45,247,26,47,116,109,105,123,181,254,186,159,214,69,159,231,122,232,54,251,26,31,150,103,157,121,31,195,8,243,98,217,188,78,214,23,224,53,49,125,177,51,180,16,253,242,
    252,5,114,217,245,247,201,151,78,62,66,126,116,230,9,114,253,109,255,150,21,171,251,126,163,165,125,253,150,250,59,1,186,212,162,148,135,0,2,8,4,84,192,252,110,181,222,32,166,191,252,98,230,183,135,254,
    50,212,37,210,100,230,51,55,152,121,194,57,139,134,8,253,5,158,27,146,116,179,253,11,91,127,41,235,47,237,66,191,212,237,253,244,88,251,43,167,104,171,12,253,101,111,7,132,66,1,39,183,12,221,207,14,5,
    118,57,90,174,150,161,1,65,235,80,108,25,90,158,150,107,135,48,61,190,175,50,236,54,216,223,237,58,216,101,216,225,165,47,11,221,95,143,237,207,83,183,107,93,250,42,67,207,101,159,79,247,213,199,246,162,
    143,53,44,234,122,173,75,95,237,208,253,116,31,251,203,62,94,191,107,221,52,244,170,169,78,175,208,50,250,170,175,30,175,219,242,235,160,235,220,244,44,84,15,93,167,215,132,126,47,167,167,158,95,251,68,
    77,52,64,15,212,39,133,60,237,54,104,123,244,248,190,202,208,253,236,175,252,62,177,45,180,46,125,93,91,218,255,246,241,250,61,183,12,125,174,101,212,214,152,191,58,213,155,233,88,186,175,190,24,55,225,
    121,48,243,159,207,251,253,77,162,95,249,203,233,63,188,88,244,171,156,11,1,186,156,250,156,27,1,4,16,240,153,128,254,226,11,153,223,130,91,238,180,176,165,242,17,253,155,172,9,111,133,150,220,95,166,
    186,93,159,219,95,250,75,127,160,37,255,248,252,50,6,58,222,222,63,127,63,45,87,207,175,191,224,7,179,244,85,15,59,56,12,181,12,59,112,12,198,66,207,145,95,15,125,110,127,13,166,140,252,227,237,50,237,
    50,134,211,14,109,75,126,29,10,157,207,62,103,254,185,116,223,114,123,106,157,138,233,147,66,237,179,45,11,109,203,111,179,62,47,180,159,174,43,197,245,89,138,50,74,209,39,154,152,67,57,137,211,52,207,
    247,75,78,115,124,223,22,26,128,0,2,8,32,48,8,129,26,19,118,235,235,106,122,236,217,29,79,152,63,255,247,124,163,83,143,29,114,158,228,255,242,179,2,64,254,202,156,253,11,61,44,20,26,10,237,215,223,58,
    47,148,225,133,58,168,145,87,234,161,97,107,56,139,87,218,65,61,222,239,197,210,88,232,53,250,126,153,65,120,68,128,14,66,47,210,6,4,16,64,160,8,129,235,126,255,191,189,246,214,123,172,94,248,231,127,
    244,90,207,10,4,138,17,200,159,38,80,138,240,85,204,249,217,23,1,183,4,134,247,82,209,173,90,114,30,4,16,64,0,1,4,16,240,172,128,6,103,157,35,155,126,253,22,201,252,229,64,201,92,117,112,191,115,203,61,
    219,16,42,134,192,32,5,24,129,30,36,20,187,33,128,0,2,126,23,136,205,248,152,223,155,64,253,61,42,160,1,90,239,0,146,90,187,208,124,74,229,99,230,163,187,35,210,101,62,220,67,223,136,103,207,41,246,104,
    213,169,22,2,67,18,96,4,122,72,108,28,132,0,2,8,32,128,0,2,42,160,225,89,191,244,19,231,244,19,13,237,197,254,144,28,251,57,223,17,8,146,0,1,58,72,189,73,91,16,64,0,1,4,16,40,131,128,6,104,189,103,114,
    110,128,214,143,74,239,235,158,210,101,168,34,167,68,160,164,2,4,232,146,114,82,24,2,8,32,128,0,2,149,39,160,1,218,154,3,109,230,65,219,75,95,31,234,98,111,231,59,2,126,22,32,64,251,185,247,168,59,2,8,
    32,128,0,2,30,17,176,167,114,216,213,209,231,44,8,4,85,128,0,29,212,158,165,93,8,32,128,0,2,8,32,128,0,2,142,8,16,160,29,97,165,80,4,16,64,0,1,4,16,64,0,129,160,10,16,160,131,218,179,180,11,1,4,16,64,
    0,1,4,16,64,192,17,1,2,180,35,172,20,138,0,2,8,32,128,0,2,8,32,16,84,1,2,116,80,123,150,118,33,128,0,2,8,32,128,0,2,8,56,34,64,128,118,132,149,66,17,64,0,1,4,16,64,0,1,4,130,42,64,128,14,106,207,210,46,
    4,16,64,0,1,4,16,64,0,1,71,4,8,208,142,176,82,40,2,8,32,128,0,2,8,32,128,64,80,5,8,208,65,237,89,218,133,0,2,8,32,128,0,2,8,32,224,136,0,1,218,17,86,10,69,0,1,4,16,64,0,1,4,16,8,170,0,1,58,168,61,75,187,
    16,64,0,1,4,16,64,0,1,4,28,17,32,64,59,194,74,161,8,32,128,0,2,8,32,128,0,2,65,21,32,64,7,181,103,105,23,2,8,32,128,0,2,46,11,132,66,33,151,207,200,233,16,40,143,64,180,60,167,229,172,8,32,128,0,2,8,32,
    16,36,129,112,56,44,93,99,247,144,133,219,159,33,225,72,84,34,145,136,16,168,131,212,195,180,37,87,128,0,157,171,193,99,4,16,64,0,1,4,16,40,90,64,131,178,21,152,199,239,34,155,234,182,145,170,170,42,105,
    142,197,68,67,53,11,2,65,20,32,64,7,177,87,105,19,2,8,32,128,0,2,46,9,104,120,214,160,28,51,129,185,177,177,81,162,209,45,163,207,181,181,181,140,66,187,212,7,156,198,125,1,2,180,251,230,156,17,1,4,16,
    64,0,129,64,9,104,136,214,81,231,250,250,122,169,169,169,177,166,110,104,144,214,96,205,52,142,64,117,53,141,217,42,64,128,230,82,64,0,1,4,16,64,0,129,97,9,216,83,56,52,48,103,50,25,171,44,194,243,176,
    72,57,216,227,2,4,104,143,119,16,213,67,0,1,4,16,64,192,15,2,26,162,25,109,246,67,79,81,199,82,8,48,187,191,20,138,148,129,0,2,8,32,128,0,2,150,128,61,2,13,7,2,65,22,96,4,58,200,189,75,219,16,64,0,1,4,
    16,112,73,64,131,115,122,205,27,34,75,159,149,80,56,34,50,251,68,107,68,154,81,105,151,58,128,211,184,42,64,128,118,149,155,147,33,128,0,2,8,32,16,60,1,13,207,169,84,74,210,111,221,35,177,251,191,41,153,
    80,68,226,219,31,103,189,177,144,0,29,188,254,166,69,34,76,225,224,42,64,0,1,4,16,64,0,129,97,9,104,128,142,199,227,210,221,221,157,45,167,179,179,211,10,213,76,233,200,146,240,32,64,2,4,232,0,117,38,
    77,65,0,1,4,16,64,192,109,1,107,234,70,58,45,137,68,130,0,237,54,62,231,43,155,0,1,186,108,244,156,24,1,4,16,64,0,129,96,8,104,136,78,38,147,214,151,221,34,13,212,140,62,219,26,124,15,154,0,1,58,104,61,
    74,123,16,64,0,1,4,16,40,131,128,61,18,109,159,58,109,70,165,9,208,182,6,223,131,38,64,128,14,90,143,210,30,4,16,64,0,1,4,16,64,0,1,71,5,8,208,142,242,82,56,2,8,32,128,0,2,8,32,128,64,208,4,8,208,65,235,
    81,218,131,0,2,8,32,128,0,2,8,32,224,168,0,1,218,81,94,10,71,0,1,4,16,64,0,1,4,16,8,154,0,1,58,104,61,74,123,16,64,0,1,4,16,64,0,1,4,28,21,32,64,59,202,75,225,8,32,128,0,2,8,32,128,0,2,65,19,32,64,7,173,
    71,105,15,2,8,32,128,0,2,8,32,128,128,163,2,4,104,71,121,41,28,1,4,16,64,0,1,4,16,64,32,104,2,4,232,160,245,40,237,65,0,1,4,16,64,0,1,4,16,112,84,128,0,237,40,47,133,35,128,0,2,8,32,128,0,2,8,4,77,128,
    0,29,180,30,165,61,8,32,128,0,2,8,32,128,0,2,142,10,16,160,29,229,165,112,4,16,64,0,1,4,16,64,0,129,160,9,16,160,131,214,163,180,7,1,4,16,64,0,1,4,16,64,192,81,129,168,163,165,83,56,2,8,32,128,0,2,8,84,
    132,64,40,20,146,116,245,72,233,168,155,34,18,142,138,62,103,65,32,168,2,4,232,160,246,44,237,66,0,1,4,16,64,192,37,1,13,203,145,72,68,186,182,253,184,204,31,51,71,170,170,170,100,180,249,10,135,249,67,
    183,75,93,192,105,92,22,32,64,187,12,206,233,16,64,0,1,4,16,8,154,128,6,104,13,205,245,245,245,214,200,179,134,233,154,154,26,43,64,51,18,29,180,222,166,61,42,64,128,230,58,64,0,1,4,16,64,0,129,33,11,
    104,64,214,145,230,88,44,38,141,141,141,86,112,214,117,213,213,213,214,168,52,1,122,200,180,28,232,97,1,2,180,135,59,135,170,33,128,0,2,8,32,224,7,1,13,201,246,168,179,6,103,93,52,84,51,133,195,15,189,
    71,29,135,34,64,128,30,138,26,199,32,128,0,2,8,32,128,64,15,1,13,203,185,163,205,185,143,123,236,200,19,4,2,32,64,128,14,64,39,210,4,4,16,64,0,1,4,188,32,64,104,246,66,47,80,7,55,4,8,208,110,40,115,14,
    4,16,64,0,1,4,42,64,32,147,201,136,126,217,65,218,254,94,1,77,167,137,21,38,192,253,101,42,172,195,105,46,2,8,32,128,0,2,165,22,208,208,156,78,167,37,253,220,159,36,244,139,70,145,243,71,73,42,149,178,
    194,116,169,207,69,121,8,120,65,128,0,237,133,94,160,14,8,32,128,0,2,8,248,88,64,3,116,34,145,144,238,142,54,9,37,58,68,226,237,210,213,213,69,136,246,113,159,82,245,254,5,8,208,253,251,176,21,1,4,16,
    64,0,1,4,250,17,176,167,109,196,227,113,43,52,219,187,118,116,116,88,1,218,126,206,119,4,130,36,64,128,14,82,111,210,22,4,16,64,0,1,4,202,32,96,143,64,235,40,180,189,116,119,119,91,211,58,116,27,11,2,
    65,19,32,64,7,173,71,105,15,2,8,32,128,0,2,46,11,104,72,182,230,64,155,121,208,246,162,207,9,207,182,6,223,131,38,64,128,14,90,143,210,30,4,16,64,0,1,4,202,36,144,27,152,115,31,151,169,58,156,22,1,199,
    4,8,208,142,209,82,48,2,8,32,128,0,2,8,32,128,64,16,5,8,208,65,236,85,218,132,0,2,8,32,128,0,2,8,32,224,152,0,1,218,49,90,10,70,0,1,4,16,64,0,1,4,16,8,162,0,1,58,136,189,74,155,16,64,0,1,4,16,64,0,1,4,
    28,19,32,64,59,70,75,193,8,32,128,0,2,8,32,128,0,2,65,20,32,64,7,177,87,105,19,2,8,32,128,0,2,8,32,128,128,99,2,4,104,199,104,41,24,1,4,16,64,0,1,4,16,64,32,136,2,4,232,32,246,42,109,66,0,1,4,16,64,0,
    1,4,16,112,76,128,0,237,24,45,5,35,128,0,2,8,32,128,0,2,8,4,81,128,0,29,196,94,165,77,8,32,128,0,2,8,32,128,0,2,142,9,16,160,29,163,165,96,4,16,64,0,1,4,16,64,0,129,32,10,16,160,131,216,171,180,9,1,4,
    16,64,0,1,4,16,64,192,49,1,2,180,99,180,20,140,0,2,8,32,128,64,101,9,132,66,161,108,131,115,31,103,87,242,0,129,128,8,68,3,210,14,154,129,0,2,8,32,128,0,2,101,20,8,135,195,210,62,117,174,188,86,53,73,
    162,209,42,169,51,207,9,209,101,236,16,78,237,168,0,1,218,81,94,10,71,0,1,4,16,64,32,248,2,26,148,163,209,168,196,154,91,165,187,170,69,204,19,169,174,174,22,13,213,132,232,224,247,127,37,182,144,0,93,
    137,189,78,155,17,64,0,1,4,16,40,145,128,6,100,13,202,26,152,27,27,27,37,22,139,73,36,18,145,218,218,90,235,123,137,78,67,49,8,120,74,128,0,237,169,238,160,50,8,32,128,0,2,8,248,79,192,30,129,174,175,
    175,151,154,154,26,107,212,89,71,164,53,72,51,2,237,191,254,164,198,3,11,16,160,7,54,98,15,4,16,64,0,1,4,16,232,71,192,30,133,214,145,104,13,206,186,232,58,194,115,63,104,108,242,181,0,1,218,215,221,71,
    229,17,64,0,1,4,16,240,134,128,29,150,237,239,222,168,21,181,64,192,25,1,2,180,51,174,148,138,0,2,8,32,128,64,197,9,100,50,153,108,155,9,210,89,10,30,4,80,128,0,29,192,78,165,73,8,32,128,0,2,8,184,45,
    144,78,167,37,179,232,49,145,249,183,72,40,28,149,204,97,23,48,141,195,237,78,224,124,174,9,240,65,42,174,81,115,34,4,16,64,0,1,4,130,41,160,35,207,169,84,74,146,75,158,147,200,51,191,147,208,211,23,73,
    60,30,23,13,213,44,8,4,81,128,0,29,196,94,165,77,8,32,128,0,2,8,184,36,160,225,89,131,178,6,230,238,238,238,236,89,59,58,58,172,80,157,59,173,35,187,145,7,8,248,92,128,0,237,243,14,164,250,8,32,128,0,
    2,8,148,91,64,67,114,34,145,232,17,160,187,186,186,172,96,77,128,46,119,239,112,126,39,4,8,208,78,168,82,38,2,8,32,128,0,2,21,36,160,33,217,154,194,145,76,102,91,157,52,143,153,194,145,229,224,65,192,
    4,8,208,1,235,80,154,131,0,2,8,32,128,64,57,4,52,68,231,142,54,19,158,203,209,11,156,211,45,1,2,180,91,210,156,7,1,4,16,64,0,1,4,16,64,32,16,2,4,232,64,116,35,141,64,0,1,4,16,64,0,1,4,16,112,75,128,0,
    237,150,52,231,65,0,1,4,16,64,0,1,4,16,8,132,0,1,58,16,221,72,35,16,64,0,1,4,16,64,0,1,4,220,18,32,64,187,37,205,121,16,64,0,1,4,16,64,0,1,4,2,33,64,128,14,68,55,210,8,4,16,64,0,1,4,16,64,0,1,183,4,8,
    208,110,73,115,30,4,16,64,0,1,4,16,64,0,129,64,8,16,160,3,209,141,52,2,1,4,16,64,0,1,4,16,64,192,45,1,2,180,91,210,156,7,1,4,16,64,0,1,4,16,64,32,16,2,4,232,64,116,35,141,64,0,1,4,16,64,0,1,4,16,112,75,
    128,0,237,150,52,231,65,0,1,4,16,64,0,1,4,16,8,132,0,1,58,16,221,72,35,16,64,0,1,4,16,64,0,1,4,220,18,32,64,187,37,205,121,16,64,0,1,4,16,64,0,1,4,2,33,16,13,68,43,104,4,2,8,32,128,0,2,8,148,85,32,20,
    10,73,114,228,54,178,122,194,92,9,133,35,18,14,135,69,215,177,32,16,68,1,2,116,16,123,149,54,33,128,0,2,8,32,224,162,128,6,229,72,36,34,201,169,7,203,146,145,187,73,85,85,149,180,152,47,2,180,139,157,
    192,169,92,21,32,64,187,202,205,201,16,64,0,1,4,16,8,150,128,134,100,253,138,197,98,210,208,208,96,141,60,107,152,174,173,173,181,66,53,33,58,88,253,77,107,182,8,16,160,185,18,16,64,0,1,4,16,64,96,88,
    2,58,93,195,14,208,53,53,53,217,64,173,65,154,0,61,44,90,14,246,168,0,1,218,163,29,67,181,16,64,0,1,4,16,240,139,128,134,100,13,203,213,213,213,86,144,214,122,51,7,218,47,189,71,61,135,34,64,128,30,138,
    26,199,32,128,0,2,8,32,128,64,15,1,59,68,103,50,25,107,61,35,207,61,120,120,18,48,1,2,116,192,58,148,230,32,128,0,2,8,32,80,78,1,130,115,57,245,57,183,91,2,4,104,183,164,57,15,2,8,32,128,0,2,1,22,208,
    145,231,76,215,122,201,108,94,97,205,123,14,141,222,129,249,207,1,238,239,74,111,26,31,164,82,233,87,0,237,71,0,1,4,16,64,96,152,2,26,158,211,233,180,164,94,252,171,68,46,158,37,161,139,119,146,100,50,
    105,173,27,102,209,28,142,128,39,5,8,208,158,236,22,42,133,0,2,8,32,128,128,127,4,52,64,39,18,9,233,238,238,206,86,186,171,171,203,10,208,246,156,232,236,6,30,32,16,0,1,2,116,0,58,145,38,32,128,0,2,8,
    32,80,46,1,123,244,57,30,143,247,8,208,29,29,29,146,74,165,202,85,45,206,139,128,163,2,4,104,71,121,41,28,1,4,16,64,0,129,224,11,104,136,214,41,27,58,10,109,47,26,168,117,90,7,35,208,182,8,223,131,36,
    16,204,55,17,110,248,151,72,168,42,72,253,68,91,16,64,32,0,2,153,238,5,1,104,5,77,64,160,176,64,126,88,214,209,103,194,115,97,43,214,250,95,32,144,1,58,245,230,137,254,239,25,90,128,0,2,8,248,68,32,179,
    226,98,145,170,191,251,164,182,84,179,212,2,102,240,89,50,41,51,210,188,169,91,210,27,158,217,82,124,198,60,95,122,129,185,43,71,157,100,170,163,146,9,135,74,125,90,202,243,145,64,166,253,21,31,213,118,
    112,85,13,100,128,30,92,211,217,11,1,4,16,64,160,20,2,233,53,55,151,162,24,202,240,169,128,6,232,180,153,234,156,110,51,15,218,226,91,91,97,238,202,177,234,42,73,39,66,146,142,153,240,204,132,81,159,246,
    46,213,238,75,128,75,186,47,25,214,35,128,0,2,8,32,128,0,2,8,32,80,64,192,151,1,58,158,228,79,65,5,250,146,85,8,32,224,99,129,120,210,151,63,142,125,44,78,213,157,22,8,241,171,218,105,98,202,47,163,128,
    47,167,112,44,88,85,43,235,218,170,164,185,225,253,119,251,150,209,144,83,35,128,0,2,195,22,120,238,221,198,97,151,225,100,1,155,187,162,50,170,158,159,185,78,26,251,185,108,13,203,97,243,26,112,227,232,
    168,44,173,142,72,85,52,36,205,102,222,51,31,235,237,231,94,117,167,238,155,187,34,238,156,168,196,103,241,229,144,71,50,21,146,239,95,63,163,196,20,20,135,0,2,8,148,71,96,254,210,58,249,203,67,19,202,
    115,242,65,158,245,222,151,154,7,185,39,187,85,162,128,6,232,42,51,36,87,95,19,150,250,134,176,212,213,135,164,38,182,37,84,51,18,93,137,87,196,224,219,124,223,203,254,252,217,226,203,17,104,237,150,191,
    60,56,65,214,111,174,146,51,62,178,72,102,140,235,20,222,224,59,248,139,149,61,17,64,192,27,2,155,59,163,242,175,87,154,228,220,191,77,151,142,110,111,143,194,156,117,237,182,178,215,204,77,50,125,108,
    167,55,240,168,133,103,4,52,32,135,204,251,7,99,85,33,25,81,159,49,193,57,100,141,70,107,128,142,122,251,178,246,140,97,165,86,228,87,255,156,42,207,190,61,194,151,205,15,69,90,143,53,151,61,11,2,8,32,
    128,0,2,253,11,52,212,166,228,243,7,47,147,15,78,109,55,163,141,233,254,119,102,107,69,9,232,157,56,116,73,167,51,98,135,138,176,73,214,86,184,102,46,244,22,28,254,181,4,244,90,89,223,94,37,255,124,110,
    180,60,248,106,147,111,85,8,208,190,237,58,42,142,0,2,8,32,128,0,2,8,32,80,14,1,95,206,129,46,7,20,231,68,0,1,4,16,64,0,1,4,16,64,64,5,8,208,92,7,8,32,128,0,2,8,32,128,0,2,8,20,33,64,128,46,2,139,93,17,
    64,0,1,4,16,64,0,1,4,16,32,64,115,13,32,128,0,2,8,32,128,0,2,8,32,80,132,0,1,186,8,44,118,69,0,1,4,16,64,0,1,4,16,64,128,0,205,53,128,0,2,8,32,128,0,2,8,32,128,64,17,2,4,232,34,176,216,21,1,4,16,64,0,
    1,4,16,64,0,1,223,126,18,33,93,135,0,2,8,32,128,0,2,222,17,248,231,21,103,75,235,228,177,210,60,170,81,204,71,168,200,170,181,27,228,137,231,231,203,31,255,122,151,188,246,214,34,239,84,148,154,32,80,
    2,1,62,72,165,4,136,20,129,0,2,8,32,128,64,165,11,196,223,249,187,249,8,239,222,127,216,222,220,214,33,115,78,252,161,188,240,234,59,149,78,68,251,3,36,208,251,74,15,80,227,104,10,2,8,32,128,0,2,8,184,
    43,112,198,143,47,145,89,115,78,151,51,207,185,212,124,180,119,90,26,27,234,228,212,19,15,119,183,18,156,13,1,135,5,8,208,14,3,83,60,2,8,32,128,0,2,149,36,176,100,249,26,121,243,221,165,242,135,171,238,
    148,7,159,120,197,106,250,54,211,198,87,18,1,109,173,0,1,2,116,5,116,50,77,68,0,1,4,16,64,192,109,129,72,36,44,179,182,155,106,157,246,145,167,94,117,251,244,156,15,1,71,5,120,19,161,163,188,20,142,0,
    2,8,32,128,64,101,9,204,217,127,23,217,182,117,162,124,228,144,61,101,194,216,102,73,36,146,114,251,253,79,87,22,2,173,13,188,0,111,34,12,124,23,211,64,4,16,64,0,1,4,156,23,40,244,38,194,55,222,89,34,
    159,253,250,133,188,129,208,121,126,206,224,178,0,83,56,92,6,231,116,8,32,128,0,2,8,4,89,224,7,191,252,171,252,246,242,219,172,38,198,170,162,210,214,209,21,228,230,210,182,10,21,32,64,87,104,199,211,
    108,4,16,64,0,1,4,156,16,152,255,246,98,249,206,207,174,148,87,223,124,79,182,153,58,94,254,120,222,87,156,56,13,101,34,80,86,1,2,116,89,249,57,57,2,8,32,128,0,2,193,19,208,219,215,125,227,220,63,91,13,
    59,104,159,157,228,83,199,28,16,188,70,210,162,138,22,32,64,87,116,247,211,120,4,16,64,0,1,4,156,17,120,232,201,121,114,235,61,79,90,133,95,240,131,83,164,161,190,214,153,19,81,42,2,101,16,32,64,151,1,
    157,83,34,128,0,2,8,32,80,9,2,223,57,239,10,233,234,142,203,196,113,45,242,163,51,79,168,132,38,211,198,10,17,224,46,28,21,210,209,52,19,1,4,16,64,0,1,4,16,64,160,52,2,140,64,151,198,145,82,16,64,0,1,
    4,16,64,0,1,4,42,68,128,0,93,33,29,77,51,17,64,0,1,4,16,64,0,1,4,74,35,64,128,46,141,35,165,32,128,0,2,8,32,128,0,2,8,84,136,0,1,186,66,58,154,102,34,128,0,2,8,32,128,0,2,8,148,70,128,0,93,26,71,74,65,
    0,1,4,16,64,0,1,4,16,168,16,1,2,116,133,116,52,205,68,0,1,4,16,64,0,1,4,16,40,141,0,1,186,52,142,148,130,0,2,8,32,128,0,2,8,32,80,33,2,4,232,10,233,104,154,137,0,2,8,32,128,0,2,8,32,80,26,1,2,116,105,
    28,41,5,1,4,16,64,0,1,4,16,64,160,66,4,8,208,21,210,209,52,19,1,4,16,64,0,1,4,16,64,160,52,2,4,232,210,56,82,10,2,8,32,128,0,2,8,32,128,64,133,8,16,160,43,164,163,105,38,2,8,32,128,0,2,8,32,128,64,105,
    4,254,63,195,60,212,166,76,118,166,17,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* UpmixerComponents::slide1_png2 = (const char*) resource_UpmixerComponents_slide1_png2;
const int UpmixerComponents::slide1_png2Size = 23180;

// JUCER_RESOURCE: slide1_png3, 29829, "../../Winter 2015/EECS 452/project/gui/Slide1.png"
static const unsigned char resource_UpmixerComponents_slide1_png3[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,208,0,0,1,176,8,6,0,0,0,128,75,82,91,0,0,3,240,105,67,67,80,73,67,67,32,80,114,
    111,102,105,108,101,0,0,56,141,141,85,221,111,219,84,20,63,137,111,92,164,22,63,160,177,142,14,21,139,175,85,83,91,185,27,26,173,198,6,73,147,165,233,66,26,185,205,216,42,164,201,117,110,26,83,215,54,
    182,211,109,85,159,246,2,111,12,248,3,128,178,7,30,144,120,66,26,12,196,246,178,237,1,180,73,83,65,21,213,36,164,61,116,218,64,104,147,246,130,170,112,174,175,83,187,93,198,184,145,175,127,57,231,119,
    62,239,209,53,64,199,87,154,227,152,73,25,96,222,242,93,53,159,145,143,159,152,150,59,86,33,9,207,65,39,244,64,167,166,123,78,186,92,46,2,46,198,133,71,214,195,95,33,193,222,55,7,218,235,255,115,117,86,
    169,167,3,36,158,66,108,87,61,125,30,241,105,128,148,169,59,174,15,32,222,70,249,240,41,223,65,220,241,60,226,29,46,38,136,88,97,120,150,227,44,195,51,28,31,15,56,83,234,40,98,150,139,164,215,181,42,226,
    37,196,253,51,49,249,108,12,243,28,130,181,35,79,45,234,26,186,204,122,81,118,237,154,97,210,88,186,79,80,255,207,53,111,54,90,241,122,241,233,242,230,38,143,226,187,143,213,94,119,199,212,16,127,174,
    107,185,73,196,47,35,190,230,248,25,38,127,21,241,189,198,92,37,141,120,47,64,242,153,154,123,164,194,249,201,55,22,235,83,239,32,222,137,184,106,248,133,169,80,190,104,205,148,38,184,109,114,121,206,
    62,170,134,156,107,186,55,138,61,131,23,17,223,170,211,66,145,231,35,64,149,102,115,172,95,136,123,235,141,177,208,191,48,238,45,76,230,90,126,22,235,163,37,238,71,112,223,211,198,203,136,123,16,127,232,
    218,234,4,207,89,88,166,102,94,229,254,133,43,142,95,14,115,16,214,45,179,84,228,62,137,68,189,160,198,64,238,215,167,198,184,45,57,224,227,33,114,91,50,93,51,142,20,66,254,146,99,6,179,136,185,145,243,
    110,67,173,132,156,27,154,155,203,115,63,228,62,181,42,161,207,212,174,170,150,101,189,29,68,124,24,142,37,52,160,96,195,12,238,58,88,176,1,50,168,144,135,12,190,29,112,81,83,3,3,76,148,80,212,82,148,
    24,137,167,97,14,101,237,121,229,128,195,113,196,152,13,172,215,153,53,70,105,207,225,17,238,132,28,155,116,19,133,236,199,231,32,41,146,67,100,152,140,128,76,222,36,111,145,195,36,139,210,17,114,112,
    211,182,28,139,207,98,221,217,244,243,62,52,208,43,227,29,131,204,185,158,70,95,20,239,172,123,210,208,175,127,244,247,22,107,251,145,156,105,43,159,120,7,192,195,14,180,152,3,241,250,175,46,253,176,43,
    242,177,66,46,188,123,179,235,234,18,76,60,169,191,169,219,169,245,212,10,238,171,169,181,136,145,250,61,181,134,191,85,72,99,110,102,144,209,60,62,70,144,135,23,203,32,94,195,101,124,124,208,112,255,
    3,121,118,140,183,37,98,205,58,215,19,105,88,39,232,7,165,135,37,56,219,31,73,149,223,148,63,149,21,229,11,229,188,114,119,91,151,219,118,73,248,84,248,86,248,81,248,78,248,94,248,25,100,225,146,112,89,
    248,73,184,34,124,35,92,140,157,213,227,231,99,243,236,131,122,91,213,50,77,187,94,83,48,165,140,180,91,122,73,202,74,47,72,175,72,197,200,159,212,45,13,73,99,210,30,212,236,222,60,183,120,188,120,45,
    6,156,192,189,213,213,246,177,56,175,130,90,3,78,5,21,120,65,135,45,56,179,109,254,67,107,210,75,134,72,97,219,212,14,179,89,110,49,196,156,152,21,211,32,139,123,197,17,113,72,28,103,184,149,159,184,7,
    117,35,184,231,182,76,157,254,152,10,104,140,21,175,115,32,152,58,54,171,204,122,33,208,121,64,125,122,218,103,23,237,168,237,156,113,141,217,186,47,239,83,148,215,229,52,126,170,168,92,176,244,193,126,
    89,51,77,57,80,121,178,75,61,234,46,208,234,32,176,239,32,191,162,31,168,193,247,45,177,243,122,36,243,223,6,56,244,23,222,89,55,34,217,116,3,224,107,15,160,251,181,72,214,135,119,226,179,159,1,92,56,
    160,55,220,133,240,206,79,36,126,1,240,106,251,247,241,127,93,25,188,155,110,53,155,15,240,190,234,248,4,96,227,227,102,243,159,229,102,115,227,75,244,191,6,112,201,252,23,89,0,113,120,18,181,225,134,
    0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,64,0,73,68,65,84,120,1,236,157,7,128,83,197,246,198,79,146,237,133,133,93,22,150,94,5,148,34,34,138,88,64,81,65,125,130,98,193,130,62,31,98,
    195,174,207,250,236,190,103,253,219,177,247,130,162,98,23,172,40,130,162,34,8,54,170,244,222,97,23,182,111,146,255,124,179,220,144,100,147,108,178,155,122,243,141,134,220,220,59,115,102,230,55,147,205,
    119,207,61,119,174,197,214,113,132,83,152,72,128,4,72,128,4,72,128,4,72,128,4,72,128,4,130,34,96,13,42,23,51,145,0,9,144,0,9,144,0,9,144,0,9,144,0,9,104,2,20,208,156,8,36,64,2,36,64,2,36,64,2,36,64,2,
    36,16,2,1,10,232,16,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,14,144,0,9,144,0,9,144,0,9,144,0,9,144,64,8,4,40,160,67,128,197,172,36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,57,64,2,36,64,2,
    36,64,2,36,64,2,36,64,2,33,16,160,128,14,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,231,0,9,144,0,9,144,0,9,144,0,9,144,0,9,132,64,128,2,58,4,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,
    156,3,36,64,2,36,64,2,36,64,2,36,64,2,36,16,2,1,10,232,16,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,14,144,0,9,144,0,9,144,0,9,144,0,9,144,64,8,4,40,160,67,128,197,172,36,64,2,36,64,2,36,64,
    2,36,64,2,36,64,1,205,57,64,2,36,64,2,36,64,2,36,64,2,36,64,2,33,16,160,128,14,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,231,0,9,144,0,9,144,0,9,144,0,9,144,0,9,132,64,128,2,58,4,88,204,74,2,
    36,64,2,36,64,2,36,64,2,36,64,2,20,208,156,3,36,64,2,36,64,2,36,64,2,36,64,2,36,16,2,1,10,232,16,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,14,144,0,9,144,0,9,144,0,9,144,0,9,144,64,8,4,40,160,
    67,128,197,172,36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,57,64,2,36,64,2,36,64,2,36,64,2,36,64,2,33,16,160,128,14,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,231,0,9,144,0,9,144,0,9,144,0,9,
    144,0,9,132,64,128,2,58,4,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,156,3,36,64,2,36,64,2,36,64,2,36,64,2,36,16,2,1,10,232,16,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,14,144,0,9,144,
    0,9,144,0,9,144,0,9,144,64,8,4,40,160,67,128,197,172,36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,57,64,2,36,64,2,36,64,2,36,64,2,36,64,2,33,16,160,128,14,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,
    5,52,231,0,9,144,0,9,144,0,9,144,0,9,144,0,9,132,64,128,2,58,4,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,156,3,36,64,2,36,64,2,36,64,2,36,64,2,36,16,2,1,10,232,16,96,49,43,9,144,0,9,144,0,9,144,
    0,9,144,0,9,164,152,3,129,69,156,230,232,72,82,246,194,162,123,205,17,76,202,193,103,167,73,128,4,72,128,4,72,32,1,9,152,68,64,43,241,229,180,136,213,18,59,17,230,68,19,68,73,193,90,53,152,24,83,65,181,
    217,138,83,143,24,181,25,163,229,84,227,166,254,143,85,19,18,99,156,216,74,18,32,1,18,32,1,18,32,129,184,34,96,18,1,45,146,157,81,35,103,31,181,74,186,22,85,136,211,30,125,69,88,85,35,50,99,97,129,204,
    152,95,40,85,85,42,50,38,250,77,8,105,98,165,167,56,228,188,33,43,164,99,139,74,117,226,17,82,209,176,100,182,216,28,242,231,234,28,121,103,122,123,169,182,51,146,40,44,80,105,132,4,72,128,4,72,128,4,
    72,32,42,4,76,34,160,45,146,145,230,144,19,250,109,149,195,122,149,138,84,69,95,17,58,84,149,61,59,150,74,101,133,77,102,46,106,46,142,168,12,95,195,42,113,170,198,14,59,96,163,92,117,210,6,105,158,83,
    45,49,113,220,167,59,229,179,159,43,228,253,31,218,73,117,141,130,23,147,70,52,140,31,75,145,0,9,144,0,9,144,0,9,36,55,1,147,8,104,165,191,148,6,203,82,34,58,63,67,5,6,216,16,28,16,229,164,234,31,178,
    239,110,217,176,109,131,172,219,158,46,203,55,54,81,241,17,49,104,71,61,221,118,42,111,111,207,78,219,229,162,97,235,165,75,126,149,164,196,170,141,105,78,201,72,117,232,113,171,167,201,60,76,2,36,64,
    2,36,64,2,36,64,2,113,69,192,52,2,26,84,17,135,172,93,191,112,7,199,32,229,166,59,228,196,126,59,148,120,206,146,151,190,78,151,226,178,244,184,242,172,58,149,91,188,121,94,153,92,122,220,90,25,216,101,
    183,164,0,83,140,88,97,176,244,120,197,96,156,88,37,9,144,0,9,144,0,9,144,0,9,52,134,0,131,79,27,67,207,187,172,186,27,174,85,211,26,57,227,240,77,114,76,159,173,146,106,181,123,231,136,233,231,52,21,
    119,60,122,240,58,57,174,239,118,105,146,25,207,65,38,49,197,196,202,73,128,4,72,128,4,72,128,4,72,32,32,1,10,232,128,120,66,60,136,232,17,85,164,87,219,114,25,53,104,131,244,238,88,172,87,7,9,209,74,
    68,178,35,116,99,112,159,45,114,230,160,205,210,182,153,138,123,70,45,241,23,97,18,145,190,211,40,9,144,0,9,144,0,9,144,0,9,132,147,128,169,66,56,194,9,166,193,182,148,40,77,87,203,90,28,189,95,137,172,
    82,34,122,83,113,186,172,221,154,45,150,88,197,26,171,142,64,60,119,105,179,83,46,25,182,78,122,183,46,175,13,221,160,120,110,240,16,179,32,9,144,0,9,144,0,9,144,64,114,19,160,7,58,66,227,223,52,203,41,
    167,28,188,77,70,28,188,73,114,50,171,5,43,95,196,34,33,206,56,55,171,82,46,62,118,173,28,222,189,68,50,83,209,138,216,180,37,22,253,103,157,36,64,2,36,64,2,36,64,2,36,16,110,2,20,208,225,38,10,123,240,
    238,170,87,187,130,42,57,83,197,67,15,222,111,155,164,196,98,101,16,213,12,220,40,56,234,240,117,50,98,192,118,201,207,218,19,147,77,239,51,70,137,137,4,72,128,4,72,128,4,72,128,4,26,68,128,2,186,65,216,
    130,40,164,68,170,77,121,122,15,232,84,38,103,12,222,32,251,182,43,86,94,232,232,226,198,3,101,6,238,183,89,61,48,101,147,116,204,199,3,83,148,154,166,120,14,98,240,152,133,4,72,128,4,72,128,4,72,128,
    4,252,19,96,12,180,127,54,141,63,162,196,106,150,242,60,31,215,123,135,172,220,152,41,155,119,166,203,166,157,89,42,30,58,242,43,96,64,60,183,107,185,91,198,13,93,39,125,219,151,169,21,65,84,119,40,158,
    27,63,166,180,64,2,36,64,2,36,64,2,36,144,244,4,162,235,18,77,74,220,22,41,200,113,200,105,3,183,200,241,253,182,72,102,154,138,135,86,203,221,69,50,33,238,25,143,54,31,123,204,26,25,220,179,68,178,82,
    161,156,35,91,103,36,251,67,219,36,64,2,36,64,2,36,64,2,36,16,79,4,40,160,35,61,26,208,174,234,213,165,101,165,156,169,66,57,6,246,216,161,66,59,176,51,114,73,45,2,34,195,7,172,151,83,14,217,38,133,185,
    53,92,178,46,114,168,105,153,4,72,128,4,72,128,4,72,32,9,9,80,64,71,99,208,149,199,25,177,50,135,118,45,149,81,71,168,71,104,183,42,213,75,203,69,162,106,132,110,244,235,188,77,46,56,118,131,236,83,88,
    169,227,176,35,172,215,35,209,13,218,36,1,18,32,1,18,32,1,18,32,129,184,37,64,1,29,173,161,81,34,58,59,213,33,195,15,216,33,167,28,186,94,242,155,84,132,125,105,59,44,149,215,50,191,76,46,57,126,157,28,
    216,177,84,210,176,242,71,100,157,221,209,162,199,122,72,128,4,72,128,4,72,128,4,72,32,110,8,80,64,71,115,40,148,136,110,153,167,30,245,125,232,22,25,186,255,22,73,79,177,135,53,30,58,35,165,70,206,31,
    178,86,134,246,217,33,185,233,80,206,140,123,142,230,240,178,46,18,32,1,18,32,1,18,32,129,228,32,64,1,29,229,113,182,40,93,219,163,77,133,156,165,226,161,251,117,217,25,54,137,11,239,243,176,3,55,201,
    105,135,111,150,34,37,210,181,116,166,247,57,202,163,203,234,72,128,4,72,128,4,72,128,4,146,129,0,151,177,139,246,40,43,47,116,154,82,209,131,123,236,146,85,71,110,144,141,59,51,100,197,198,28,177,216,
    26,190,180,157,211,110,147,158,29,183,201,133,67,215,75,15,117,179,162,13,125,162,120,142,246,200,178,62,18,32,1,18,32,1,18,32,129,36,33,64,1,29,139,129,86,34,58,55,195,33,35,250,109,149,101,27,50,229,
    149,169,237,164,164,44,77,173,15,29,186,234,133,231,185,89,147,50,25,55,108,173,28,178,207,110,201,208,35,202,208,141,88,12,171,123,157,157,90,148,75,147,204,61,79,126,116,63,192,109,18,32,1,18,32,1,18,
    32,1,217,182,59,85,214,110,75,79,88,18,20,208,177,26,58,37,124,219,228,171,120,232,195,54,43,15,116,150,124,254,107,75,169,81,251,66,141,233,72,179,218,101,244,160,117,114,92,191,237,210,52,3,130,77,217,
    8,93,135,199,138,130,233,234,29,208,181,88,94,28,183,72,186,181,46,51,93,223,216,33,18,32,1,18,32,1,18,8,39,129,57,203,154,200,152,167,247,149,37,235,179,194,105,54,42,182,76,21,3,109,131,7,23,47,4,26,
    123,191,180,170,140,47,101,137,166,238,175,158,18,136,245,161,123,181,87,143,250,118,134,54,28,78,187,85,6,169,155,17,71,31,185,81,218,54,171,86,210,57,222,196,179,143,113,112,27,23,61,94,81,153,230,209,
    169,164,141,122,92,250,148,255,252,65,241,28,29,220,172,133,4,72,128,4,72,32,193,9,244,239,82,34,159,221,252,187,100,165,39,222,21,91,211,120,160,241,244,189,29,165,41,178,181,88,137,208,26,79,33,10,217,
    140,160,134,204,52,167,100,171,87,220,36,21,202,145,161,150,154,27,218,115,167,172,220,180,65,54,21,167,203,250,237,120,212,119,253,109,68,232,70,151,54,59,85,232,198,122,233,213,186,66,82,209,193,250,
    139,69,181,235,187,42,173,82,94,101,17,60,216,165,78,170,176,72,113,121,138,58,105,168,115,36,97,119,156,167,98,218,115,51,107,18,182,253,108,56,9,144,0,9,144,0,9,68,155,64,187,230,21,50,114,192,22,121,
    115,70,81,180,171,110,84,125,166,17,208,187,148,24,123,240,195,125,228,133,111,170,68,212,195,68,60,146,18,105,121,42,188,225,248,131,54,202,121,71,108,23,65,168,68,188,36,37,162,155,101,171,71,125,15,
    216,170,68,116,166,188,57,189,173,148,86,164,6,20,209,78,117,191,97,147,172,42,185,120,232,90,57,188,123,177,122,84,55,58,19,71,125,66,115,212,73,192,203,51,154,203,212,95,91,73,13,148,189,87,243,44,234,
    196,97,211,142,116,169,242,58,217,65,209,68,77,157,91,86,36,106,211,217,110,18,32,1,18,32,1,18,136,25,129,206,133,229,49,171,187,161,21,155,68,64,59,181,16,251,109,89,83,165,211,124,184,52,33,82,179,170,
    101,159,14,197,117,132,92,67,193,133,181,156,18,196,29,10,171,229,172,65,27,101,245,150,76,153,250,91,75,177,163,27,94,162,211,168,19,222,230,211,15,93,39,195,15,218,46,249,89,113,26,247,172,4,244,130,
    117,217,50,237,247,66,117,62,3,1,93,119,92,156,170,131,118,29,247,93,247,152,209,215,68,122,183,249,232,99,34,181,159,109,37,1,18,32,1,18,32,129,88,16,176,122,6,14,196,162,9,33,215,105,18,1,173,250,173,
    68,114,141,183,231,217,192,129,99,14,123,173,40,53,246,197,213,59,30,245,237,148,254,157,202,213,163,190,55,202,170,205,153,178,104,93,30,58,85,167,149,136,123,238,191,223,102,57,119,200,38,233,84,80,
    169,194,35,148,154,174,155,173,78,185,88,236,192,73,64,181,195,166,4,116,61,75,244,81,120,198,98,120,88,39,9,144,0,9,144,0,9,144,64,3,9,36,160,230,247,211,83,195,203,233,235,125,143,194,244,227,208,245,
    99,48,202,187,149,200,207,74,113,200,241,251,239,80,15,67,217,40,153,169,202,179,172,246,185,39,167,58,65,104,215,114,151,92,118,220,26,233,215,161,76,82,49,122,113,42,158,209,238,218,214,239,105,160,
    175,113,49,246,185,119,146,219,36,64,2,36,64,2,36,64,2,36,16,231,4,204,227,129,142,115,208,65,53,79,9,230,194,92,187,140,82,143,250,254,114,110,161,204,85,33,41,118,135,82,201,16,154,234,255,236,140,106,
    25,123,204,26,57,170,87,137,138,123,134,48,245,20,216,65,213,193,76,49,33,96,45,186,88,44,29,31,136,73,221,172,148,4,72,128,4,72,128,4,98,77,192,177,248,108,113,238,248,44,214,205,8,91,253,20,208,97,67,
    25,30,67,208,202,251,168,155,209,254,165,132,242,150,157,233,178,106,75,182,118,50,35,82,99,248,128,13,114,202,192,45,74,100,227,81,221,106,7,52,52,83,98,16,176,224,114,129,121,46,248,36,6,116,182,146,
    4,72,128,4,72,32,110,8,64,200,152,40,241,23,61,222,6,83,121,161,113,147,224,105,3,182,203,240,67,214,75,158,186,249,209,89,109,149,190,157,182,203,249,71,111,144,125,154,87,171,71,117,83,60,199,219,176,
    177,61,36,64,2,36,64,2,36,64,2,201,67,128,30,232,120,28,107,37,162,11,212,234,26,23,29,179,81,22,173,205,149,249,107,114,212,122,207,235,228,160,206,165,146,166,150,127,243,142,141,142,199,46,176,77,36,
    64,2,36,64,2,36,64,2,36,96,86,2,20,208,241,58,178,106,121,183,110,69,149,114,213,9,171,101,115,73,170,12,233,85,44,185,233,140,123,142,215,225,98,187,72,128,4,72,128,4,72,128,4,146,135,0,5,116,28,143,
    53,156,205,131,246,221,165,110,36,20,201,82,79,80,100,220,115,28,15,86,4,155,86,89,89,41,43,87,174,148,102,205,154,73,139,22,45,34,88,19,77,147,0,9,212,71,160,172,172,76,206,56,227,12,157,109,204,152,
    49,114,202,41,167,212,87,132,199,73,128,4,76,72,128,49,208,113,61,168,88,218,206,169,61,207,182,56,94,239,57,174,17,38,112,227,22,47,94,44,167,158,122,170,100,101,101,73,143,30,61,164,101,203,150,82,88,
    88,40,15,61,244,144,84,85,169,39,110,50,145,64,146,18,56,241,196,19,165,109,219,182,174,215,228,201,147,235,144,120,238,185,231,92,199,145,247,210,75,47,173,147,167,33,59,106,106,106,4,245,225,181,116,
    233,210,134,152,96,25,18,32,1,19,16,160,128,14,231,32,234,27,76,195,189,52,6,110,24,140,196,77,131,170,157,186,189,225,4,64,91,225,34,176,110,221,58,57,234,168,163,228,131,15,62,16,135,99,239,131,104,
    182,110,221,42,79,61,245,148,108,219,182,45,92,85,209,14,9,36,28,129,205,155,55,11,190,35,198,235,181,215,94,171,211,135,151,94,122,201,117,28,249,118,236,216,81,39,15,119,144,0,9,144,64,67,9,80,64,55,
    148,156,123,57,37,68,87,239,176,201,111,171,211,101,91,153,173,118,221,102,247,227,241,182,173,214,202,219,180,203,38,191,174,202,144,170,61,79,2,143,183,38,38,123,123,198,143,31,47,27,54,108,208,24,198,
    141,27,39,223,124,243,141,188,240,194,11,114,224,129,7,202,87,95,125,37,173,90,181,74,118,68,236,63,9,136,101,207,178,88,240,6,151,148,148,184,136,252,253,247,223,50,123,246,108,253,217,200,227,58,200,
    13,18,32,1,18,8,3,1,198,64,135,1,162,88,157,178,81,221,232,247,254,207,249,210,175,115,185,156,218,127,187,164,96,65,231,56,117,241,86,171,166,189,50,163,165,100,164,85,74,183,214,21,146,22,14,6,180,17,
    86,2,115,231,206,213,246,108,54,155,60,248,224,131,146,147,147,35,67,134,12,145,11,46,184,192,103,61,240,76,255,241,199,31,130,248,204,158,61,123,74,167,78,157,60,242,65,140,195,3,151,146,146,34,221,186,
    117,211,199,74,75,75,101,213,170,85,122,187,99,199,142,146,150,150,38,75,150,44,209,159,33,208,211,211,211,229,251,239,191,151,252,252,124,57,232,160,131,244,126,120,195,23,45,90,36,8,47,65,56,73,191,
    126,253,116,136,137,62,168,254,113,63,142,203,230,251,239,191,191,182,107,28,135,231,124,198,140,25,50,120,240,96,109,215,216,207,119,18,104,8,1,204,229,237,219,183,203,150,45,91,228,195,15,63,148,243,
    206,59,79,155,121,235,173,183,244,251,193,7,31,172,191,23,21,21,21,117,204,219,237,118,89,184,112,161,158,243,109,218,180,145,94,189,122,73,118,118,118,157,124,152,211,243,231,207,151,101,203,150,233,
    80,170,214,173,91,215,201,99,236,224,252,55,72,240,157,4,204,79,128,30,232,48,141,49,228,242,226,53,121,242,230,119,173,100,246,74,245,71,56,94,201,170,152,234,41,191,231,201,187,223,181,149,226,82,37,
    157,149,247,156,41,254,8,24,34,23,63,242,163,71,143,150,57,115,230,248,108,36,132,193,191,255,253,111,237,145,62,250,232,163,101,248,240,225,210,185,115,103,65,140,232,234,213,171,93,101,110,191,253,118,
    45,172,143,56,226,8,215,190,159,127,254,89,239,131,224,158,53,107,150,108,218,180,201,245,25,113,214,93,187,118,149,227,142,59,78,158,120,226,9,93,6,30,61,120,192,145,31,55,78,193,86,247,238,221,229,199,
    31,127,244,121,28,226,165,119,239,222,242,251,239,191,187,234,60,236,176,195,116,217,35,143,60,210,181,143,27,36,208,80,2,56,33,28,57,114,164,46,254,230,155,111,186,204,24,219,103,158,121,166,107,159,
    251,198,15,63,252,32,125,250,244,209,243,19,247,25,28,114,200,33,210,190,125,123,125,149,199,61,31,66,69,6,13,26,164,243,162,158,125,247,221,87,46,187,236,50,247,44,174,109,239,239,7,231,191,11,13,55,
    72,192,148,4,226,85,230,37,28,108,92,73,172,177,91,101,230,252,66,121,247,135,22,178,114,123,170,18,209,144,213,113,148,212,178,30,127,173,77,147,151,191,110,39,75,214,231,138,149,226,57,142,6,199,179,
    41,23,95,124,177,20,20,20,232,157,159,124,242,137,246,0,119,232,208,65,238,189,247,94,113,247,166,93,115,205,53,242,200,35,143,8,110,108,130,183,218,240,160,77,153,50,69,70,140,24,33,88,193,163,33,233,
    129,7,30,144,141,27,55,74,187,118,237,36,51,51,83,214,174,93,43,195,134,13,147,223,126,251,77,155,107,218,180,169,88,173,86,45,220,225,185,115,63,126,204,49,199,200,77,55,221,36,104,47,60,218,163,70,141,
    146,234,234,106,221,70,67,212,99,85,17,167,51,206,190,31,13,1,197,50,49,39,112,250,233,167,235,54,124,251,237,183,250,36,16,66,22,33,28,8,221,192,220,243,78,184,241,239,248,227,143,151,5,11,22,232,67,
    77,154,52,209,239,240,100,95,116,209,69,242,246,219,111,187,138,140,29,59,86,102,206,156,169,63,27,223,175,9,19,38,184,142,27,27,156,255,6,9,190,147,64,242,16,160,128,14,231,88,171,176,141,226,178,84,
    249,228,151,34,249,100,118,129,236,170,80,10,85,135,114,132,179,146,6,218,82,98,126,71,169,85,158,251,178,141,252,180,160,64,202,213,211,13,153,226,151,0,60,183,240,10,35,100,195,16,197,16,159,183,220,
    114,139,246,50,227,82,49,194,47,158,125,246,89,221,137,19,78,56,65,123,156,225,69,190,245,214,91,245,62,120,126,221,197,64,40,189,133,248,93,179,102,141,182,249,252,243,207,235,48,18,227,38,172,137,19,
    39,234,75,230,127,254,249,167,124,241,197,23,2,1,130,48,19,28,135,87,15,251,32,244,39,77,154,164,171,132,136,158,58,117,170,14,31,129,103,16,222,107,188,51,54,53,148,17,97,94,127,4,112,53,3,39,155,184,
    90,243,206,59,239,232,185,133,188,135,31,126,184,32,52,195,59,221,115,207,61,178,123,247,110,61,255,62,254,248,99,61,111,113,98,136,48,38,164,155,111,190,89,191,35,76,201,88,221,195,215,247,75,103,218,
    243,15,231,191,59,13,110,147,64,114,16,160,138,10,247,56,43,205,188,102,107,182,188,53,189,181,76,91,152,39,142,56,113,178,217,85,59,94,157,81,40,83,102,183,146,226,114,134,190,135,123,216,35,97,175,75,
    151,46,250,146,50,226,59,33,56,33,106,145,32,70,33,142,221,195,58,16,198,129,216,76,136,109,120,127,177,244,29,146,113,35,149,254,16,194,63,8,27,113,23,31,70,93,125,251,246,21,92,22,199,165,243,253,246,
    219,207,21,199,108,28,71,28,54,142,193,59,141,75,216,70,66,220,52,18,46,131,191,255,254,251,250,36,192,56,198,119,18,104,12,1,204,183,147,79,62,89,155,120,253,245,215,93,39,141,254,194,55,140,185,10,129,
    141,171,52,152,171,136,213,255,231,63,255,169,109,224,234,136,113,79,129,209,46,127,223,47,227,184,97,147,243,223,32,194,119,18,48,63,1,42,169,112,143,177,242,56,67,52,255,185,50,79,94,159,214,74,90,231,
    87,73,255,142,229,34,88,237,34,86,73,197,61,127,54,23,241,217,237,100,253,246,12,213,190,56,242,140,199,138,73,2,212,187,115,231,78,65,168,4,66,40,206,62,251,108,73,77,77,117,93,146,134,32,53,46,61,163,
    43,238,43,16,148,151,151,187,214,137,206,200,200,208,61,133,200,64,194,77,134,70,114,47,99,236,51,222,189,31,216,98,216,217,181,107,151,145,197,227,221,56,14,79,224,128,1,3,60,142,225,3,110,56,100,34,
    129,72,17,64,24,7,150,173,251,245,215,95,117,21,8,183,56,237,180,211,124,86,103,204,85,239,249,95,92,92,172,243,227,202,8,110,160,133,176,54,146,123,94,247,239,151,113,220,176,201,249,111,16,225,59,9,
    152,159,192,222,191,16,230,239,107,244,122,168,68,116,101,181,77,102,252,217,92,38,205,44,148,53,106,137,187,152,221,84,168,226,158,23,172,75,147,151,190,106,43,139,87,231,72,141,67,13,121,188,132,149,
    68,111,68,18,174,38,196,84,194,43,134,152,204,159,126,250,73,176,42,135,251,90,183,8,149,192,202,24,16,213,72,184,44,61,109,218,52,29,215,121,245,213,87,235,120,99,236,63,244,208,67,241,166,159,98,136,
    119,92,186,198,101,110,132,122,188,248,226,139,216,229,51,65,128,184,39,195,14,86,34,192,13,137,8,39,129,39,25,177,166,72,198,113,8,108,220,128,136,24,108,196,138,66,76,191,247,222,123,114,206,57,231,
    232,124,240,228,229,229,229,185,46,147,235,157,252,135,4,26,73,0,43,212,224,73,157,70,194,26,234,222,39,129,198,49,99,174,226,42,206,253,247,223,175,231,50,194,146,140,27,15,17,211,159,155,155,43,184,
    218,98,36,127,223,47,227,184,97,147,243,223,32,194,119,18,48,63,1,10,232,72,141,177,114,242,110,223,157,46,31,254,84,36,83,230,228,75,41,30,28,167,246,69,53,41,161,172,227,158,191,110,35,51,23,230,75,
    69,13,47,56,68,149,127,3,43,195,141,127,184,201,9,34,21,107,63,227,199,25,171,95,64,148,34,97,101,12,132,79,64,32,220,117,215,93,122,31,46,33,67,68,96,133,12,67,8,224,166,63,99,133,2,196,137,26,9,151,
    182,139,138,138,116,172,178,177,175,190,247,27,110,184,193,181,52,222,127,255,251,95,29,78,2,15,31,110,24,68,59,141,227,120,66,34,226,183,33,238,17,114,114,199,29,119,200,208,161,67,245,242,118,184,209,
    241,177,199,30,211,222,242,135,31,126,152,55,17,214,7,157,199,131,38,128,19,201,147,78,58,201,149,223,95,248,6,50,224,4,208,88,138,14,241,206,152,167,184,194,131,176,13,156,56,226,65,69,72,8,161,50,150,
    197,243,254,126,121,199,239,115,254,107,100,252,135,4,146,138,0,5,116,164,134,27,94,94,37,152,87,109,206,145,55,85,60,244,12,196,67,139,218,23,181,228,20,187,10,213,120,93,197,61,127,250,115,145,186,185,
    49,173,182,118,122,159,163,54,2,13,173,8,151,143,113,115,32,132,168,123,130,72,192,170,0,184,49,208,248,1,71,188,51,60,201,134,32,64,126,196,65,95,127,253,245,218,243,107,228,131,208,197,163,140,141,203,
    210,240,214,221,119,223,125,238,230,3,110,35,92,4,107,66,67,152,24,94,111,20,192,210,95,88,79,218,253,56,234,128,224,192,165,110,44,1,246,234,171,175,234,122,17,70,98,172,152,0,59,70,219,2,86,204,131,
    36,16,36,1,99,110,97,126,226,70,85,127,9,97,22,88,89,3,39,151,70,104,19,242,30,112,192,1,130,149,60,220,151,122,124,230,153,103,228,242,203,47,119,173,101,142,239,38,4,56,196,181,123,226,252,119,167,193,
    109,18,72,14,2,22,91,199,17,209,84,117,17,163,234,12,228,222,117,88,36,63,187,90,46,60,113,169,220,115,250,58,21,143,28,102,87,176,10,147,248,101,69,166,220,253,118,103,249,98,174,122,66,156,187,72,85,
    34,54,35,213,46,39,29,178,94,110,56,101,149,236,223,86,45,232,31,238,250,125,81,85,113,207,147,231,229,201,93,19,247,81,241,216,77,234,132,110,56,21,147,59,207,158,47,87,159,184,81,114,225,152,14,247,
    44,72,113,200,133,47,116,146,215,191,216,71,117,23,39,19,129,43,176,132,189,1,190,160,68,118,223,43,151,46,148,179,143,216,232,179,18,107,171,113,98,233,240,128,207,99,129,118,226,6,66,60,236,1,49,150,
    88,27,26,49,209,254,18,150,157,67,140,51,86,19,48,132,178,119,94,28,199,234,29,157,58,117,210,54,189,143,7,243,25,75,210,45,95,190,92,123,192,221,47,155,27,101,113,124,197,138,21,174,37,240,140,253,198,
    59,46,115,227,18,57,19,9,196,154,0,174,152,96,174,226,193,65,238,247,20,120,183,203,152,243,245,229,67,57,206,127,111,122,252,76,2,181,4,28,75,206,18,231,246,218,43,169,222,76,238,253,160,163,220,53,169,
    147,247,238,184,254,204,107,250,17,31,30,167,84,84,89,229,219,223,91,72,151,162,50,105,57,108,189,20,53,113,168,71,182,69,176,98,37,232,23,173,199,122,207,109,212,195,93,24,247,28,65,210,17,55,141,155,
    239,130,189,1,15,97,25,245,37,172,206,129,135,65,52,38,193,195,135,7,168,248,75,56,110,60,8,198,87,30,138,103,95,84,184,47,22,4,240,244,205,64,115,217,104,83,125,115,222,200,135,119,206,127,119,26,220,
    38,1,243,18,96,8,71,164,199,22,206,110,69,121,107,113,186,188,255,99,107,249,98,30,98,145,225,145,141,80,197,202,211,139,184,231,231,167,182,146,153,122,189,103,158,35,69,136,52,205,146,0,9,144,0,9,144,
    0,9,36,41,1,10,232,40,13,188,83,61,200,228,239,181,185,242,236,151,237,100,234,252,60,37,170,3,135,52,52,172,89,78,129,54,127,122,106,75,153,52,163,173,190,137,81,215,82,79,248,68,195,234,98,41,18,32,
    1,18,32,1,18,32,1,18,72,78,2,20,208,81,28,119,135,18,205,127,172,104,42,111,168,245,161,231,173,81,235,243,170,80,139,176,38,181,162,217,199,115,155,200,219,106,189,231,77,197,25,188,105,48,172,112,105,
    140,4,72,128,4,72,128,4,72,128,4,106,9,80,64,71,121,38,84,213,88,101,234,188,22,242,238,140,34,217,80,140,245,161,195,36,162,149,24,255,115,117,154,60,255,69,7,89,182,49,187,246,97,41,38,184,49,47,202,
    195,195,234,72,128,4,72,128,4,72,128,4,72,160,94,2,20,208,245,34,10,115,6,37,152,75,202,210,229,221,31,139,228,211,217,5,234,129,43,42,24,186,177,241,208,123,226,158,31,155,220,78,126,89,220,76,170,106,
    246,60,4,163,177,118,195,220,117,154,35,1,18,32,1,18,32,1,18,32,1,51,16,224,29,102,49,24,69,167,213,33,107,212,250,208,175,127,215,74,218,183,168,144,227,250,148,52,98,105,59,245,232,112,213,7,196,61,
    127,249,107,43,217,93,153,86,219,35,198,61,199,96,100,253,87,233,220,242,182,56,119,126,227,63,3,143,144,0,9,144,0,9,144,128,153,9,84,173,55,85,239,40,160,99,52,156,14,37,112,127,91,86,160,30,178,82,46,
    109,11,42,165,87,155,202,134,137,232,84,167,124,50,167,137,188,51,189,173,108,86,43,125,240,166,193,24,13,104,61,213,58,107,118,136,224,197,68,2,36,64,2,36,64,2,36,144,240,4,24,194,17,195,33,172,168,182,
    170,101,237,90,202,251,63,181,144,109,187,213,80,132,26,15,173,226,158,23,174,73,147,231,62,239,40,203,54,228,48,238,57,134,99,201,170,73,128,4,72,128,4,72,128,4,146,135,128,121,60,208,234,137,127,78,
    59,6,206,71,224,175,122,234,158,211,110,149,26,245,138,84,114,42,215,175,195,110,19,167,18,197,254,133,176,202,164,194,147,45,70,120,133,18,204,59,75,210,101,226,140,86,210,81,133,114,156,125,232,22,73,
    245,209,124,223,109,118,170,199,115,91,229,209,207,218,203,172,197,249,82,233,21,247,140,246,8,250,139,119,95,54,213,49,187,226,18,201,84,141,250,85,187,156,86,12,140,87,93,104,151,234,191,5,67,98,240,
    136,100,99,162,96,91,51,143,66,61,172,130,4,72,128,4,72,128,4,204,68,32,17,127,63,77,35,160,83,212,163,163,59,181,45,145,156,172,106,229,137,245,154,86,74,92,55,205,172,150,78,133,229,225,127,100,245,
    158,170,114,51,236,210,173,253,78,217,84,170,132,162,151,86,68,22,139,218,87,86,158,34,27,182,101,203,174,114,181,222,220,158,132,245,161,87,108,104,34,175,79,43,82,241,208,229,114,84,143,221,65,133,114,
    64,251,62,255,109,11,249,98,118,209,94,123,110,66,180,121,211,114,105,213,172,66,82,82,236,190,215,226,80,140,218,23,150,137,205,71,91,141,182,53,234,93,5,102,119,107,85,38,125,247,221,40,53,110,237,50,
    108,90,85,189,197,187,211,100,229,198,38,117,199,203,200,148,96,239,235,119,238,137,63,79,176,118,179,185,36,64,2,36,64,2,36,16,75,2,27,118,166,199,178,250,6,213,109,177,117,28,225,45,55,27,100,40,214,
    133,154,229,84,203,211,151,252,33,135,239,87,42,162,30,157,237,145,84,15,225,233,204,78,183,75,78,122,4,158,161,173,196,96,117,141,69,74,43,109,82,129,85,53,124,165,20,167,204,252,59,75,30,254,160,179,
    204,90,212,92,44,54,207,118,100,169,19,128,51,142,88,43,215,159,178,82,186,181,172,14,44,162,85,220,243,228,185,57,114,219,132,30,50,127,77,158,56,160,166,221,68,42,188,237,167,30,190,74,174,59,101,173,
    180,207,83,182,252,120,154,115,51,28,146,165,152,64,220,251,86,217,190,58,18,252,190,146,10,171,148,86,216,106,237,123,23,83,227,48,229,151,38,114,245,75,125,164,188,74,229,137,68,3,188,235,140,240,231,
    158,237,74,101,246,125,179,197,22,238,245,189,35,220,110,154,39,1,18,32,1,18,32,129,88,17,216,165,156,139,251,94,115,136,108,41,222,235,92,140,85,91,66,169,215,36,30,104,139,88,149,64,206,207,174,150,
    162,166,53,74,64,251,17,177,145,58,85,80,118,83,149,104,106,154,173,234,246,151,82,29,146,159,147,38,105,74,40,251,74,101,74,68,78,158,211,82,58,43,175,237,184,161,235,165,105,134,50,170,60,231,117,146,
    170,103,209,250,84,121,246,243,14,178,68,61,217,208,91,60,27,249,51,211,236,82,168,196,115,81,83,255,2,90,231,5,147,8,113,105,162,4,122,147,76,223,253,21,37,160,155,170,171,5,181,226,221,243,4,192,232,
    67,162,189,207,95,147,45,99,158,217,87,158,185,96,177,100,171,43,18,76,36,64,2,36,64,2,36,64,2,254,9,108,45,73,149,115,199,247,76,56,241,140,30,153,68,64,215,14,142,150,106,254,196,160,191,253,254,199,
    53,188,71,84,253,1,155,160,66,57,182,22,103,202,219,42,30,186,115,81,133,140,58,120,155,143,72,16,181,134,116,185,85,30,159,210,78,126,92,216,92,42,85,204,181,191,164,235,10,88,161,191,146,81,218,175,
    218,230,71,90,71,169,1,145,169,230,157,153,106,57,193,223,242,229,136,30,197,146,147,25,224,132,42,50,213,211,42,9,144,0,9,144,0,9,196,61,1,117,7,148,236,220,149,34,51,22,53,149,50,117,245,62,17,147,169,
    4,180,30,0,136,198,88,9,199,64,245,6,209,46,172,15,189,120,93,158,188,246,109,145,28,218,163,68,218,121,133,95,56,149,151,253,249,105,45,228,243,89,136,123,222,51,116,110,161,27,62,39,96,16,245,250,44,
    23,174,157,129,152,132,171,142,56,179,179,179,52,85,62,253,181,121,156,181,138,205,33,1,18,32,1,18,32,1,18,8,23,1,175,96,225,112,153,165,157,134,18,168,81,110,217,153,11,10,229,147,89,249,178,67,197,16,
    187,86,244,80,161,31,159,255,153,35,19,191,107,171,30,1,158,161,206,17,204,17,246,208,80,78,44,71,2,36,64,2,36,64,2,36,64,2,177,34,64,1,29,43,242,254,234,85,186,184,180,34,85,198,127,222,94,126,89,146,
    171,150,167,83,25,149,120,94,180,33,77,158,158,210,65,22,169,184,103,187,3,195,150,132,174,93,127,204,184,159,4,72,128,4,72,128,4,72,128,4,162,72,128,2,58,138,176,131,174,74,133,114,44,91,211,84,30,157,
    220,70,150,111,205,144,93,202,19,253,196,103,237,228,103,196,61,87,239,137,21,242,113,127,97,208,246,153,145,4,72,128,4,72,128,4,72,128,4,72,160,193,4,204,23,3,221,96,20,241,85,208,169,150,185,155,241,
    103,145,60,247,117,169,164,165,214,200,23,42,238,185,56,216,184,231,248,234,10,91,67,2,36,64,2,36,64,2,36,64,2,166,34,64,1,29,199,195,89,165,214,111,126,253,155,142,186,133,88,79,153,113,207,113,60,88,
    108,26,9,144,0,9,144,0,9,144,64,210,16,160,128,142,243,161,46,41,83,11,139,27,43,109,24,239,113,222,102,54,143,4,72,128,4,72,128,4,72,128,4,204,76,128,49,208,241,62,186,16,205,188,95,48,222,71,137,237,
    35,1,18,32,1,18,32,1,18,72,34,2,20,208,137,48,216,188,97,48,17,70,137,109,36,1,18,32,1,18,32,1,18,72,18,2,20,208,73,50,208,236,38,9,144,0,9,144,0,9,144,0,9,144,64,120,8,80,64,135,135,35,173,144,0,9,144,
    0,9,144,0,9,144,0,9,36,9,1,10,232,36,25,104,118,147,4,72,128,4,72,128,4,72,128,4,72,32,60,4,40,160,195,195,145,86,72,128,4,72,128,4,72,128,4,72,128,4,146,132,0,5,116,146,12,52,187,73,2,36,64,2,36,64,2,
    36,64,2,36,16,30,2,20,208,225,225,72,43,36,64,2,36,64,2,36,64,2,36,64,2,73,66,128,2,58,73,6,154,221,36,1,18,32,1,18,32,1,18,32,1,18,8,15,1,10,232,240,112,164,21,18,32,1,18,32,1,18,32,1,18,32,129,36,33,
    96,154,71,121,227,89,35,169,169,234,145,125,233,14,245,232,235,56,124,242,72,138,83,108,170,125,214,40,61,142,59,69,213,99,73,83,60,240,114,196,225,163,12,85,187,210,48,94,76,36,64,2,36,64,2,36,64,2,36,
    144,96,4,76,35,160,203,170,172,242,206,143,205,101,238,138,108,177,59,226,79,64,91,173,78,89,190,41,83,214,108,207,84,2,63,194,194,81,217,255,107,125,174,188,252,101,161,228,101,85,139,211,25,127,60,82,
    108,78,249,125,69,142,84,219,227,175,109,9,246,29,102,115,73,128,4,72,128,4,72,128,4,162,76,192,98,235,56,34,194,106,46,26,61,170,21,97,89,41,118,177,89,213,182,51,30,187,100,145,26,133,162,178,198,162,
    4,190,138,156,137,176,136,78,81,130,61,67,137,84,171,196,35,11,5,66,93,37,168,81,158,241,178,26,155,26,47,139,250,168,174,28,48,145,0,9,144,0,9,144,0,9,144,64,2,16,48,137,7,186,86,36,150,213,24,33,221,
    241,237,213,140,134,88,180,43,61,90,170,61,241,241,204,66,9,103,8,252,8,159,76,36,192,247,144,77,36,1,18,32,1,18,32,1,18,72,32,2,134,226,76,160,38,179,169,36,64,2,36,64,2,36,64,2,36,64,2,36,16,59,2,20,
    208,177,99,207,154,73,128,4,72,128,4,72,128,4,72,128,4,18,144,0,5,116,2,14,26,155,76,2,36,64,2,36,64,2,36,64,2,36,16,59,2,20,208,177,99,207,154,73,128,4,72,128,4,72,128,4,72,128,4,18,144,0,5,116,2,14,
    26,155,76,2,36,64,2,36,64,2,36,64,2,36,16,59,2,20,208,177,99,207,154,73,128,4,72,128,4,72,128,4,72,128,4,18,144,0,5,116,2,14,26,155,76,2,36,64,2,36,64,2,36,64,2,36,16,59,2,20,208,177,99,207,154,73,128,
    4,72,128,4,72,128,4,72,128,4,18,144,128,73,30,164,146,128,228,217,100,18,32,1,18,32,1,18,48,25,129,115,79,61,74,206,31,117,172,207,94,189,244,206,215,50,225,131,105,62,143,113,39,9,36,26,1,10,232,68,27,
    49,182,151,4,72,128,4,72,128,4,226,148,64,251,214,133,114,196,193,61,125,182,238,171,25,243,124,238,231,78,18,72,68,2,20,208,137,56,106,108,51,9,144,0,9,144,0,9,196,49,129,229,171,55,202,85,119,60,239,
    209,194,197,203,215,121,124,230,7,18,72,100,2,20,208,137,60,122,108,59,9,144,0,9,144,0,9,196,33,129,146,221,101,242,249,119,191,198,97,203,216,36,18,8,15,1,222,68,24,30,142,180,66,2,36,64,2,36,64,2,36,
    64,2,36,144,36,4,232,129,78,146,129,102,55,73,128,4,72,128,4,72,32,90,4,186,119,110,35,191,124,250,136,71,117,39,142,185,75,54,111,45,246,216,199,15,36,144,168,4,40,160,19,117,228,216,110,18,32,1,18,32,
    1,18,136,83,2,153,25,233,210,175,87,23,143,214,165,165,166,122,124,230,7,18,72,100,2,20,208,137,60,122,108,59,9,144,0,9,144,0,9,196,33,129,165,43,55,200,133,55,142,247,104,217,230,109,59,61,62,243,3,9,
    36,50,1,10,232,68,30,61,182,157,4,72,128,4,72,128,4,226,144,192,238,178,114,249,254,151,249,113,216,50,54,137,4,194,67,128,55,17,134,135,35,173,144,0,9,144,0,9,144,0,9,144,0,9,36,9,1,10,232,36,25,104,
    118,147,4,72,128,4,72,128,4,72,128,4,72,32,60,4,40,160,195,195,145,86,72,128,4,72,128,4,72,128,4,72,128,4,146,132,128,197,214,113,132,51,73,250,202,110,146,0,9,144,0,9,144,0,9,144,0,9,144,64,163,9,208,
    3,221,104,132,52,64,2,36,64,2,36,64,2,36,64,2,36,144,76,4,40,160,147,105,180,217,87,18,32,1,18,32,1,18,32,1,18,32,129,70,19,160,128,110,52,66,26,32,1,243,19,104,150,151,35,45,155,55,245,232,104,235,150,
    249,146,155,147,233,177,143,31,72,128,4,72,128,4,72,32,25,8,112,29,232,8,142,50,4,199,144,195,246,151,253,246,105,39,187,118,151,203,95,139,87,201,151,51,230,138,221,238,136,96,173,225,53,237,222,135,
    202,170,106,89,190,122,163,124,58,245,23,221,159,250,106,234,166,30,229,58,114,216,33,242,220,155,95,200,206,146,210,250,178,243,120,16,4,14,232,217,89,6,28,208,93,58,183,47,146,13,155,183,203,251,159,
    255,40,171,215,109,9,162,100,195,178,20,21,54,147,41,175,222,33,251,239,215,73,27,200,234,126,170,12,27,212,79,94,123,228,26,105,146,155,165,231,194,200,11,239,241,48,222,170,69,190,28,113,112,79,143,
    125,248,224,112,56,228,189,207,102,214,217,159,168,59,48,183,115,115,178,228,245,247,191,77,212,46,176,221,36,64,2,36,64,2,13,36,64,1,221,64,112,245,21,27,119,238,9,114,239,13,231,234,31,88,247,188,127,
    46,90,41,231,95,247,184,204,155,191,220,125,183,223,237,3,123,119,149,182,69,5,242,203,239,127,107,193,228,55,99,8,7,32,138,6,244,237,38,235,54,109,147,57,127,44,245,91,210,95,31,182,108,43,150,83,46,
    186,87,126,154,187,200,111,89,28,184,243,234,179,100,212,240,35,100,119,89,133,60,245,218,148,128,121,121,48,48,1,136,213,39,239,190,88,206,62,249,72,143,140,247,92,127,174,156,113,217,131,90,200,122,
    28,240,241,97,196,177,7,139,69,253,247,241,215,179,124,28,245,189,107,236,153,199,106,241,188,108,213,6,153,242,205,108,169,170,170,145,187,255,61,90,139,231,47,166,207,149,15,191,248,169,78,193,3,123,
    119,145,183,198,95,87,103,127,101,101,181,105,4,116,106,106,138,76,120,252,58,73,79,79,149,47,21,135,77,91,249,132,181,58,3,206,29,36,64,2,36,96,98,2,20,208,17,24,220,19,143,62,72,198,43,177,131,244,222,
    148,153,2,161,145,167,4,16,196,72,239,30,29,229,163,23,111,149,62,67,175,144,226,93,245,123,101,175,189,240,36,57,99,248,32,25,53,238,126,249,192,135,88,105,72,243,15,81,30,204,247,158,187,89,38,77,254,
    65,206,186,226,255,124,154,240,213,135,156,236,12,57,115,196,32,41,86,222,228,217,127,252,237,179,156,251,206,241,175,78,150,146,221,101,242,209,151,63,187,239,230,118,3,8,140,191,171,86,60,131,253,99,
    47,127,34,43,215,110,146,17,199,14,144,204,140,116,153,49,43,184,167,125,77,122,230,38,177,90,173,146,218,249,228,160,91,208,174,85,115,157,247,145,23,62,210,87,18,240,161,93,235,218,125,231,93,243,136,
    108,219,177,203,175,173,117,27,183,201,164,41,63,184,142,87,87,219,93,219,137,190,81,93,93,35,55,61,240,154,228,171,208,150,100,19,207,221,90,151,73,239,14,187,37,213,198,5,156,18,125,30,179,253,36,16,
    43,2,59,119,165,200,247,139,155,74,105,133,45,86,77,104,116,189,20,208,141,70,88,215,192,67,183,142,213,59,239,123,106,146,220,246,208,4,87,134,103,39,124,46,179,39,63,162,66,58,218,203,53,23,156,36,119,
    62,250,150,92,112,214,80,73,177,217,4,199,144,78,30,122,136,20,181,104,166,47,205,159,112,84,127,233,218,177,181,222,63,108,112,63,105,161,66,66,94,126,247,107,57,113,200,65,122,251,19,229,73,60,247,148,
    163,196,166,202,127,62,109,142,203,171,61,228,208,62,130,240,137,175,191,159,39,203,86,109,84,162,189,131,28,214,127,63,249,125,193,10,73,73,177,201,113,71,246,211,54,187,116,108,37,151,156,115,188,76,
    255,249,47,89,184,116,141,222,103,252,227,175,15,79,191,254,153,164,41,239,91,77,205,94,49,180,111,215,118,50,116,208,1,170,77,121,178,224,239,53,242,246,39,51,116,152,10,242,253,166,234,204,206,202,208,
    102,209,87,132,175,204,156,179,80,206,25,121,164,108,223,185,91,38,124,56,77,182,110,47,209,199,143,83,125,60,98,64,79,29,30,130,48,145,249,75,86,27,205,73,234,247,190,251,117,150,209,138,151,221,110,
    151,33,103,222,34,191,47,92,161,121,188,241,254,52,177,88,44,226,116,58,165,125,155,66,193,124,89,161,66,108,190,156,49,79,9,235,52,57,239,180,163,101,87,105,185,76,251,241,15,45,182,145,23,47,140,57,
    196,45,24,35,13,236,215,67,142,28,216,91,205,35,171,124,175,196,248,244,89,127,233,253,40,223,179,123,7,189,141,147,46,129,255,218,34,146,145,158,166,247,193,27,254,211,175,11,253,94,197,128,215,250,186,
    255,189,172,243,186,255,99,204,121,156,88,157,123,234,81,178,64,141,243,148,111,231,232,249,115,234,241,135,73,27,117,197,101,222,95,203,244,119,192,40,135,118,159,122,194,161,2,22,152,171,56,62,104,64,
    47,53,151,22,200,159,139,86,5,252,30,225,138,9,210,65,251,239,35,71,171,144,42,244,115,202,55,115,212,220,172,189,10,100,124,95,190,85,156,48,7,17,239,253,153,250,62,205,86,87,125,140,100,148,197,156,
    254,74,241,253,121,222,98,217,173,216,66,72,195,158,17,150,101,228,243,174,3,118,18,125,126,219,148,96,126,225,162,69,50,122,208,70,3,11,223,73,128,4,72,160,193,4,118,236,78,149,243,158,220,87,190,252,
    189,160,193,54,98,89,144,235,64,135,153,126,211,38,217,178,245,247,183,180,213,230,251,159,93,39,246,247,226,209,199,201,83,255,27,167,189,210,39,254,235,46,217,189,104,146,22,36,105,93,70,234,24,209,
    233,147,238,87,98,119,95,25,120,242,117,242,233,203,183,75,243,252,38,30,45,44,236,59,90,38,191,114,187,142,131,221,184,101,135,32,28,3,9,226,234,130,27,199,11,68,213,171,15,95,45,231,40,97,125,246,21,
    15,201,187,147,191,151,43,198,12,151,71,111,191,64,30,126,254,67,45,102,33,160,220,211,184,91,158,150,23,222,250,210,181,203,95,31,110,189,242,12,201,205,174,189,105,12,194,252,249,183,190,208,109,253,
    246,237,123,180,24,174,81,109,64,252,43,226,114,207,184,244,1,121,238,190,203,148,215,125,168,140,185,238,49,221,46,244,21,33,4,21,149,85,146,167,56,33,65,196,244,255,199,53,114,227,184,83,229,158,27,
    254,169,251,129,19,130,197,203,214,202,129,106,63,242,38,123,2,67,176,156,250,195,111,114,220,185,119,248,196,241,143,33,253,229,227,151,110,147,15,191,252,73,78,191,228,126,61,47,214,254,242,170,142,
    143,70,200,208,212,137,255,243,40,247,205,204,223,101,216,57,183,203,67,183,158,47,87,143,61,201,227,216,203,239,124,45,23,221,244,164,108,252,245,13,143,249,7,175,119,199,182,45,61,242,222,245,216,68,
    249,239,227,111,123,236,195,213,11,92,101,89,187,97,171,188,243,233,247,174,99,8,91,194,201,149,49,231,17,206,132,43,50,240,110,67,204,127,244,194,45,250,187,128,88,123,132,172,188,249,225,119,114,222,
    181,143,234,242,176,7,187,70,50,230,254,53,119,191,40,227,95,249,212,101,211,215,247,8,66,248,191,215,157,35,55,95,118,186,154,167,187,244,213,32,117,206,33,103,93,254,160,226,245,179,235,251,178,89,133,
    97,224,36,21,169,74,181,1,243,15,98,221,40,107,212,141,171,0,189,142,189,92,254,250,250,73,61,143,115,247,61,93,202,43,170,92,249,124,213,97,134,249,125,219,169,43,228,214,211,86,26,24,248,78,2,36,64,
    2,141,38,80,94,101,147,253,174,25,32,235,183,167,55,218,86,180,13,112,21,142,48,19,135,128,68,130,240,243,117,227,220,198,205,59,244,241,214,123,242,233,15,126,254,25,116,250,77,242,249,119,191,234,163,
    215,42,161,208,103,232,229,42,236,163,204,149,123,174,242,194,29,119,238,237,90,128,64,116,62,114,219,5,250,18,189,43,131,143,141,255,61,241,142,64,116,32,33,180,4,54,17,202,225,158,252,245,97,220,57,
    39,200,191,47,26,169,95,163,134,31,174,139,192,155,124,186,10,47,105,119,200,24,233,117,140,18,21,234,70,201,83,142,27,40,133,5,121,238,38,93,219,136,25,125,228,197,143,228,31,231,221,169,68,71,165,246,
    40,118,108,219,66,70,170,50,72,163,175,124,88,6,171,126,15,85,226,142,226,185,22,27,86,187,64,50,230,78,237,222,224,255,157,245,219,98,61,206,184,137,15,222,106,140,249,133,234,100,11,39,106,16,207,240,
    208,226,36,103,244,149,15,105,207,244,249,103,28,43,199,31,121,160,96,254,25,97,67,183,60,248,186,140,56,255,127,186,108,169,138,105,71,58,232,196,107,228,153,55,62,243,219,144,182,42,252,195,152,47,120,
    119,23,192,40,52,239,175,229,114,232,200,235,229,233,215,167,200,75,255,119,165,246,228,246,24,114,137,180,234,255,79,249,245,207,165,218,235,142,171,39,104,11,202,186,183,211,240,248,250,173,220,237,
    64,191,94,93,180,120,198,124,135,237,126,39,92,173,235,250,159,138,31,119,79,127,41,79,248,17,167,222,40,63,204,94,32,105,105,169,242,143,163,251,139,81,118,71,241,110,185,224,134,241,114,218,197,247,
    201,240,243,239,174,115,63,130,145,207,95,29,102,152,223,255,28,76,207,179,251,124,225,182,111,2,56,57,117,127,249,206,197,189,36,80,75,32,51,205,46,167,29,178,57,33,113,48,132,35,204,195,182,84,93,182,
    198,101,93,92,230,198,234,27,8,105,112,79,253,212,13,86,72,11,151,214,31,158,176,100,249,58,41,217,19,39,13,111,158,183,173,235,213,229,241,197,42,207,212,31,126,151,179,78,26,164,189,191,16,163,70,194,
    229,118,239,4,207,221,154,61,171,54,236,82,98,220,219,38,242,251,235,195,229,183,61,35,125,246,237,36,183,93,117,166,203,236,62,157,90,171,203,231,195,244,13,85,89,153,123,207,32,3,157,32,192,227,8,143,
    29,46,189,31,172,110,102,44,104,214,68,135,145,244,239,179,143,188,253,212,13,58,190,247,213,73,223,200,61,227,223,213,130,207,85,89,146,110,44,220,51,135,14,80,66,48,216,132,144,7,35,129,53,198,25,226,
    25,251,141,49,63,83,197,214,35,189,245,241,116,125,133,0,219,61,186,180,213,227,123,216,65,251,233,147,183,226,146,221,216,173,110,56,221,174,202,213,206,89,8,113,36,216,129,183,216,95,90,164,174,34,96,
    12,141,180,74,121,176,221,211,77,15,188,42,155,183,22,235,229,241,176,170,8,236,206,251,252,113,157,37,51,189,118,46,97,190,117,104,83,59,167,125,181,211,221,158,191,237,67,213,137,2,210,145,135,244,146,
    77,115,223,112,101,67,152,147,17,142,130,157,111,124,240,173,190,49,22,161,81,135,171,254,23,52,109,34,70,89,220,203,240,234,164,169,174,178,222,27,70,62,127,117,32,76,42,209,231,119,235,252,74,239,110,
    243,51,9,184,8,24,162,89,54,85,139,117,181,250,187,160,254,4,217,251,103,9,188,116,110,127,142,92,249,185,65,2,6,129,86,77,19,243,74,51,5,180,49,130,97,122,135,120,158,170,46,143,195,107,134,80,141,83,
    149,199,10,151,116,145,16,107,106,92,46,255,252,187,185,122,31,86,38,192,143,120,243,252,92,45,38,138,10,61,215,218,213,153,212,63,41,41,117,135,10,162,3,2,26,33,23,5,77,115,117,86,212,101,136,154,130,
    102,181,251,252,218,76,181,25,230,61,222,253,245,1,151,187,17,183,236,46,160,17,46,130,101,213,110,86,55,84,125,247,211,159,242,159,203,71,201,240,99,14,214,171,19,120,24,117,251,80,169,86,114,64,170,
    222,19,71,109,181,90,228,198,251,94,149,239,127,153,47,136,245,198,201,192,157,215,156,45,243,149,55,27,117,38,123,2,23,196,219,246,236,214,94,174,187,120,164,60,244,220,135,26,9,78,94,32,244,94,121,119,
    234,222,49,223,51,15,252,141,57,4,52,110,36,132,88,221,182,103,94,118,106,183,55,44,3,115,10,105,219,142,218,184,116,253,161,129,255,32,36,98,162,18,231,254,146,113,3,34,174,170,32,4,169,166,198,161,238,
    11,152,168,79,64,177,202,5,230,33,98,157,141,176,33,95,237,52,108,7,250,30,25,245,224,234,8,88,33,25,246,113,82,97,164,202,202,186,243,210,40,219,169,253,94,70,70,126,247,119,35,159,191,58,204,48,191,
    247,158,146,185,247,156,219,36,80,75,0,95,37,252,73,119,150,58,36,107,167,93,240,205,42,171,114,74,122,154,250,155,163,182,41,162,57,83,252,17,72,212,185,81,87,149,249,235,33,247,7,77,224,178,91,159,145,
    223,62,127,66,175,133,187,100,250,179,234,102,164,165,90,228,246,235,213,89,93,58,182,233,208,137,9,31,76,211,246,150,169,155,190,112,249,247,19,21,191,186,163,184,84,186,116,104,229,81,143,17,6,114,195,
    184,83,148,7,171,171,32,230,212,72,239,60,125,163,124,165,110,20,196,13,94,184,228,140,24,89,228,71,124,50,210,109,87,158,169,69,251,201,106,189,90,247,100,172,254,113,140,186,161,234,129,155,255,165,
    110,224,154,93,103,37,7,95,125,192,13,84,184,73,202,61,181,84,130,31,34,100,229,218,205,130,21,27,112,146,208,144,132,155,39,175,60,127,184,246,134,194,83,135,122,82,84,125,76,162,87,121,184,238,158,151,
    229,217,123,47,147,251,111,250,151,186,113,116,136,222,135,113,135,215,191,171,186,25,244,165,183,191,214,168,112,99,29,188,248,184,217,206,59,97,110,192,219,255,250,163,215,232,27,57,63,80,177,234,219,
    212,82,139,88,205,227,199,15,255,79,170,148,96,133,32,223,165,86,78,241,181,60,157,183,189,198,126,54,180,43,66,117,38,41,15,47,86,120,25,172,188,196,56,17,187,232,236,97,122,121,184,231,85,108,62,4,54,
    98,181,189,219,233,94,127,160,239,145,94,102,110,203,78,233,221,189,163,190,74,99,87,39,15,23,170,27,90,47,185,249,105,215,137,135,187,45,247,109,163,236,49,135,247,149,95,62,125,68,125,71,119,203,223,
    43,214,203,229,183,61,235,158,173,118,41,187,0,117,112,126,123,224,226,7,147,17,192,119,25,130,185,170,198,41,118,229,76,204,218,211,191,114,117,209,66,221,183,46,86,254,41,55,217,136,179,59,32,192,105,
    29,129,121,128,7,91,28,112,252,85,242,216,157,23,170,149,17,14,148,99,143,232,171,107,41,81,66,0,241,191,15,62,251,190,171,214,59,31,121,75,38,62,121,189,190,188,139,27,150,102,169,187,251,225,209,53,
    210,11,111,125,37,39,41,113,9,65,132,215,189,79,238,189,36,142,248,104,60,204,1,30,197,57,106,89,57,196,181,34,189,250,222,84,181,94,240,96,233,165,86,80,128,232,192,138,3,167,253,227,48,195,164,204,84,
    43,39,224,38,50,172,72,128,216,212,191,87,174,175,35,160,253,245,1,70,112,83,150,33,216,238,80,237,127,230,158,75,101,226,248,235,245,141,127,127,44,90,41,88,213,32,212,116,248,193,251,233,152,92,8,64,
    120,35,225,185,252,228,171,89,161,154,49,109,254,23,39,126,37,235,55,110,215,66,18,158,104,188,192,9,225,6,15,62,243,129,94,18,241,185,55,63,87,194,243,56,57,237,132,195,228,181,247,190,209,194,218,29,
    200,3,207,188,47,88,55,26,66,21,55,167,34,126,121,248,249,255,149,167,239,25,167,67,105,144,23,97,26,16,135,56,33,138,102,194,141,172,136,137,199,201,193,200,97,3,213,213,152,157,122,5,23,156,156,97,197,
    144,115,175,122,88,94,120,240,10,221,78,132,33,205,80,43,133,96,174,24,41,208,247,8,87,101,78,28,115,151,60,115,239,165,130,27,97,97,19,49,214,88,37,164,190,228,94,22,39,118,72,249,77,115,92,55,239,26,
    229,221,243,249,170,195,236,243,219,146,222,94,169,164,12,3,7,223,147,141,0,212,179,195,169,60,208,14,169,118,194,129,83,235,196,169,180,118,150,236,116,165,160,83,173,98,129,27,154,41,121,9,84,109,16,
    167,189,246,106,188,89,32,112,21,142,8,143,100,90,90,138,116,235,212,70,175,135,236,239,137,113,88,242,10,55,138,173,221,176,205,103,204,47,142,183,45,106,174,30,72,82,174,215,221,157,249,193,131,90,100,
    227,38,46,196,153,230,168,149,49,140,165,186,220,187,131,21,58,224,109,70,12,172,175,132,167,12,226,166,62,127,237,50,202,24,125,192,141,91,120,248,10,78,4,220,19,66,80,32,42,214,171,56,217,198,36,92,
    86,71,236,52,66,11,16,178,192,228,155,0,66,118,16,23,188,100,197,186,58,99,139,185,144,149,153,166,195,129,124,149,198,241,22,234,6,79,140,149,251,77,154,176,137,19,49,8,193,88,38,204,129,230,202,75,142,
    167,44,122,39,132,159,224,123,130,182,223,127,211,121,250,228,207,88,133,3,121,235,251,30,33,79,94,110,182,190,148,108,92,217,193,190,96,19,202,226,187,224,235,187,230,110,195,95,29,137,62,191,203,38,
    124,167,24,67,41,213,77,182,94,223,136,228,236,93,37,165,110,14,238,49,51,1,156,148,214,212,212,72,73,73,137,84,205,124,84,90,205,187,71,156,22,155,172,62,111,153,20,22,22,74,70,70,134,254,251,98,102,
    6,236,91,96,2,206,165,99,196,177,117,175,243,208,61,247,163,147,219,203,77,111,118,113,223,149,16,219,244,64,71,120,152,240,228,54,196,69,6,74,16,166,107,214,111,245,155,5,199,87,173,243,237,17,132,56,
    246,39,144,225,169,11,148,130,125,0,68,125,125,128,16,107,172,120,70,59,17,243,234,175,159,129,250,145,108,199,32,254,118,150,172,240,217,109,156,120,4,58,249,240,119,188,33,130,210,103,3,26,185,19,115,
    192,151,120,134,89,195,27,237,175,138,250,190,71,40,103,132,47,249,179,17,104,127,176,101,253,229,227,252,14,68,151,199,204,64,0,223,81,188,140,228,190,109,236,227,59,9,152,133,0,47,170,152,101,36,217,
    15,18,32,1,18,32,1,18,32,1,18,32,129,168,16,160,7,58,42,152,195,91,201,97,167,220,160,151,35,227,217,125,120,185,210,90,226,16,192,170,22,55,221,255,154,135,183,43,113,90,207,150,146,0,9,144,0,9,36,58,
    1,122,160,19,116,4,41,158,19,116,224,216,236,176,17,224,119,32,108,40,105,136,4,72,128,4,72,32,68,2,20,208,33,2,99,118,18,32,1,18,32,1,18,32,1,18,32,129,228,38,64,1,157,220,227,207,222,147,0,9,144,0,9,
    144,0,9,144,0,9,132,72,192,20,49,208,57,153,118,177,90,246,222,249,27,34,3,102,39,129,160,9,148,148,133,231,43,131,39,47,229,102,214,62,249,46,232,202,153,49,233,8,148,86,218,212,122,223,124,6,96,210,
    13,60,59,76,2,36,16,247,4,194,163,6,98,212,205,235,71,172,150,171,255,177,90,154,55,169,142,81,11,88,109,178,17,40,83,130,230,205,239,91,202,13,19,186,10,182,67,77,217,25,118,249,191,115,150,202,89,135,
    111,146,172,116,245,220,91,38,18,8,64,0,226,249,203,63,242,229,170,87,186,201,234,45,124,80,73,0,84,60,68,2,36,64,2,81,37,144,176,33,28,183,159,182,66,254,119,214,50,138,231,168,78,23,86,6,209,123,225,
    49,235,229,205,171,230,55,8,198,196,171,231,203,216,163,215,83,60,55,136,94,242,21,194,131,75,78,56,96,155,124,115,219,60,193,149,54,38,18,32,1,18,32,129,248,32,144,144,2,58,35,205,33,215,14,95,19,31,
    4,217,138,164,36,0,81,115,64,167,208,158,218,215,191,75,137,12,219,127,91,82,242,98,167,27,71,160,125,97,133,156,115,68,237,227,145,27,103,137,165,73,128,4,72,128,4,194,65,32,33,5,116,135,230,21,146,153,
    70,111,76,56,38,0,109,52,156,64,247,54,158,143,52,175,207,82,168,249,235,179,199,227,201,69,96,223,54,165,201,213,97,246,150,4,72,128,4,226,152,64,66,10,232,20,117,89,147,137,4,98,77,32,197,230,8,169,
    9,41,86,206,219,144,128,49,179,7,1,206,31,15,28,252,64,2,36,64,2,49,37,144,144,2,58,166,196,88,57,9,144,0,9,144,0,9,144,0,9,144,64,82,19,160,128,78,234,225,103,231,73,128,4,72,128,4,72,32,124,4,44,88,
    163,147,137,4,146,128,64,66,47,99,231,111,124,108,251,207,22,177,166,249,59,204,253,36,16,52,1,199,162,83,197,89,190,52,232,252,13,205,104,201,236,38,214,30,147,26,90,156,229,76,66,192,185,250,46,113,
    108,251,192,36,189,97,55,146,141,128,213,106,149,138,22,253,101,101,247,43,197,106,75,17,155,205,38,20,212,201,54,11,146,167,191,166,20,208,146,209,73,196,66,1,157,60,211,56,130,61,181,164,70,208,184,
    155,105,156,240,165,171,121,203,148,220,4,108,185,201,221,127,246,62,97,9,64,40,107,193,92,212,87,74,178,58,75,106,106,170,228,167,165,9,68,53,19,9,152,145,128,57,5,180,25,71,138,125,34,1,18,32,1,18,32,
    129,56,36,0,241,12,161,156,166,4,115,110,110,174,164,164,212,122,159,51,51,51,233,133,142,195,241,98,147,194,67,128,2,58,60,28,105,133,4,72,128,4,72,128,4,146,150,0,68,52,188,206,217,217,217,146,145,145,
    161,67,55,32,164,33,172,25,198,145,180,211,194,212,29,167,128,54,245,240,178,115,36,64,2,36,64,2,36,16,121,2,70,8,7,4,179,211,89,187,100,39,197,115,228,185,179,134,216,17,160,128,142,29,123,214,76,2,36,
    64,2,36,64,2,166,33,0,17,77,111,179,105,134,147,29,169,135,0,163,251,235,1,196,195,36,64,2,36,64,2,36,64,2,193,19,48,60,208,193,151,96,78,18,72,60,2,244,64,39,222,152,177,197,36,64,2,36,64,2,36,16,119,
    4,32,156,29,91,23,137,172,155,45,22,171,77,164,215,89,218,35,77,175,116,220,13,21,27,20,6,2,20,208,97,128,72,19,36,64,2,36,64,2,36,144,204,4,32,158,237,118,187,56,150,124,33,105,83,175,21,167,197,38,85,
    221,79,211,55,22,82,64,39,243,204,48,111,223,25,194,97,222,177,101,207,72,128,4,72,128,4,72,32,42,4,32,160,171,170,170,164,178,178,210,85,95,121,121,185,22,213,12,233,112,33,225,134,137,8,80,64,155,104,
    48,217,21,18,32,1,18,32,1,18,136,54,1,29,186,225,112,72,117,117,53,5,116,180,225,179,190,152,17,96,8,71,204,208,179,98,18,8,31,129,154,154,26,249,242,203,47,229,207,63,255,148,173,91,183,202,254,251,239,
    47,167,159,126,186,94,143,53,124,181,52,206,18,188,83,239,190,251,174,110,99,94,94,158,12,26,52,72,14,63,252,240,198,25,13,177,244,164,73,147,180,71,108,228,200,145,146,158,158,238,81,218,56,230,177,83,
    125,64,59,91,183,110,45,254,142,15,24,48,64,58,117,226,83,36,189,185,241,115,114,17,128,136,198,223,33,188,140,4,65,77,239,179,65,131,239,102,35,144,212,2,122,253,250,245,50,99,198,140,58,99,138,199,145,
    66,124,252,252,243,207,178,114,229,74,57,240,192,3,101,159,125,246,169,147,207,223,14,127,63,180,248,33,198,229,173,89,179,102,185,138,98,193,249,142,29,59,74,223,190,125,93,251,130,217,104,136,96,154,
    62,125,186,108,216,176,193,101,190,105,211,166,210,187,119,111,105,211,166,141,107,159,209,118,95,2,195,149,201,109,163,62,155,43,86,172,104,112,127,141,241,105,209,162,133,12,25,50,196,173,86,17,227,
    152,199,78,245,193,24,59,127,199,145,255,180,211,78,211,79,202,242,46,155,168,159,231,204,153,35,99,198,140,145,191,254,250,203,163,11,119,221,117,151,252,248,227,143,2,126,177,78,91,182,108,145,195,14,
    59,76,254,254,251,111,143,166,76,156,56,81,206,60,243,76,143,125,145,252,112,238,185,231,234,239,224,198,141,27,165,101,203,150,30,85,25,199,60,118,170,15,159,124,242,137,22,208,254,142,191,252,242,203,
    20,208,222,208,248,57,41,9,24,158,104,163,243,14,229,149,166,128,54,104,240,221,108,4,146,90,64,255,250,235,175,114,214,89,103,213,25,83,120,166,32,160,159,126,250,105,121,227,141,55,100,252,248,241,33,
    9,104,127,63,180,248,33,134,119,240,252,243,207,175,83,39,68,58,60,136,5,5,5,117,142,121,239,104,168,96,186,255,254,251,229,139,47,190,240,48,7,193,121,213,85,87,201,195,15,63,172,247,27,109,247,37,48,
    60,10,238,249,80,159,205,239,190,251,174,193,253,53,198,7,39,30,222,2,218,56,230,221,38,99,236,252,29,71,254,19,79,60,81,114,114,114,188,139,38,228,231,237,219,183,203,136,17,35,244,137,81,191,126,253,
    100,236,216,177,250,7,235,201,39,159,212,219,241,32,158,1,246,222,123,239,213,226,249,128,3,14,144,107,174,185,70,150,46,93,170,219,124,198,25,103,196,29,247,139,47,190,88,178,178,178,92,237,234,220,185,
    179,107,27,27,222,199,123,246,236,233,113,156,31,72,128,4,72,128,4,204,79,32,169,5,180,49,188,240,192,142,26,53,202,248,168,239,26,118,125,104,196,134,247,15,45,126,136,33,160,145,32,36,198,141,27,39,
    187,118,237,210,66,29,130,239,190,251,238,147,135,30,122,40,96,141,225,16,76,23,94,120,161,244,239,223,95,224,29,134,112,126,228,145,71,116,255,113,41,186,161,201,159,77,195,94,67,251,107,148,247,247,
    94,223,216,121,31,135,157,180,180,52,127,230,18,110,63,230,11,174,42,244,233,211,71,126,250,233,39,87,223,48,183,240,20,176,120,73,139,22,169,165,173,84,130,216,199,73,90,60,39,120,238,189,189,211,238,
    237,173,239,184,123,94,110,147,0,9,144,0,9,152,147,0,5,180,26,215,46,93,186,104,17,25,238,33,246,245,67,251,203,47,191,232,106,16,51,9,209,137,132,37,126,174,189,246,90,89,178,100,137,254,28,232,159,112,
    8,38,120,115,141,203,230,240,16,35,84,5,117,55,70,64,251,179,105,244,165,161,253,53,202,251,123,175,111,236,234,59,238,207,110,162,236,159,61,123,182,110,234,101,151,93,230,18,207,216,17,79,226,25,237,
    193,85,4,92,253,184,251,238,187,5,39,139,240,60,227,42,143,119,28,50,242,198,58,161,141,134,7,26,28,31,120,224,1,143,38,225,4,192,189,221,207,63,255,188,180,106,213,202,35,15,63,144,0,9,144,0,9,152,155,
    0,5,180,26,223,229,203,151,203,245,215,95,239,26,105,120,75,207,62,251,108,215,231,134,110,4,250,33,94,188,120,177,190,172,93,90,90,42,175,191,254,186,174,2,34,163,190,20,14,193,244,209,71,31,201,178,
    101,203,100,205,154,53,98,216,11,166,238,64,109,243,103,243,219,111,191,213,197,26,218,223,64,117,226,88,125,99,135,184,224,225,195,135,187,204,224,42,192,227,143,63,238,250,156,232,27,136,245,70,138,
    119,1,119,227,141,55,234,216,99,132,67,77,158,60,89,191,238,188,243,78,193,9,92,219,182,109,227,106,24,16,186,101,36,132,56,121,11,232,175,191,254,218,56,172,223,241,29,102,34,1,18,32,1,18,72,46,2,20,
    208,106,188,215,174,93,235,17,58,129,184,232,112,8,232,64,63,196,243,231,207,151,91,110,185,69,207,54,120,185,16,187,122,193,5,23,212,59,251,194,33,152,222,121,231,29,193,11,41,63,63,95,238,185,231,30,
    233,208,161,67,189,117,7,202,80,159,205,134,246,55,80,157,56,86,223,216,33,228,5,130,205,72,161,222,172,105,148,139,215,119,196,223,46,88,176,64,230,206,157,235,113,162,16,111,237,197,28,135,96,254,207,
    127,254,35,159,125,246,153,190,226,130,147,184,23,94,120,65,112,165,38,158,210,83,79,61,37,88,37,4,201,151,39,255,171,175,190,242,184,87,161,93,187,118,241,212,124,182,133,4,72,128,4,72,32,10,4,40,160,
    21,228,30,61,122,200,173,183,222,234,194,141,85,49,194,145,2,253,16,99,249,46,196,169,158,115,206,57,250,199,26,55,227,97,85,140,250,82,56,4,19,132,251,182,109,219,228,217,103,159,149,193,131,7,203,37,
    151,92,82,95,181,245,30,175,207,102,67,251,91,95,197,245,141,29,174,38,188,248,226,139,46,51,153,153,153,174,109,51,108,28,127,252,241,122,121,181,71,31,125,84,78,58,233,36,215,106,46,111,191,253,182,
    116,239,222,93,199,218,199,67,63,113,39,62,110,162,69,27,79,62,249,100,249,237,183,223,180,112,198,234,28,241,150,78,61,245,212,128,49,208,136,55,15,20,35,29,111,253,97,123,72,128,4,72,128,4,194,79,128,
    2,90,49,197,74,5,163,71,143,14,59,221,64,63,196,168,19,94,110,136,10,120,111,111,186,233,38,15,161,231,175,49,225,16,76,189,122,245,18,216,65,189,31,126,248,161,94,253,99,216,176,97,254,170,12,106,127,
    125,54,27,218,223,250,42,175,111,236,114,115,115,5,171,83,152,53,253,235,95,255,18,44,5,135,176,2,196,176,15,28,56,80,74,74,74,180,64,197,205,146,211,166,77,211,251,98,221,255,171,175,190,90,158,120,226,
    9,193,9,32,66,54,208,46,164,198,206,187,134,246,11,235,100,27,222,229,194,194,66,249,253,247,223,131,54,229,94,22,133,112,63,1,110,196,101,34,1,18,32,1,18,72,30,2,241,115,155,126,28,51,135,119,21,15,82,
    48,94,238,235,56,55,182,217,136,147,70,156,37,214,146,197,205,124,245,37,8,166,99,143,61,86,138,139,139,181,96,58,242,200,35,181,64,132,24,135,120,194,74,12,193,36,92,162,190,225,134,27,116,214,43,174,
    184,194,227,233,81,216,9,145,96,244,23,219,193,164,250,108,194,70,168,253,69,25,112,49,218,130,119,247,171,5,56,30,40,121,151,69,121,67,188,5,42,151,40,199,112,3,234,167,159,126,42,119,220,113,135,190,
    177,13,235,114,207,155,55,79,47,211,7,214,152,19,177,78,240,62,99,29,117,204,15,132,242,96,185,70,136,123,92,117,129,71,58,22,105,211,166,77,122,245,18,172,96,130,237,80,146,123,89,148,223,185,115,103,
    40,197,153,151,4,72,128,4,72,192,4,4,40,160,131,24,68,120,244,240,67,105,188,240,68,181,112,165,110,221,186,201,121,231,157,167,215,238,189,244,210,75,245,83,210,2,217,14,167,96,186,242,202,43,165,168,
    168,72,175,207,235,189,124,158,187,72,8,69,96,4,178,137,126,133,218,95,148,1,111,131,61,222,49,30,193,38,239,178,40,95,81,81,17,108,241,132,200,135,21,33,16,95,140,147,42,44,77,136,152,104,136,58,227,
    4,41,214,157,192,156,189,252,242,203,117,216,16,86,123,249,227,143,63,180,104,197,141,133,209,78,24,123,8,122,247,23,214,60,71,50,142,249,11,207,48,142,187,151,197,54,78,126,153,72,128,4,72,128,4,146,
    139,128,197,214,113,132,51,209,186,220,179,93,169,204,125,176,118,57,56,95,109,183,13,80,107,45,91,204,179,214,175,175,62,98,31,126,188,87,173,90,37,229,229,229,58,222,213,184,36,237,47,63,247,135,78,
    192,241,199,0,113,150,45,244,89,112,236,179,61,100,194,244,224,151,47,59,239,200,13,242,252,197,181,235,33,123,27,180,100,247,18,107,239,31,189,119,243,115,146,17,112,46,191,66,28,155,95,243,217,235,23,
    167,182,150,203,94,234,238,243,88,52,118,150,77,248,78,93,45,243,253,115,97,235,245,141,72,206,65,209,104,6,235,136,67,2,248,45,194,211,141,99,95,146,0,0,48,47,73,68,65,84,113,113,18,95,53,243,81,105,
    253,219,189,226,180,216,100,213,63,151,234,16,73,60,113,151,191,79,113,56,112,81,108,146,115,233,24,113,108,125,223,103,141,143,78,110,47,55,189,217,197,231,177,120,222,201,24,232,120,30,157,122,218,6,
    207,94,199,48,221,240,88,79,85,60,76,2,36,64,2,36,64,2,36,64,2,36,176,135,0,67,56,56,21,72,128,4,72,128,4,72,128,4,72,128,4,72,32,4,2,20,208,33,192,98,86,18,32,1,18,32,1,18,32,1,18,32,1,18,96,8,7,231,
    0,9,144,0,9,144,0,9,144,64,163,9,32,172,208,145,158,39,101,89,234,225,66,214,20,193,103,38,18,48,43,1,10,104,179,142,44,251,69,2,36,64,2,36,64,2,81,34,0,177,140,37,89,43,186,158,34,11,11,143,150,212,212,
    84,105,174,94,188,121,48,74,3,192,106,162,78,128,2,58,234,200,89,33,9,144,0,9,144,0,9,152,139,0,4,52,68,115,118,118,182,246,60,67,76,27,171,111,208,19,109,174,177,102,111,106,9,80,64,115,38,144,0,9,144,
    0,9,144,0,9,52,152,0,4,50,60,205,120,64,18,158,254,10,225,140,125,88,163,30,66,154,2,186,193,104,89,48,142,9,80,64,199,241,224,176,105,36,64,2,36,64,2,36,144,8,4,32,146,13,175,51,132,51,18,68,53,67,56,
    18,97,244,216,198,134,16,160,128,110,8,53,150,33,1,18,32,1,18,32,1,18,240,32,0,177,236,238,109,118,223,246,200,200,15,36,96,2,2,20,208,38,24,68,118,129,4,72,128,4,72,128,4,226,129,0,69,115,60,140,2,219,
    16,13,2,20,208,209,160,204,58,72,128,4,72,128,4,72,32,9,8,224,177,222,120,25,66,218,120,79,130,174,179,139,73,70,128,15,82,73,178,1,103,119,73,128,4,72,128,4,72,32,220,4,32,154,29,14,135,56,230,60,43,
    150,251,115,69,30,104,42,118,187,93,139,233,112,215,69,123,36,16,15,4,40,160,227,97,20,216,6,18,32,1,18,32,1,18,72,96,2,16,208,213,213,213,82,89,182,91,44,213,101,34,85,165,82,81,81,65,17,157,192,99,202,
    166,7,38,64,1,29,152,15,143,146,0,9,144,0,9,144,0,9,4,32,96,132,109,84,85,85,105,209,108,100,45,43,43,211,2,218,248,204,119,18,48,19,1,10,104,51,141,38,251,66,2,36,64,2,36,64,2,49,32,96,120,160,225,133,
    54,82,101,101,165,14,235,192,49,38,18,48,27,1,10,104,179,141,40,251,67,2,36,64,2,36,64,2,81,38,0,145,172,99,160,85,28,180,145,240,153,226,217,160,193,119,179,17,160,128,54,219,136,178,63,36,64,2,36,64,
    2,36,16,35,2,238,130,217,125,59,70,205,97,181,36,16,49,2,20,208,17,67,75,195,36,64,2,36,64,2,36,64,2,36,64,2,102,36,64,1,109,198,81,101,159,72,128,4,72,128,4,72,128,4,72,128,4,34,70,128,2,58,98,104,105,
    152,4,72,128,4,72,128,4,72,128,4,72,192,140,4,40,160,205,56,170,236,19,9,144,0,9,144,0,9,144,0,9,144,64,196,8,80,64,71,12,45,13,147,0,9,144,0,9,144,0,9,144,0,9,152,145,0,5,180,25,71,149,125,34,1,18,32,
    1,18,32,1,18,32,1,18,136,24,1,10,232,136,161,165,97,18,32,1,18,32,1,18,32,1,18,32,1,51,18,160,128,54,227,168,178,79,36,64,2,36,64,2,36,64,2,36,64,2,17,35,64,1,29,49,180,52,76,2,36,64,2,36,64,2,36,64,2,
    36,96,70,2,20,208,102,28,85,246,137,4,72,128,4,72,128,4,72,128,4,72,32,98,4,40,160,35,134,150,134,73,128,4,72,128,4,72,128,4,72,128,4,204,72,128,2,218,140,163,202,62,145,0,9,144,0,9,144,0,9,144,0,9,68,
    140,0,5,116,196,208,210,48,9,144,0,9,144,0,9,36,23,1,139,197,226,234,176,251,182,107,39,55,72,192,36,4,82,76,210,15,118,131,4,72,128,4,72,128,4,72,32,134,4,172,86,171,148,182,31,42,243,83,219,72,74,74,
    170,100,169,207,20,209,49,28,16,86,29,81,2,20,208,17,197,75,227,36,64,2,36,64,2,36,96,126,2,16,202,41,41,41,146,150,223,81,42,83,11,68,125,144,244,244,116,129,168,166,136,54,255,248,39,99,15,41,160,147,
    113,212,217,103,18,32,1,18,32,1,18,8,19,1,8,100,8,101,8,230,220,220,92,73,75,75,19,155,205,38,153,153,153,250,61,76,213,208,12,9,196,21,1,10,232,184,26,14,54,134,4,72,128,4,72,128,4,18,143,128,225,129,
    206,206,206,150,140,140,12,237,117,134,71,26,66,154,30,232,196,27,79,182,184,126,2,20,208,245,51,98,14,18,32,1,18,32,1,18,32,129,0,4,12,47,52,60,209,16,206,72,216,71,241,28,0,26,15,37,52,1,10,232,132,
    30,62,54,158,4,72,128,4,72,128,4,226,131,128,33,150,141,247,248,104,21,91,65,2,145,33,64,1,29,25,174,180,74,2,36,64,2,36,64,2,73,71,192,233,116,186,250,76,33,237,66,193,13,19,18,160,128,54,225,160,178,
    75,36,64,2,36,64,2,36,16,109,2,14,135,67,156,171,127,16,89,248,190,88,172,41,226,60,246,255,24,198,17,237,65,96,125,81,35,192,7,169,68,13,53,43,34,1,18,32,1,18,32,1,115,18,128,231,217,110,183,75,205,218,
    57,98,251,229,9,177,204,122,92,170,170,170,4,162,154,137,4,204,72,128,2,218,140,163,202,62,145,0,9,144,0,9,144,64,148,8,64,60,67,40,67,48,87,86,86,186,106,45,43,43,211,162,218,61,172,195,117,144,27,36,
    144,224,4,40,160,19,124,0,217,124,18,32,1,18,32,1,18,136,53,1,136,228,234,234,106,15,1,93,81,81,161,133,53,5,116,172,71,135,245,71,130,0,5,116,36,168,210,38,9,144,0,9,144,0,9,36,17,1,136,100,29,194,81,
    83,227,234,117,141,218,102,8,135,11,7,55,76,70,128,2,218,100,3,202,238,144,0,9,144,0,9,144,64,44,8,64,68,187,123,155,41,158,99,49,10,172,51,90,4,40,160,163,69,154,245,144,0,9,144,0,9,144,0,9,144,0,9,152,
    130,0,5,180,41,134,145,157,32,1,18,32,1,18,32,1,18,32,1,18,136,22,1,10,232,104,145,102,61,36,64,2,36,64,2,36,64,2,36,64,2,166,32,64,1,109,138,97,100,39,72,128,4,72,128,4,72,128,4,72,128,4,162,69,128,2,
    58,90,164,89,15,9,144,0,9,144,0,9,144,0,9,144,128,41,8,80,64,155,98,24,217,9,18,32,1,18,32,1,18,32,1,18,32,129,104,17,160,128,142,22,105,214,67,2,36,64,2,36,64,2,36,64,2,36,96,10,2,20,208,166,24,70,118,
    130,4,72,128,4,72,128,4,72,128,4,72,32,90,4,40,160,163,69,154,245,144,0,9,144,0,9,144,0,9,144,0,9,152,130,0,5,180,41,134,145,157,32,1,18,32,1,18,32,1,18,32,1,18,136,22,1,10,232,104,145,102,61,36,64,2,
    36,64,2,36,64,2,36,64,2,166,32,64,1,109,138,97,100,39,72,128,4,72,128,4,72,128,4,72,128,4,162,69,128,2,58,90,164,89,15,9,144,0,9,144,0,9,144,0,9,144,128,41,8,164,152,162,23,236,4,9,144,0,9,144,0,9,144,
    64,76,9,88,44,22,169,201,235,44,91,90,13,21,139,213,38,86,171,85,176,143,137,4,204,72,128,2,218,140,163,202,62,145,0,9,144,0,9,144,64,20,9,64,40,219,108,54,169,105,127,148,172,205,235,39,169,169,169,82,
    160,94,20,208,81,28,4,86,21,85,2,20,208,81,197,205,202,72,128,4,72,128,4,72,192,92,4,32,146,241,74,75,75,147,156,156,28,237,121,134,152,206,204,204,212,162,154,34,218,92,227,205,222,212,18,160,128,230,
    76,32,1,18,32,1,18,32,1,18,104,20,1,132,107,24,2,58,35,35,195,37,168,33,164,41,160,27,133,150,133,227,148,0,5,116,156,14,12,155,69,2,36,64,2,36,64,2,137,66,0,34,25,98,57,61,61,93,11,105,180,155,49,208,
    137,50,122,108,103,67,8,80,64,55,132,26,203,144,0,9,144,0,9,144,0,9,120,16,48,68,180,211,233,212,251,233,121,246,192,195,15,38,35,64,1,109,178,1,101,119,72,128,4,72,128,4,72,32,150,4,40,156,99,73,159,
    117,71,139,0,5,116,180,72,179,30,18,32,1,18,32,1,18,48,49,1,120,158,157,21,59,196,185,107,163,142,123,182,52,239,193,248,103,19,143,119,178,119,141,15,82,73,246,25,192,254,147,0,9,144,0,9,144,64,35,9,
    64,60,59,28,14,177,207,123,93,108,207,244,20,203,51,189,165,166,166,70,239,107,164,105,22,39,129,184,36,64,1,29,151,195,194,70,145,0,9,144,0,9,144,64,226,16,128,128,174,174,174,150,202,202,74,87,163,43,
    42,42,180,128,54,98,162,93,7,184,65,2,38,32,64,1,109,130,65,100,23,72,128,4,72,128,4,72,32,86,4,12,239,115,85,85,149,135,128,46,43,43,19,187,221,30,171,102,177,94,18,136,40,1,10,232,136,226,165,113,18,
    32,1,18,32,1,18,48,63,1,136,104,132,108,192,11,109,36,8,106,132,117,208,3,109,16,225,187,153,8,80,64,155,105,52,217,23,18,32,1,18,32,1,18,136,17,1,111,177,12,239,51,197,115,140,6,131,213,70,156,0,5,116,
    196,17,179,2,18,32,1,18,32,1,18,72,14,2,20,204,201,49,206,236,165,122,80,16,33,144,0,9,144,0,9,144,0,9,144,0,9,144,0,9,4,79,128,2,58,120,86,204,73,2,36,64,2,36,64,2,36,64,2,36,64,2,244,64,115,14,144,0,
    9,144,0,9,144,0,9,144,0,9,144,64,40,4,232,129,14,133,22,243,146,0,9,144,0,9,144,0,9,144,0,9,36,61,1,62,202,59,233,167,0,1,144,0,9,144,0,9,144,0,9,144,64,252,17,56,237,132,195,228,154,11,78,146,162,194,
    102,146,157,149,33,187,74,203,101,197,154,77,242,222,148,153,242,226,219,95,197,244,73,151,20,208,241,55,95,216,34,18,32,1,18,32,1,18,32,1,18,72,122,2,221,187,180,145,1,7,116,119,113,104,158,223,68,58,
    181,107,41,67,14,237,35,71,28,188,159,156,123,245,35,174,99,209,222,96,8,71,180,137,179,62,18,32,1,18,32,1,18,32,1,18,32,129,160,9,44,94,182,86,186,13,190,88,134,142,190,77,166,253,244,135,46,119,214,
    73,131,165,85,139,252,160,109,132,59,35,61,208,225,38,74,123,36,64,2,36,64,2,36,64,2,36,64,2,97,35,80,94,89,37,203,87,111,212,175,10,181,125,212,123,125,180,237,206,237,91,202,134,205,219,195,86,79,40,
    134,232,129,14,133,22,243,146,0,9,144,0,9,144,0,9,144,0,9,196,140,64,159,125,59,233,186,203,202,43,101,246,31,127,199,172,29,244,64,199,12,61,43,38,1,18,32,129,232,18,248,102,226,61,98,181,90,228,214,
    255,123,67,102,206,89,216,224,202,157,78,207,162,250,233,115,222,59,85,22,139,197,226,153,209,237,83,176,79,172,75,6,27,193,178,0,62,127,60,130,181,225,175,60,108,135,199,6,236,168,215,30,123,176,105,
    188,80,135,145,34,217,142,96,251,129,182,248,107,71,176,54,252,149,135,109,179,216,8,182,31,129,121,214,206,11,228,65,10,240,167,161,54,131,215,191,5,77,115,101,204,168,99,228,192,222,93,229,244,127,28,
    166,143,78,249,102,182,84,85,213,120,229,140,222,71,10,232,232,177,102,77,36,64,2,36,16,83,2,184,233,198,106,181,74,65,179,220,6,183,195,225,80,69,75,236,98,89,95,173,69,18,12,217,55,63,44,146,218,210,
    195,166,22,22,3,174,18,107,179,78,117,68,138,67,25,113,46,252,64,100,245,247,1,69,134,182,113,236,131,98,181,165,121,216,192,15,186,126,205,122,66,100,231,138,192,54,114,138,196,114,248,77,186,188,187,
    216,113,217,152,122,163,56,107,42,61,218,238,254,65,151,105,117,160,88,250,156,227,211,134,99,247,38,145,31,238,11,220,6,168,133,238,35,196,210,241,40,205,223,221,62,218,225,88,255,171,200,31,111,212,
    111,227,160,75,197,90,208,205,131,5,108,105,158,75,62,21,89,241,109,253,54,134,168,147,168,180,108,15,27,46,22,115,158,17,217,182,36,176,141,172,2,177,12,186,205,55,11,53,174,57,27,190,19,187,62,193,114,
    72,222,172,187,196,150,149,37,14,155,77,156,123,20,147,230,217,178,143,88,250,142,241,109,163,92,93,142,159,126,119,224,54,192,86,215,227,197,210,101,168,111,158,155,84,140,236,188,151,235,183,209,239,
    66,177,182,232,233,193,194,197,115,233,23,34,203,190,172,223,198,145,119,138,53,163,169,135,13,23,207,185,47,138,108,153,31,216,70,122,19,177,28,117,183,79,22,218,206,244,187,196,89,190,195,125,202,120,
    108,107,158,205,247,21,203,129,23,249,180,225,168,220,37,50,237,182,192,109,0,207,206,199,136,101,159,127,248,230,185,69,157,108,255,250,92,253,54,250,254,75,172,69,125,61,88,24,60,29,27,215,137,252,93,
    81,219,118,155,69,28,251,164,171,124,193,11,233,118,173,11,229,133,7,174,208,229,49,223,31,120,230,61,185,227,145,183,60,88,68,251,3,5,116,180,137,179,62,18,32,1,18,72,80,2,240,44,218,149,128,118,238,
    176,75,230,154,234,189,189,88,243,238,222,109,183,173,138,125,78,150,148,38,237,197,166,4,148,33,94,241,227,87,83,163,188,70,203,166,74,218,188,231,220,114,251,222,44,63,226,78,73,203,76,209,54,140,28,
    16,22,213,213,213,98,251,235,109,73,89,63,203,216,237,243,221,158,223,77,170,14,190,86,210,210,60,69,56,218,1,27,233,179,159,18,75,77,185,207,178,198,206,234,30,167,139,115,191,51,37,37,37,197,213,15,
    180,193,110,183,75,117,201,38,201,252,69,9,249,122,82,101,102,75,177,182,27,164,115,225,36,6,9,54,192,194,190,241,47,201,8,194,70,121,199,161,146,218,180,139,79,158,206,101,211,36,125,78,253,237,40,31,
    120,147,164,165,100,106,161,100,140,137,139,231,252,247,36,101,245,119,186,109,254,254,177,231,182,147,170,67,110,244,203,179,96,219,92,177,233,238,57,37,127,241,107,62,205,84,119,61,81,28,61,207,145,
    212,212,84,15,158,122,76,118,111,15,138,69,101,106,19,177,118,60,90,219,119,231,137,49,169,217,180,40,40,27,21,109,7,73,74,65,15,159,60,101,213,15,146,22,204,152,244,191,74,177,80,109,81,99,234,205,211,
    186,240,67,73,93,174,132,120,128,228,200,42,148,170,195,110,173,195,19,99,82,85,85,37,105,74,132,219,118,175,15,96,65,164,166,227,49,82,211,103,140,79,158,85,101,197,193,205,79,81,99,209,105,152,158,227,
    117,120,110,93,26,28,207,162,131,196,214,188,151,199,247,4,99,138,49,113,108,218,34,233,123,254,102,56,108,34,229,157,210,37,85,41,80,165,165,131,74,75,150,175,147,27,238,125,69,158,184,235,98,105,215,
    186,185,46,83,83,99,15,170,108,164,50,81,64,71,138,44,237,146,0,9,144,128,201,8,168,223,116,169,174,81,226,213,97,17,107,186,69,156,240,70,35,193,251,108,77,175,221,86,255,66,72,224,85,174,116,114,166,
    18,136,134,184,128,40,48,132,129,195,150,39,210,164,147,223,117,92,13,27,184,97,200,150,102,247,176,129,31,229,202,202,74,177,101,20,137,61,183,163,95,207,24,108,56,178,218,72,21,242,238,17,241,216,135,
    54,192,70,69,69,133,88,84,121,81,2,26,251,124,37,228,175,74,205,23,85,161,171,13,134,13,8,131,138,106,135,216,84,63,140,190,249,178,129,254,87,88,178,36,69,9,162,140,140,12,157,215,176,1,1,93,233,76,19,
    107,0,27,200,139,87,133,93,137,52,127,60,83,148,39,51,8,158,229,21,138,69,86,45,79,180,213,96,81,203,179,101,253,60,115,90,7,228,89,174,198,53,181,170,66,95,157,168,201,110,227,226,110,112,65,63,170,211,
    154,139,83,177,240,30,19,176,40,171,168,10,200,2,118,106,121,102,251,228,137,147,162,10,187,45,160,13,23,79,71,138,164,171,252,222,243,19,54,236,214,156,224,230,167,10,33,176,169,121,96,216,52,120,66,
    252,90,210,11,197,81,207,252,116,102,22,232,121,232,205,66,207,45,53,63,37,167,157,178,157,22,112,126,86,163,30,175,57,14,78,218,70,165,58,209,12,48,183,92,60,109,185,146,162,250,141,118,160,15,232,15,
    222,53,207,26,107,144,60,83,37,93,141,161,209,23,148,199,11,44,170,157,74,110,170,191,25,122,98,164,168,185,92,229,84,39,90,234,239,72,144,2,186,76,205,219,201,42,100,35,35,35,77,222,126,242,6,185,113,
    220,105,242,213,244,121,50,125,214,95,232,66,76,18,5,116,76,176,179,82,18,32,1,18,72,44,2,234,119,80,41,99,21,46,160,222,75,114,82,100,117,91,155,236,46,135,23,86,237,238,116,151,82,202,61,116,135,240,
    195,11,79,109,110,110,174,20,228,21,72,186,18,170,238,9,63,168,248,97,223,209,115,156,236,104,125,166,148,151,151,235,207,216,111,36,216,128,119,50,47,47,79,10,236,181,63,228,198,49,188,35,47,196,214,
    230,129,15,201,206,157,59,181,0,129,32,118,79,16,69,233,233,233,181,54,84,94,119,251,134,13,136,131,141,67,63,144,226,226,98,253,35,239,157,7,66,32,51,51,83,154,54,109,42,249,170,205,222,199,181,144,207,
    104,37,235,135,126,42,187,118,237,210,98,195,61,15,250,1,27,217,217,217,210,172,89,51,105,166,218,232,126,28,219,96,177,187,104,144,172,62,250,35,41,45,45,213,253,114,207,99,240,204,201,201,145,130,252,
    90,158,238,199,13,27,59,186,159,47,59,90,140,12,200,179,73,147,38,210,220,170,66,42,246,180,3,182,13,22,104,199,230,131,254,167,89,96,76,252,241,212,54,124,240,132,29,148,249,161,239,75,178,105,253,26,
    213,79,145,220,102,133,130,252,24,75,140,7,88,224,4,66,179,240,97,3,229,171,210,10,228,239,122,120,102,169,176,16,109,195,107,76,192,2,54,202,90,14,148,53,65,240,204,207,207,151,212,61,44,52,8,245,143,
    139,103,215,209,178,163,224,4,41,43,43,243,59,63,209,183,130,148,60,201,84,54,220,19,108,96,126,110,63,240,14,217,217,165,118,126,130,175,123,2,15,92,21,209,115,220,7,11,195,198,170,35,95,115,205,79,95,
    99,226,111,126,26,44,170,172,217,178,97,216,100,41,41,41,241,59,63,97,3,44,154,249,225,89,222,188,159,172,61,230,99,217,189,123,183,223,249,137,57,14,27,41,126,108,20,183,236,36,43,43,23,234,19,240,236,
    44,139,20,168,147,107,204,145,80,19,30,160,50,227,220,191,100,208,128,94,242,196,221,23,75,191,19,174,82,227,227,201,63,84,155,13,205,79,1,221,80,114,44,71,2,36,64,2,73,72,0,30,35,92,122,77,79,195,15,
    160,69,133,116,40,111,85,86,166,72,86,182,166,97,8,62,8,37,8,105,8,5,239,4,33,5,81,133,31,110,228,135,48,192,15,190,145,176,15,199,33,128,221,195,38,220,143,99,63,4,8,196,20,236,249,18,23,56,94,159,13,
    28,135,13,212,231,222,6,212,5,187,56,14,59,216,54,4,167,209,14,244,13,237,64,95,33,144,32,154,220,109,32,63,202,225,184,33,34,221,109,24,199,13,22,40,11,59,129,108,160,140,187,13,163,157,104,99,32,158,
    70,59,241,142,118,187,219,48,218,129,190,194,6,142,251,226,105,140,137,63,22,40,219,180,89,129,18,73,181,227,9,81,101,176,117,175,35,16,79,212,17,136,39,218,134,122,124,217,64,29,56,30,10,79,127,44,12,
    158,224,235,107,126,130,99,160,185,5,70,176,97,204,79,95,2,218,224,9,91,238,227,129,58,241,217,168,195,96,232,107,76,252,205,79,119,22,224,137,185,233,107,126,162,255,129,230,167,193,19,121,80,191,191,
    249,137,49,65,127,188,231,198,222,118,168,19,90,245,55,35,69,121,159,211,83,241,221,66,31,209,211,208,211,53,119,189,40,179,39,63,34,61,187,181,151,43,199,12,151,71,95,252,56,116,35,97,40,65,1,29,6,136,
    52,65,2,36,64,2,102,39,128,31,187,90,241,108,145,156,44,167,164,168,224,197,106,120,145,148,91,218,86,84,32,146,221,202,133,192,253,71,215,93,28,24,63,166,16,22,240,80,227,221,251,71,221,48,2,27,134,136,
    113,255,81,118,183,1,239,157,33,182,220,69,167,97,3,117,195,6,68,6,236,161,44,146,97,3,101,225,93,134,64,241,22,56,70,62,67,196,192,142,183,13,180,11,101,177,31,98,209,91,224,24,54,12,161,132,119,212,
    237,222,14,216,71,89,188,131,137,47,27,176,143,178,134,208,113,47,143,99,104,27,202,34,79,176,60,209,54,36,131,5,24,193,163,138,119,111,145,84,155,115,239,9,5,218,225,206,2,219,96,1,47,121,235,214,173,
    181,87,21,227,97,136,59,35,47,234,66,62,236,199,203,216,111,180,3,199,32,196,144,175,49,60,13,209,90,31,79,180,1,220,221,121,98,27,28,209,23,188,227,42,133,175,185,133,182,131,59,88,120,219,192,49,216,
    14,134,103,48,243,19,76,252,205,79,127,60,193,20,199,220,231,184,175,185,133,254,162,253,200,135,182,224,179,59,15,28,51,230,120,163,120,102,169,251,24,154,168,147,101,117,158,140,19,240,140,52,156,236,
    52,76,68,255,190,112,133,188,56,241,43,185,104,244,113,114,251,85,103,202,196,143,103,200,198,45,254,111,180,52,230,111,184,223,41,160,195,77,148,246,72,128,4,72,192,164,4,212,111,171,190,65,12,63,126,
    105,234,215,3,63,134,72,182,102,42,158,57,71,197,9,187,37,136,8,252,128,187,139,36,28,54,126,176,241,163,140,31,109,95,63,234,70,62,148,53,94,110,166,181,13,252,216,27,2,193,151,192,113,183,129,124,134,
    40,48,236,192,46,108,64,32,160,13,161,218,128,61,216,53,68,24,202,251,179,97,244,193,120,55,218,96,216,48,196,139,63,22,200,143,178,129,120,226,56,218,226,207,6,234,50,234,67,94,108,27,9,219,16,139,216,
    143,182,248,235,7,242,33,143,241,50,202,227,29,109,131,232,5,83,132,87,192,134,191,246,162,60,142,121,183,1,251,162,201,211,87,59,176,15,115,2,239,177,228,137,250,49,38,96,2,1,93,223,152,248,226,105,244,
    1,253,65,121,127,54,144,207,120,121,143,137,193,2,109,241,55,183,48,254,70,121,188,187,219,192,103,216,200,204,80,87,157,178,85,56,22,242,226,100,92,137,231,96,226,159,239,25,255,174,224,229,157,46,189,
    245,25,193,43,150,137,2,58,150,244,89,55,9,144,0,9,36,24,1,252,240,89,212,175,96,237,74,11,181,141,183,225,154,172,18,111,190,146,251,143,41,142,227,179,241,194,143,126,125,201,187,188,183,141,250,202,
    27,249,189,243,193,46,234,199,15,124,48,201,95,59,12,225,208,80,27,134,224,8,134,5,234,240,110,7,62,27,175,96,108,120,151,55,108,26,54,26,211,15,244,197,187,13,190,234,51,234,244,174,11,121,99,205,19,
    109,10,101,76,124,245,207,96,233,235,152,119,159,241,217,87,62,236,11,199,252,12,135,141,112,140,9,20,179,197,77,113,170,238,37,124,114,235,78,194,247,133,29,32,1,18,32,1,18,8,130,64,134,18,187,217,89,
    25,30,57,43,171,170,213,229,127,207,27,157,60,50,184,125,240,254,241,211,2,192,123,167,91,126,95,155,190,68,131,175,124,129,246,197,131,141,120,104,3,24,197,75,59,32,182,26,147,226,165,31,108,199,222,
    81,12,15,11,204,209,189,54,205,176,69,1,109,134,81,100,31,72,128,4,72,32,4,2,111,141,191,174,78,110,172,177,250,200,11,31,213,217,207,29,36,16,10,1,239,48,129,112,136,175,80,234,103,94,18,136,22,129,198,
    157,42,70,171,149,172,135,4,72,128,4,72,128,4,72,32,110,9,64,56,35,70,214,177,224,125,113,190,50,72,156,175,29,21,48,182,60,110,59,194,134,145,64,144,4,232,129,14,18,20,179,145,64,68,9,148,45,16,199,236,
    189,171,24,68,180,46,26,143,95,2,142,202,136,182,45,173,203,200,136,218,167,241,228,37,0,1,141,21,64,236,219,86,170,167,84,254,160,30,221,109,147,10,245,112,15,220,136,103,196,20,39,47,29,246,220,140,
    4,40,160,205,56,170,236,83,194,17,112,226,145,110,246,210,132,107,55,27,76,2,36,64,2,16,207,120,225,137,115,53,74,52,171,85,193,117,194,3,89,140,85,28,72,137,4,204,70,128,33,28,102,27,81,246,135,4,72,
    128,4,72,128,4,162,76,0,2,26,107,38,227,145,224,70,194,163,210,253,173,41,109,228,225,59,9,36,42,1,10,232,68,29,57,182,59,225,8,168,240,64,38,18,104,48,1,7,158,163,205,68,2,113,74,0,2,90,199,64,187,253,
    161,243,247,80,151,56,237,2,155,69,2,33,17,160,128,14,9,23,51,147,64,195,9,172,217,106,92,216,108,184,13,150,76,94,2,171,182,120,46,59,151,188,36,216,243,120,37,96,132,114,24,237,195,103,38,18,48,43,1,
    10,104,179,142,44,251,21,119,4,102,44,106,42,127,173,206,142,187,118,177,65,241,79,96,87,121,138,188,249,125,81,252,55,148,45,36,1,18,32,129,36,33,64,1,157,36,3,205,110,198,158,0,174,108,142,124,168,143,
    204,90,170,30,123,204,68,2,65,18,88,173,60,207,39,61,208,71,54,236,72,11,178,4,179,145,0,9,144,0,9,68,154,0,87,225,136,52,97,218,39,1,55,2,16,67,131,110,235,39,93,139,202,164,85,179,106,183,35,220,36,
    129,186,4,138,203,108,242,231,234,28,181,194,65,221,99,220,67,2,36,64,2,36,16,59,2,20,208,177,99,207,154,147,152,192,210,141,89,178,116,99,18,3,96,215,73,128,4,72,128,4,72,32,129,9,48,132,35,129,7,143,
    77,39,1,18,32,1,18,32,1,18,32,1,18,136,62,1,10,232,232,51,103,141,36,64,2,36,64,2,36,64,2,36,64,2,9,76,128,2,58,129,7,143,77,39,1,18,32,1,18,32,1,18,32,1,18,136,62,1,10,232,232,51,103,141,36,64,2,36,64,
    2,36,64,2,36,64,2,9,76,128,2,58,129,7,143,77,39,1,18,32,1,18,32,1,18,32,1,18,136,62,1,10,232,232,51,103,141,36,64,2,36,64,2,36,64,2,36,64,2,9,76,128,2,58,129,7,143,77,39,1,18,32,1,18,32,1,18,32,1,18,136,
    62,1,10,232,232,51,103,141,36,64,2,36,64,2,36,64,2,36,64,2,9,76,128,2,58,129,7,143,77,39,1,18,32,1,18,32,129,120,34,96,177,88,226,169,57,108,11,9,68,140,0,159,68,24,49,180,52,76,2,36,64,2,36,64,2,201,
    67,192,106,181,74,69,139,254,178,178,251,149,98,181,165,136,205,102,19,10,234,228,25,255,100,235,41,61,208,201,54,226,236,47,9,132,64,96,208,128,158,50,234,196,35,244,107,228,176,67,228,160,253,247,145,
    102,121,57,33,88,16,57,250,176,253,165,124,201,251,242,193,243,255,9,169,92,48,153,83,83,83,228,138,49,195,37,45,45,60,190,0,252,216,143,25,117,140,180,104,158,23,76,245,204,67,2,36,176,135,0,190,59,90,
    48,23,245,149,146,253,198,74,105,175,11,212,247,50,77,32,170,153,72,192,140,4,194,243,171,99,70,50,236,19,9,144,128,220,48,238,52,57,110,112,63,15,18,53,53,118,121,231,211,239,229,246,135,223,148,85,235,
    54,123,28,243,245,193,106,181,8,132,174,205,22,254,31,210,177,103,28,43,143,222,126,129,44,95,181,65,166,124,59,199,87,245,33,237,235,209,165,173,60,123,239,165,242,228,107,83,228,223,255,125,41,164,178,
    204,76,2,201,74,0,226,25,66,25,130,57,55,55,87,82,82,106,189,207,153,153,153,244,66,39,235,164,72,130,126,135,255,23,45,9,160,177,139,36,144,108,4,62,155,54,71,198,191,242,169,124,252,213,44,169,177,219,
    101,244,200,35,229,243,215,239,148,188,220,236,152,161,128,215,249,230,203,78,151,239,127,153,31,22,241,140,142,44,92,186,70,94,127,255,91,185,120,244,113,210,170,69,126,204,250,198,138,73,32,209,8,64,
    68,167,166,166,74,118,118,182,52,107,214,76,242,242,242,36,35,35,67,11,107,28,99,34,1,179,17,160,7,218,108,35,202,254,144,64,4,8,76,248,224,59,121,119,242,247,218,114,235,150,249,50,125,210,253,210,173,
    115,27,185,238,226,145,114,219,67,19,244,126,132,61,156,122,252,97,210,166,168,64,230,253,181,76,222,255,252,71,191,45,57,254,200,3,165,191,10,7,113,56,28,242,221,79,127,202,204,57,11,229,144,3,186,75,
    223,158,157,101,193,223,171,101,198,172,249,186,108,223,253,58,203,33,253,186,203,239,11,86,200,79,115,23,121,216,131,103,28,117,93,117,199,243,122,127,251,54,133,114,194,81,253,117,249,166,77,178,229,
    224,190,221,229,103,85,102,242,55,179,101,248,49,7,171,207,221,116,187,62,248,226,39,157,63,59,43,67,206,62,121,176,116,105,95,164,60,233,91,100,194,135,211,100,215,238,114,121,236,165,79,84,24,199,177,
    114,214,73,131,228,145,23,62,242,168,147,31,72,128,4,124,19,48,66,56,224,137,118,58,157,58,19,182,41,158,125,243,226,222,196,39,64,1,157,248,99,200,30,144,64,84,9,172,223,180,93,238,123,106,146,60,127,
    255,229,58,38,26,149,31,113,112,79,249,232,133,91,36,35,61,77,42,171,170,165,73,110,150,188,249,225,119,114,222,181,143,214,105,219,67,183,158,47,87,143,61,73,254,94,177,94,218,181,110,46,119,94,115,182,
    140,190,242,97,89,179,126,139,60,249,223,75,100,249,234,141,210,109,240,197,186,220,93,255,62,91,254,49,228,32,57,225,188,59,235,216,217,183,107,59,65,56,201,215,63,252,166,143,245,238,222,65,151,223,
    188,117,167,138,97,110,234,202,255,233,212,95,180,128,54,118,92,124,243,83,242,210,219,95,201,180,119,238,149,126,189,186,136,93,121,212,17,187,217,169,93,75,185,225,222,87,100,254,146,213,186,45,61,187,
    181,55,138,240,157,4,72,32,8,2,16,203,20,204,65,128,98,22,83,16,96,8,135,41,134,145,157,32,129,232,18,216,160,68,52,82,251,214,133,250,253,165,255,187,82,199,56,247,24,114,137,180,234,255,79,249,245,207,
    165,58,204,163,119,143,14,250,184,251,63,119,63,254,182,12,59,231,118,233,117,236,101,50,228,204,91,244,15,238,69,163,135,105,15,243,156,63,254,150,206,202,35,124,212,192,222,90,132,31,123,120,95,89,173,
    188,195,95,127,95,43,146,221,237,236,183,79,123,217,164,196,114,105,89,133,251,110,73,79,75,213,130,251,233,215,167,232,253,184,137,241,164,177,255,149,39,94,254,68,127,62,89,221,12,217,161,77,11,45,158,
    119,20,239,150,14,3,199,202,169,23,221,43,55,222,247,170,203,206,82,21,83,141,120,104,38,18,32,129,208,9,24,30,232,208,75,178,4,9,36,14,1,122,160,19,103,172,216,82,18,136,27,2,135,29,180,159,110,11,66,
    43,90,42,111,47,68,47,194,49,230,125,254,184,222,159,153,158,174,223,251,236,219,73,224,17,118,79,195,84,232,197,127,84,236,50,60,188,198,29,250,109,139,154,235,44,143,191,252,169,188,241,216,181,114,
    190,186,57,176,77,171,230,234,166,164,84,121,117,210,84,215,37,97,119,59,240,114,87,84,86,185,239,210,219,63,204,89,32,95,205,152,39,85,85,53,114,233,63,255,33,16,229,184,193,112,195,230,29,114,229,249,
    35,164,160,105,174,172,217,176,85,123,186,209,238,149,63,190,36,179,85,158,114,101,11,229,144,42,42,171,25,3,173,73,240,31,18,8,158,0,132,179,99,171,10,181,90,55,91,44,86,155,72,175,179,244,9,50,189,210,
    193,51,100,206,196,33,64,1,157,56,99,197,150,146,64,204,9,32,68,227,220,83,143,146,127,95,120,178,110,203,164,41,63,72,241,174,50,29,6,81,83,227,144,59,31,157,40,213,213,53,122,213,13,188,35,22,26,113,
    202,70,130,231,247,205,199,255,173,197,236,168,113,15,232,85,60,190,127,255,1,229,53,174,253,83,4,123,15,254,231,95,50,242,184,129,42,188,163,80,139,242,87,148,128,246,149,22,47,91,43,71,30,210,171,206,
    161,42,85,47,146,93,9,122,164,106,21,230,129,228,112,212,198,101,214,110,59,228,224,225,215,234,229,249,134,14,62,64,78,30,122,136,188,255,220,205,82,176,255,217,90,120,23,21,54,149,69,202,62,19,9,144,
    64,112,4,32,158,17,14,229,88,242,133,164,77,189,86,156,22,155,84,117,63,77,223,88,72,1,29,28,67,230,74,44,2,12,225,72,172,241,98,107,73,32,38,4,158,190,231,18,217,248,235,27,178,107,225,187,242,204,61,
    151,106,129,252,240,243,31,10,110,200,131,23,120,210,148,153,146,158,158,42,131,149,160,77,73,177,201,69,103,15,147,174,29,91,169,85,45,60,69,104,97,65,19,237,117,46,217,93,38,219,118,238,210,177,201,
    16,229,70,66,76,243,179,19,62,215,177,212,135,43,47,55,66,55,214,172,223,106,28,246,120,95,240,247,26,201,205,201,146,253,149,151,187,33,9,203,223,33,196,228,171,233,243,116,31,172,22,171,224,5,207,118,
    239,238,29,101,145,87,219,27,82,7,203,144,64,178,16,128,128,174,170,170,146,202,202,74,87,151,203,203,203,181,168,102,72,135,11,9,55,76,68,128,30,104,19,13,38,187,66,2,145,34,208,180,73,142,246,6,175,
    92,187,89,254,92,180,82,30,125,241,99,189,124,156,81,223,184,91,158,150,242,138,74,57,247,148,33,50,114,216,64,29,182,241,155,10,239,240,254,225,252,245,207,101,50,241,227,233,106,133,139,193,250,38,62,
    220,104,184,187,180,220,48,163,223,159,123,243,11,21,226,49,74,11,242,151,223,249,218,227,152,251,135,25,179,254,210,55,17,226,193,39,87,223,245,130,251,161,122,183,139,10,155,73,215,78,173,101,96,191,
    30,58,47,98,161,111,186,255,53,45,164,199,158,121,172,62,9,248,102,207,205,137,245,26,99,6,18,72,114,2,248,158,35,132,171,186,186,90,170,149,128,206,221,195,3,2,26,75,217,241,137,132,73,62,65,76,218,125,
    139,173,227,136,189,215,53,19,164,147,61,219,149,202,220,7,127,241,219,90,219,0,229,177,178,236,245,106,249,205,200,3,36,80,15,1,199,31,3,196,89,182,208,103,174,177,207,246,144,9,211,91,249,60,150,172,
    59,241,192,148,230,205,154,168,16,141,218,155,12,253,113,104,158,223,68,253,216,218,85,248,71,105,157,44,57,217,153,178,230,231,151,117,28,114,251,129,231,235,144,144,58,153,246,236,120,225,129,203,229,
    204,17,131,164,231,49,151,233,155,13,253,229,243,183,31,235,88,231,53,201,18,172,44,2,239,119,86,102,186,44,252,246,25,89,177,102,147,28,57,234,102,127,197,146,114,127,217,132,239,148,16,242,253,115,97,
    235,245,141,72,206,65,73,201,133,157,22,125,162,92,83,83,35,37,37,37,82,253,227,99,82,52,247,127,58,132,99,205,191,150,75,97,97,161,58,25,78,119,221,239,64,94,201,73,192,185,116,140,138,143,127,223,103,
    231,31,157,220,94,110,122,179,139,207,99,241,188,147,30,232,120,30,29,182,141,4,18,140,0,226,158,235,19,207,232,210,214,237,37,117,122,214,75,45,67,247,175,211,143,150,3,122,118,209,161,25,207,78,248,
    32,160,120,134,129,123,198,191,171,150,210,235,38,133,249,121,13,18,208,16,240,238,34,30,118,112,131,225,157,143,188,85,167,125,220,65,2,36,16,152,128,225,137,54,114,193,43,237,125,21,202,56,198,119,18,
    72,116,2,20,208,137,62,130,108,63,9,152,132,64,255,62,251,232,245,161,209,157,63,22,174,148,7,159,245,237,173,112,239,46,66,74,250,30,119,165,251,174,70,109,227,209,228,135,159,114,67,163,108,176,48,9,
    144,0,9,144,128,249,9,80,64,155,127,140,217,67,18,72,8,2,88,174,110,242,55,191,72,154,10,3,65,72,5,19,9,144,0,9,144,0,9,196,43,1,10,232,120,29,25,182,139,4,146,144,128,175,208,142,36,196,192,46,147,0,
    9,144,0,9,196,57,1,46,99,23,231,3,196,230,145,0,9,144,0,9,144,0,9,144,0,9,196,23,1,122,160,227,107,60,216,154,36,34,208,181,168,76,58,183,172,16,171,248,94,217,32,137,80,176,171,1,8,148,87,217,100,238,
    202,28,217,85,206,63,215,1,48,241,16,9,144,0,9,68,149,0,255,34,71,21,55,43,35,1,145,188,172,26,121,237,138,5,114,124,223,109,196,65,2,65,17,40,171,180,201,245,19,186,202,139,83,91,7,149,159,153,72,128,
    4,72,128,4,34,75,128,33,28,145,229,75,235,36,80,135,192,115,151,44,162,120,174,67,133,59,2,17,200,74,183,203,83,99,23,203,209,189,119,4,202,198,99,36,64,2,36,64,2,81,34,64,1,29,37,208,172,134,4,64,160,
    121,147,106,25,121,208,22,194,32,129,6,17,24,59,100,125,131,202,177,16,9,144,0,9,144,64,120,9,80,64,135,151,39,173,145,64,64,2,109,154,85,6,60,206,131,36,16,136,64,219,230,156,63,129,248,240,24,9,144,
    0,9,68,139,0,5,116,180,72,179,30,18,80,4,172,86,222,48,200,137,208,112,2,22,222,112,218,112,120,44,73,2,36,64,2,97,36,64,1,29,70,152,52,69,2,36,64,2,36,64,2,36,64,2,36,96,126,2,92,133,195,252,99,204,30,
    38,16,1,75,106,97,2,181,150,77,141,8,1,71,185,56,237,187,35,98,154,70,73,128,4,72,128,4,194,67,128,2,58,60,28,105,133,4,194,66,192,122,224,178,176,216,161,145,196,37,240,255,237,221,91,140,156,101,25,
    7,240,103,102,118,246,208,237,66,45,149,163,212,90,208,144,16,162,49,209,152,24,19,176,17,47,136,94,120,163,220,152,96,194,133,94,128,198,4,18,240,120,129,81,49,70,13,2,74,68,193,24,189,80,137,53,26,16,
    130,98,20,4,81,78,197,130,130,4,4,169,136,130,180,93,102,79,51,206,59,117,214,174,72,15,219,253,190,153,239,157,223,151,44,115,216,153,247,125,159,223,51,221,254,251,242,205,78,231,111,215,68,231,177,
    143,86,183,0,43,39,64,128,192,8,8,8,208,35,208,100,37,18,32,64,128,0,129,162,5,106,181,90,180,39,142,142,217,117,39,119,223,240,49,22,233,182,131,64,174,2,2,116,174,157,85,23,1,2,4,8,16,40,73,32,133,229,
    70,163,17,173,83,223,19,59,95,185,45,154,205,102,108,234,126,213,235,222,106,85,82,11,76,83,178,128,0,93,50,184,233,8,16,32,64,128,64,110,2,41,64,167,208,60,61,61,221,219,121,78,97,122,114,114,178,23,
    160,237,68,231,214,109,245,36,1,1,218,235,128,0,1,2,4,8,16,88,181,64,10,200,105,167,121,124,124,60,102,102,102,122,193,57,221,55,49,49,209,219,149,22,160,87,77,235,137,67,44,32,64,15,113,115,44,141,0,
    1,2,4,8,84,65,32,133,228,254,174,115,10,206,233,72,161,218,41,28,85,232,158,53,174,70,64,128,94,141,154,231,16,32,64,128,0,1,2,43,4,82,88,222,127,183,121,255,235,43,30,232,6,129,12,4,4,232,12,154,168,
    4,2,4,8,16,32,48,12,2,66,243,48,116,193,26,202,16,16,160,203,80,54,7,1,2,4,8,16,24,1,129,78,167,19,233,171,31,164,251,151,35,80,186,18,71,76,192,239,151,25,177,134,43,151,0,1,2,4,8,172,181,64,10,205,237,
    118,59,218,119,95,29,181,207,206,68,124,110,67,44,45,45,245,194,244,90,207,101,60,2,195,32,32,64,15,67,23,172,129,0,1,2,4,8,84,88,32,5,232,133,133,133,152,155,221,19,181,133,217,136,249,189,209,106,181,
    132,232,10,247,212,210,15,44,32,64,31,216,199,119,9,16,32,64,128,0,129,3,8,244,79,219,152,159,159,239,133,230,254,67,103,103,103,123,1,186,127,219,37,129,156,4,4,232,156,186,169,22,2,4,8,16,32,48,0,129,
    254,14,116,218,133,238,31,115,115,115,189,211,58,210,247,28,4,114,19,16,160,115,235,168,122,8,16,32,64,128,64,201,2,41,36,247,206,129,238,158,7,221,63,210,109,225,185,175,225,50,55,1,1,58,183,142,170,
    135,0,1,2,4,8,12,72,96,255,192,188,255,245,1,45,199,180,4,10,19,16,160,11,163,53,48,1,2,4,8,16,32,64,128,64,142,2,2,116,142,93,85,19,1,2,4,8,16,32,64,128,64,97,2,2,116,97,180,6,38,64,128,0,1,2,4,8,16,
    200,81,64,128,206,177,171,106,34,64,128,0,1,2,4,8,16,40,76,64,128,46,140,214,192,4,8,16,32,64,128,0,1,2,57,10,8,208,57,118,85,77,4,8,16,32,64,128,0,1,2,133,9,8,208,133,209,26,152,0,1,2,4,8,16,32,64,32,
    71,1,1,58,199,174,170,137,0,1,2,4,8,16,32,64,160,48,1,1,186,48,90,3,19,32,64,128,0,1,2,4,8,228,40,32,64,231,216,85,53,17,32,64,128,0,1,2,4,8,20,38,32,64,23,70,107,96,2,4,8,16,32,64,128,0,129,28,5,4,232,
    28,187,170,38,2,4,8,16,32,64,128,0,129,194,4,4,232,194,104,13,76,128,0,1,2,4,70,75,160,86,171,45,23,188,255,245,229,59,93,33,144,137,192,88,38,117,40,131,0,1,2,4,8,16,24,160,64,189,94,143,189,155,207,
    142,7,155,39,197,216,88,51,214,117,111,11,209,3,108,136,169,11,21,16,160,11,229,53,56,1,2,4,8,16,200,95,32,5,229,177,177,177,24,223,184,37,230,154,199,68,247,70,76,76,76,68,10,213,66,116,254,253,31,197,
    10,5,232,81,236,186,154,9,16,32,64,128,192,26,9,164,128,156,130,114,10,204,51,51,51,49,62,62,30,141,70,35,166,166,166,122,151,107,52,141,97,8,12,149,128,0,61,84,237,176,24,2,4,8,16,32,80,61,129,254,14,
    244,244,244,116,76,78,78,246,118,157,211,142,116,10,210,118,160,171,215,79,43,62,184,128,0,125,112,35,143,32,64,128,0,1,2,4,14,32,208,223,133,78,59,209,41,56,167,35,221,39,60,31,0,205,183,42,45,32,64,
    87,186,125,22,79,128,0,1,2,4,134,67,160,31,150,251,151,195,177,42,171,32,80,140,128,0,93,140,171,81,9,16,32,64,128,192,200,9,116,58,157,229,154,5,233,101,10,87,50,20,16,160,51,108,170,146,8,16,32,64,128,
    64,217,2,237,118,59,58,79,252,42,98,231,15,162,86,31,139,206,59,46,119,26,71,217,77,48,95,105,2,62,72,165,52,106,19,17,32,64,128,0,129,60,5,210,206,243,210,210,82,44,62,121,119,52,238,250,74,212,238,252,
    114,204,207,207,71,10,213,14,2,57,10,8,208,57,118,85,77,4,8,16,32,64,160,36,129,20,158,83,80,78,129,121,110,110,110,121,214,217,217,217,94,168,222,255,180,142,229,111,186,66,160,226,2,2,116,197,27,104,
    249,4,8,16,32,64,96,208,2,41,36,47,44,44,172,8,208,173,86,171,23,172,5,232,65,119,199,252,69,8,8,208,69,168,26,147,0,1,2,4,8,140,144,64,10,201,189,83,56,22,23,151,171,94,236,94,119,10,199,50,135,43,153,
    9,8,208,153,53,84,57,4,8,16,32,64,96,16,2,41,68,239,191,219,44,60,15,162,11,230,44,75,64,128,46,75,218,60,4,8,16,32,64,128,0,1,2,89,8,8,208,89,180,81,17,4,8,16,32,64,128,0,1,2,101,9,8,208,101,73,155,135,
    0,1,2,4,8,16,32,64,32,11,1,1,58,139,54,42,130,0,1,2,4,8,16,32,64,160,44,1,1,186,44,105,243,16,32,64,128,0,1,2,4,8,100,33,32,64,103,209,70,69,16,32,64,128,0,1,2,4,8,148,37,32,64,151,37,109,30,2,4,8,16,
    32,64,128,0,129,44,4,4,232,44,218,168,8,2,4,8,16,32,64,128,0,129,178,4,4,232,178,164,205,67,128,0,1,2,4,8,16,32,144,133,128,0,157,69,27,21,65,128,0,1,2,4,8,16,32,80,150,128,0,93,150,180,121,8,16,32,64,
    128,0,1,2,4,178,16,16,160,179,104,163,34,8,16,32,64,128,0,1,2,4,202,18,16,160,203,146,54,15,1,2,4,8,16,32,64,128,64,22,2,99,89,84,161,8,2,4,8,16,32,64,96,160,2,181,90,45,22,143,222,26,127,63,225,236,168,
    213,27,81,175,215,35,221,231,32,144,163,128,0,157,99,87,213,68,128,0,1,2,4,74,20,72,65,185,209,104,196,226,230,179,226,201,163,223,24,205,102,51,142,233,126,9,208,37,54,193,84,165,10,8,208,165,114,155,
    140,0,1,2,4,8,228,37,144,66,114,250,26,31,31,143,245,235,215,247,118,158,83,152,158,154,154,234,133,106,33,58,175,126,171,102,159,128,0,237,149,64,128,0,1,2,4,8,28,145,64,58,93,163,31,160,39,39,39,151,
    3,117,10,210,2,244,17,209,122,242,144,10,8,208,67,218,24,203,34,64,128,0,1,2,85,17,72,33,57,133,229,137,137,137,94,144,78,235,118,14,116,85,186,103,157,171,17,16,160,87,163,230,57,4,8,16,32,64,128,192,
    10,129,126,136,238,116,58,189,251,237,60,175,224,113,35,51,1,1,58,179,134,42,135,0,1,2,4,8,12,82,64,112,30,164,190,185,203,18,16,160,203,146,54,15,1,2,4,8,16,200,88,32,237,60,119,90,207,69,103,247,174,
    222,121,207,181,77,167,57,255,57,227,126,143,122,105,62,72,101,212,95,1,234,39,64,128,0,1,2,71,40,144,194,115,187,221,142,165,123,174,143,198,85,167,71,237,170,51,98,113,113,177,119,223,17,14,237,233,
    4,134,82,64,128,30,202,182,88,20,1,2,4,8,16,168,142,64,10,208,11,11,11,49,55,55,183,188,232,86,171,213,11,208,253,115,162,151,191,225,10,129,12,4,4,232,12,154,168,4,2,4,8,16,32,48,40,129,254,238,243,252,
    252,252,138,0,61,59,59,27,75,75,75,131,90,150,121,9,20,42,32,64,23,202,107,112,2,4,8,16,32,144,191,64,10,209,233,148,141,180,11,221,63,82,160,78,167,117,216,129,238,139,184,204,73,32,207,55,17,62,127,
    115,68,173,153,83,159,212,50,40,129,165,61,131,154,217,188,4,8,16,168,148,192,255,134,229,180,251,44,60,87,170,133,22,123,24,2,89,6,232,165,135,207,61,12,2,15,37,48,60,2,157,199,47,25,158,197,88,201,64,
    4,58,179,15,12,100,222,35,153,180,179,235,170,136,230,13,71,50,132,231,86,88,160,187,249,28,157,165,238,78,243,11,115,209,126,254,174,125,149,116,186,183,159,186,188,251,91,57,214,69,103,98,44,58,245,
    90,133,43,180,244,35,21,232,236,189,255,72,135,24,186,231,103,25,160,135,78,217,130,8,28,162,64,251,233,43,14,241,145,30,70,96,120,4,218,207,126,127,120,22,99,37,165,11,164,0,221,238,158,234,220,222,211,
    189,178,103,254,63,243,119,127,43,199,51,215,69,123,161,22,237,241,110,120,118,194,104,233,125,49,97,177,2,94,210,197,250,26,157,0,1,2,4,8,16,32,64,32,51,129,74,6,232,249,69,255,43,40,179,215,97,37,203,
    153,95,168,228,31,159,74,90,91,52,1,2,213,19,168,249,171,186,122,77,179,226,67,22,168,228,41,28,143,61,51,21,255,220,211,140,141,235,255,251,110,223,67,174,216,3,9,172,145,192,61,143,205,28,246,72,187,
    95,108,28,246,115,60,129,64,95,96,144,175,159,221,173,177,216,48,237,103,110,191,23,46,87,10,164,176,92,239,238,41,252,107,211,88,60,53,209,136,230,88,45,54,118,207,123,246,177,222,43,157,220,122,169,
    192,238,86,53,255,94,172,228,22,218,226,82,45,46,249,238,41,47,237,130,123,8,148,36,112,205,45,39,198,159,158,94,119,216,179,61,178,107,93,60,218,253,114,16,88,141,192,77,247,30,179,154,167,173,201,115,
    110,186,119,227,154,140,99,144,60,5,82,128,110,118,183,228,166,39,235,49,189,190,30,235,166,107,49,57,190,47,84,219,137,206,179,231,107,85,213,207,238,171,230,207,150,74,238,64,167,166,125,243,214,19,
    226,185,221,205,184,224,156,39,226,148,227,94,12,111,240,93,171,151,178,113,94,78,160,251,246,152,216,245,252,120,124,251,182,227,227,138,27,79,126,185,135,29,244,254,243,175,62,45,182,95,124,95,172,159,
    242,1,3,7,197,242,128,101,129,95,252,97,67,92,117,243,73,203,183,203,190,114,241,119,78,141,55,191,246,133,120,205,177,47,150,61,181,249,134,92,32,5,228,90,247,7,228,120,179,22,71,77,119,186,193,185,214,
    219,141,78,1,122,172,154,155,139,67,46,158,207,242,190,176,125,115,252,246,145,163,42,89,80,173,177,229,221,41,23,56,8,16,40,81,224,228,77,173,56,239,204,167,99,235,113,173,238,63,254,252,17,44,145,190,
    114,83,189,56,95,143,95,62,180,33,190,247,235,227,186,159,234,54,216,147,74,211,63,250,62,112,214,95,227,245,155,247,118,119,27,219,149,179,180,224,226,4,210,111,226,72,71,187,221,137,254,79,180,122,55,
    89,247,194,245,96,95,182,251,22,230,191,67,35,144,94,43,207,237,109,198,246,187,55,197,173,59,94,49,52,235,58,220,133,8,208,135,43,230,241,4,8,16,32,64,128,0,1,2,35,45,80,201,115,160,71,186,99,138,39,
    64,128,0,1,2,4,8,16,24,168,128,0,61,80,126,147,19,32,64,128,0,1,2,4,8,84,77,64,128,174,90,199,172,151,0,1,2,4,8,16,32,64,96,160,2,2,244,64,249,77,78,128,0,1,2,4,8,16,32,80,53,1,1,186,106,29,179,94,2,4,
    8,16,32,64,128,0,129,129,10,8,208,3,229,55,57,1,2,4,8,16,32,64,128,64,213,4,4,232,170,117,204,122,9,16,32,64,128,0,1,2,4,6,42,80,217,79,34,28,168,154,201,9,16,32,64,128,0,129,21,2,219,175,253,120,108,
    121,213,177,177,113,195,76,116,63,66,37,158,249,199,243,113,251,239,118,198,149,215,255,52,30,252,227,19,43,30,235,6,129,170,11,248,32,149,170,119,208,250,9,16,32,64,128,192,16,8,204,63,122,67,247,35,
    188,95,250,63,182,119,239,153,141,109,231,126,44,126,191,227,209,33,88,165,37,16,88,27,129,151,190,210,215,102,92,163,16,32,64,128,0,1,2,35,40,112,193,39,191,22,167,111,251,80,92,248,169,175,119,63,218,
    187,29,51,235,215,197,249,231,190,115,4,37,148,156,179,128,0,157,115,119,213,70,128,0,1,2,4,74,22,120,242,233,103,227,225,63,63,21,95,189,238,39,113,235,237,247,247,102,223,250,234,227,75,94,133,233,8,
    20,43,32,64,23,235,107,116,2,4,8,16,32,48,146,2,141,70,61,78,127,221,230,94,237,183,253,102,199,72,26,40,58,95,1,111,34,204,183,183,42,35,64,128,0,1,2,165,11,108,123,235,27,226,212,45,39,198,57,111,127,
    83,156,112,236,198,88,88,88,140,31,223,114,103,233,235,48,33,129,34,5,188,137,176,72,93,99,19,32,64,128,0,129,17,17,248,127,111,34,124,232,209,39,227,253,31,254,162,55,16,142,200,107,96,148,202,116,10,
    199,40,117,91,173,4,8,16,32,64,160,96,129,75,63,127,125,124,233,27,63,234,205,50,222,28,139,61,179,173,130,103,52,60,129,242,5,4,232,242,205,205,72,128,0,1,2,4,178,21,216,249,200,95,226,162,207,124,43,
    118,60,252,120,108,221,124,124,92,121,217,7,179,173,85,97,163,43,32,64,143,110,239,85,78,128,0,1,2,4,10,17,72,191,190,238,35,159,190,166,55,246,153,111,57,35,222,251,174,183,21,50,143,65,9,12,74,64,128,
    30,148,188,121,9,16,32,64,128,64,198,2,63,191,227,129,248,225,141,119,244,42,188,252,210,243,98,253,244,84,198,213,42,109,212,4,4,232,81,235,184,122,9,16,32,64,128,64,73,2,23,93,118,109,180,230,230,227,
    196,227,142,137,79,92,248,190,146,102,53,13,129,226,5,252,22,142,226,141,205,64,128,0,1,2,4,8,16,32,144,145,128,29,232,140,154,169,20,2,4,8,16,32,64,128,0,129,226,5,4,232,226,141,205,64,128,0,1,2,4,8,
    16,32,144,145,128,0,157,81,51,149,66,128,0,1,2,4,8,16,32,80,188,128,0,93,188,177,25,8,16,32,64,128,0,1,2,4,50,18,16,160,51,106,166,82,8,16,32,64,128,0,1,2,4,138,23,16,160,139,55,54,3,1,2,4,8,16,32,64,
    128,64,70,2,2,116,70,205,84,10,1,2,4,8,16,32,64,128,64,241,2,2,116,241,198,102,32,64,128,0,1,2,4,8,16,200,72,64,128,206,168,153,74,33,64,128,0,1,2,4,8,16,40,94,64,128,46,222,216,12,4,8,16,32,64,128,0,
    1,2,25,9,8,208,25,53,83,41,4,8,16,32,64,128,0,1,2,197,11,8,208,197,27,155,129,0,1,2,4,8,16,32,64,32,35,129,127,3,155,42,228,171,31,226,235,179,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* UpmixerComponents::slide1_png3 = (const char*) resource_UpmixerComponents_slide1_png3;
const int UpmixerComponents::slide1_png3Size = 29829;

// JUCER_RESOURCE: slide1_png4, 30448, "../../Winter 2015/EECS 452/project/gui/Slide1.png"
static const unsigned char resource_UpmixerComponents_slide1_png4[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,208,0,0,1,176,8,6,0,0,0,128,75,82,91,0,0,3,240,105,67,67,80,73,67,67,32,80,114,
    111,102,105,108,101,0,0,56,141,141,85,221,111,219,84,20,63,137,111,92,164,22,63,160,177,142,14,21,139,175,85,83,91,185,27,26,173,198,6,73,147,165,233,66,26,185,205,216,42,164,201,117,110,26,83,215,54,
    182,211,109,85,159,246,2,111,12,248,3,128,178,7,30,144,120,66,26,12,196,246,178,237,1,180,73,83,65,21,213,36,164,61,116,218,64,104,147,246,130,170,112,174,175,83,187,93,198,184,145,175,127,57,231,119,
    62,239,209,53,64,199,87,154,227,152,73,25,96,222,242,93,53,159,145,143,159,152,150,59,86,33,9,207,65,39,244,64,167,166,123,78,186,92,46,2,46,198,133,71,214,195,95,33,193,222,55,7,218,235,255,115,117,86,
    169,167,3,36,158,66,108,87,61,125,30,241,105,128,148,169,59,174,15,32,222,70,249,240,41,223,65,220,241,60,226,29,46,38,136,88,97,120,150,227,44,195,51,28,31,15,56,83,234,40,98,150,139,164,215,181,42,226,
    37,196,253,51,49,249,108,12,243,28,130,181,35,79,45,234,26,186,204,122,81,118,237,154,97,210,88,186,79,80,255,207,53,111,54,90,241,122,241,233,242,230,38,143,226,187,143,213,94,119,199,212,16,127,174,
    107,185,73,196,47,35,190,230,248,25,38,127,21,241,189,198,92,37,141,120,47,64,242,153,154,123,164,194,249,201,55,22,235,83,239,32,222,137,184,106,248,133,169,80,190,104,205,148,38,184,109,114,121,206,
    62,170,134,156,107,186,55,138,61,131,23,17,223,170,211,66,145,231,35,64,149,102,115,172,95,136,123,235,141,177,208,191,48,238,45,76,230,90,126,22,235,163,37,238,71,112,223,211,198,203,136,123,16,127,232,
    218,234,4,207,89,88,166,102,94,229,254,133,43,142,95,14,115,16,214,45,179,84,228,62,137,68,189,160,198,64,238,215,167,198,184,45,57,224,227,33,114,91,50,93,51,142,20,66,254,146,99,6,179,136,185,145,243,
    110,67,173,132,156,27,154,155,203,115,63,228,62,181,42,161,207,212,174,170,150,101,189,29,68,124,24,142,37,52,160,96,195,12,238,58,88,176,1,50,168,144,135,12,190,29,112,81,83,3,3,76,148,80,212,82,148,
    24,137,167,97,14,101,237,121,229,128,195,113,196,152,13,172,215,153,53,70,105,207,225,17,238,132,28,155,116,19,133,236,199,231,32,41,146,67,100,152,140,128,76,222,36,111,145,195,36,139,210,17,114,112,
    211,182,28,139,207,98,221,217,244,243,62,52,208,43,227,29,131,204,185,158,70,95,20,239,172,123,210,208,175,127,244,247,22,107,251,145,156,105,43,159,120,7,192,195,14,180,152,3,241,250,175,46,253,176,43,
    242,177,66,46,188,123,179,235,234,18,76,60,169,191,169,219,169,245,212,10,238,171,169,181,136,145,250,61,181,134,191,85,72,99,110,102,144,209,60,62,70,144,135,23,203,32,94,195,101,124,124,208,112,255,
    3,121,118,140,183,37,98,205,58,215,19,105,88,39,232,7,165,135,37,56,219,31,73,149,223,148,63,149,21,229,11,229,188,114,119,91,151,219,118,73,248,84,248,86,248,81,248,78,248,94,248,25,100,225,146,112,89,
    248,73,184,34,124,35,92,140,157,213,227,231,99,243,236,131,122,91,213,50,77,187,94,83,48,165,140,180,91,122,73,202,74,47,72,175,72,197,200,159,212,45,13,73,99,210,30,212,236,222,60,183,120,188,120,45,
    6,156,192,189,213,213,246,177,56,175,130,90,3,78,5,21,120,65,135,45,56,179,109,254,67,107,210,75,134,72,97,219,212,14,179,89,110,49,196,156,152,21,211,32,139,123,197,17,113,72,28,103,184,149,159,184,7,
    117,35,184,231,182,76,157,254,152,10,104,140,21,175,115,32,152,58,54,171,204,122,33,208,121,64,125,122,218,103,23,237,168,237,156,113,141,217,186,47,239,83,148,215,229,52,126,170,168,92,176,244,193,126,
    89,51,77,57,80,121,178,75,61,234,46,208,234,32,176,239,32,191,162,31,168,193,247,45,177,243,122,36,243,223,6,56,244,23,222,89,55,34,217,116,3,224,107,15,160,251,181,72,214,135,119,226,179,159,1,92,56,
    160,55,220,133,240,206,79,36,126,1,240,106,251,247,241,127,93,25,188,155,110,53,155,15,240,190,234,248,4,96,227,227,102,243,159,229,102,115,227,75,244,191,6,112,201,252,23,89,0,113,120,18,181,225,134,
    0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,64,0,73,68,65,84,120,1,236,157,7,128,83,197,22,134,79,146,237,133,133,93,22,150,94,5,164,9,136,2,74,19,21,108,96,71,16,27,98,195,174,239,217,
    158,221,247,236,189,43,130,21,5,236,5,20,17,164,40,42,130,160,32,85,250,210,59,11,219,119,147,55,255,44,55,36,217,100,55,89,210,243,143,102,115,203,220,51,51,223,76,184,255,61,247,220,185,38,75,243,33,
    54,97,34,1,18,32,1,18,32,1,18,32,1,18,32,1,18,240,138,128,217,171,92,204,68,2,36,64,2,36,64,2,36,64,2,36,64,2,36,160,9,80,64,115,32,144,0,9,144,0,9,144,0,9,144,0,9,144,128,15,4,40,160,125,128,197,172,
    36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,49,64,2,36,64,2,36,64,2,36,64,2,36,64,2,62,16,160,128,246,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,199,0,9,144,0,9,144,0,9,144,0,9,144,0,9,248,64,
    128,2,218,7,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,28,3,36,64,2,36,64,2,36,64,2,36,64,2,36,224,3,1,10,104,31,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,12,144,0,9,144,0,9,144,0,9,
    144,0,9,144,128,15,4,40,160,125,128,197,172,36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,49,64,2,36,64,2,36,64,2,36,64,2,36,64,2,62,16,160,128,246,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,199,
    0,9,144,0,9,144,0,9,144,0,9,144,0,9,248,64,128,2,218,7,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,28,3,36,64,2,36,64,2,36,64,2,36,64,2,36,224,3,1,10,104,31,96,49,43,9,144,0,9,144,0,9,144,0,9,144,
    0,9,80,64,115,12,144,0,9,144,0,9,144,0,9,144,0,9,144,128,15,4,40,160,125,128,197,172,36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,49,64,2,36,64,2,36,64,2,36,64,2,36,64,2,62,16,160,128,246,1,22,179,146,
    0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,199,0,9,144,0,9,144,0,9,144,0,9,144,0,9,248,64,128,2,218,7,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,28,3,36,64,2,36,64,2,36,64,2,36,64,2,36,224,3,1,10,
    104,31,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,12,144,0,9,144,0,9,144,0,9,144,0,9,144,128,15,4,40,160,125,128,197,172,36,64,2,36,64,2,36,64,2,36,64,2,36,64,1,205,49,64,2,36,64,2,36,64,2,36,
    64,2,36,64,2,62,16,160,128,246,1,22,179,146,0,9,144,0,9,144,0,9,144,0,9,144,0,5,52,199,0,9,144,0,9,144,0,9,144,0,9,144,0,9,248,64,128,2,218,7,88,204,74,2,36,64,2,36,64,2,36,64,2,36,64,2,20,208,28,3,36,
    64,2,36,64,2,36,64,2,36,64,2,36,224,3,1,10,104,31,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,80,64,115,12,144,0,9,144,0,9,144,0,9,144,0,9,144,128,15,4,40,160,125,128,197,172,36,64,2,36,64,2,36,64,2,36,
    64,2,36,16,23,29,8,76,98,139,142,134,196,100,43,76,186,213,236,193,152,236,124,54,154,4,72,128,4,72,128,4,34,144,64,148,8,104,37,190,108,38,49,155,66,39,194,108,168,130,40,41,88,161,6,35,99,40,168,58,
    155,113,233,17,162,58,163,183,108,170,223,212,255,161,170,66,100,244,19,107,73,2,36,64,2,36,64,2,36,16,86,4,162,68,64,139,164,38,149,201,197,39,109,144,214,57,69,98,43,15,190,34,44,41,19,153,179,60,75,
    230,44,205,150,146,18,21,25,19,252,42,248,52,176,18,227,172,114,249,128,117,210,188,94,177,186,240,240,233,80,191,100,54,89,172,178,100,99,154,76,154,221,84,74,203,25,73,228,23,168,52,66,2,36,64,2,36,
    64,2,36,16,20,2,81,34,160,77,146,148,96,149,51,186,237,146,19,59,230,139,148,4,95,17,90,85,145,29,154,231,75,113,145,69,230,174,168,43,214,160,116,95,205,10,177,169,202,14,234,186,77,110,57,123,171,212,
    77,43,149,144,56,238,19,109,242,237,111,69,242,217,207,77,164,180,76,193,11,73,37,106,198,143,71,145,0,9,144,0,9,144,0,9,196,54,129,40,17,208,74,127,41,13,150,162,68,116,102,146,10,12,176,32,56,32,200,
    73,149,63,224,232,131,178,117,247,86,217,188,39,81,214,110,171,165,226,35,66,80,143,106,154,109,83,222,222,14,45,246,200,53,131,182,72,171,204,18,137,11,85,29,19,108,146,20,111,213,253,86,77,149,185,155,
    4,72,128,4,72,128,4,72,128,4,194,138,64,212,8,104,80,69,28,178,118,253,194,29,28,130,148,158,104,149,179,186,237,85,226,57,69,198,253,144,40,251,11,18,195,202,179,106,83,110,241,186,25,5,114,253,105,155,
    164,87,171,131,18,7,76,33,98,133,206,210,253,21,130,126,98,145,36,64,2,36,64,2,36,64,2,36,112,36,4,24,124,122,36,244,92,143,85,79,195,53,168,93,38,23,245,222,46,167,116,222,37,241,230,114,215,28,33,93,
    79,80,113,199,35,250,109,150,211,186,236,145,90,201,225,28,100,18,82,76,44,156,4,72,128,4,72,128,4,72,128,4,170,36,64,1,93,37,30,31,119,34,122,68,29,210,177,113,161,12,237,187,85,58,53,223,175,103,7,241,
    209,74,64,178,35,116,163,95,231,157,50,172,239,14,105,92,71,197,61,163,148,240,139,48,9,72,219,105,148,4,72,128,4,72,128,4,72,128,4,252,73,32,170,66,56,252,9,166,198,182,148,40,77,84,211,90,156,220,62,
    79,54,40,17,189,125,127,162,108,218,149,42,166,80,197,26,171,134,64,60,183,106,180,79,174,27,180,89,58,53,44,172,8,221,160,120,174,113,23,243,64,18,32,1,18,32,1,18,32,129,216,38,64,15,116,128,250,191,
    118,138,77,206,59,126,183,12,57,126,187,164,37,151,10,102,190,8,69,66,156,113,122,74,177,92,123,234,38,233,221,54,79,146,227,81,139,208,212,37,20,237,103,153,36,64,2,36,64,2,36,64,2,36,224,111,2,20,208,
    254,38,10,123,240,238,170,79,147,172,18,25,166,226,161,251,181,223,45,113,161,152,25,68,85,3,15,10,14,237,189,89,134,244,216,35,153,41,135,98,178,233,125,70,47,49,145,0,9,144,0,9,144,0,9,144,64,141,8,
    80,64,215,8,155,23,7,41,145,106,81,158,222,174,45,10,228,162,126,91,229,232,38,251,149,23,58,184,184,241,66,153,94,237,119,168,23,166,108,151,230,153,120,97,138,82,211,20,207,94,116,30,179,144,0,9,144,
    0,9,144,0,9,144,128,103,2,140,129,246,204,230,200,247,40,177,154,162,60,207,167,117,218,43,235,183,37,203,142,125,137,178,125,95,138,138,135,14,252,12,24,16,207,77,234,31,148,209,3,55,75,151,166,5,106,
    70,16,213,28,138,231,35,239,83,90,32,1,18,32,1,18,32,1,18,136,121,2,193,117,137,198,36,110,147,100,165,89,229,130,94,59,229,244,110,59,37,57,65,197,67,171,233,238,2,153,16,247,140,87,155,143,58,37,87,
    250,117,200,147,148,120,40,231,192,150,25,200,246,208,54,9,144,0,9,144,0,9,144,0,9,132,19,1,10,232,64,247,6,180,171,250,180,170,95,44,195,84,40,71,175,118,123,85,104,7,54,6,46,169,73,64,100,112,143,45,
    114,94,207,221,146,157,94,198,41,235,2,135,154,150,73,128,4,72,128,4,72,128,4,98,144,0,5,116,48,58,93,121,156,17,43,115,66,235,124,25,218,71,189,66,187,65,190,158,90,46,16,69,35,116,163,91,203,221,114,
    213,169,91,229,168,236,98,29,135,29,96,189,30,136,102,208,38,9,144,0,9,144,0,9,144,0,9,132,45,1,10,232,96,117,141,18,209,169,241,86,25,220,117,175,156,119,194,22,201,172,85,228,247,169,237,48,85,94,253,
    204,2,185,238,244,205,114,108,243,124,73,192,204,31,129,117,118,7,139,30,203,33,1,18,32,1,18,32,1,18,32,129,176,33,64,1,29,204,174,80,34,186,126,134,122,213,247,9,59,101,224,49,59,37,49,174,220,175,241,
    208,73,113,101,114,229,128,77,50,176,243,94,73,79,132,114,102,220,115,48,187,151,101,145,0,9,144,0,9,144,0,9,196,6,1,10,232,32,247,179,73,233,218,118,141,138,100,184,138,135,238,214,106,159,223,36,46,
    188,207,131,142,221,46,23,244,222,33,57,74,164,107,233,76,239,115,144,123,151,197,145,0,9,144,0,9,144,0,9,196,2,1,78,99,23,236,94,86,94,232,4,165,162,251,181,59,32,27,250,111,149,109,251,146,100,221,182,
    52,49,89,106,62,181,157,173,220,34,29,154,239,150,171,7,110,145,118,234,97,69,11,218,68,241,28,236,158,101,121,36,64,2,36,64,2,36,64,2,49,66,128,2,58,20,29,173,68,116,122,146,85,134,116,219,37,107,182,
    38,203,59,211,155,72,94,65,130,154,31,218,119,213,11,207,115,157,90,5,50,122,208,38,233,121,212,65,73,210,61,202,208,141,80,116,171,99,153,45,234,21,74,173,228,67,111,126,116,220,193,101,18,32,1,18,32,
    1,18,32,1,217,125,48,94,54,237,78,140,88,18,20,208,161,234,58,37,124,27,101,170,120,232,19,119,40,15,116,138,124,247,71,125,41,83,219,124,141,233,72,48,151,203,136,190,155,229,180,110,123,164,118,18,4,
    155,178,225,187,14,15,21,133,168,43,183,71,235,253,50,118,244,10,105,211,176,32,234,218,198,6,145,0,9,144,0,9,144,128,63,9,44,88,83,75,70,190,118,180,172,218,146,226,79,179,65,177,21,85,49,208,22,120,
    112,241,65,160,177,235,71,171,202,240,82,150,168,234,49,234,45,129,152,31,186,99,83,245,170,111,155,111,221,97,43,55,75,95,245,48,226,136,254,219,164,113,157,82,37,157,195,77,60,187,233,7,135,126,209,
    253,21,148,97,30,156,66,26,169,215,165,79,249,207,98,138,231,224,224,102,41,36,64,2,36,64,2,17,78,160,123,171,60,249,246,158,191,36,37,49,242,238,216,70,141,7,26,111,223,219,155,31,39,187,246,43,17,90,
    230,44,68,33,155,17,212,144,156,96,147,84,245,9,155,164,66,57,146,212,84,115,3,59,236,147,245,219,183,202,246,253,137,178,101,15,94,245,93,125,29,17,186,209,170,209,62,21,186,177,69,58,54,44,146,120,52,
    176,250,195,130,218,244,3,197,102,41,44,49,9,94,236,82,41,21,153,100,127,97,156,186,104,168,180,39,98,55,92,174,98,218,211,147,203,34,182,254,172,56,9,144,0,9,144,0,9,4,155,64,147,186,69,114,110,143,157,
    242,225,156,156,96,23,125,68,229,69,141,128,62,160,196,216,83,95,28,37,111,205,40,17,81,47,19,113,74,74,164,101,168,240,134,211,143,219,38,151,247,217,35,130,80,137,112,73,74,68,215,73,85,175,250,238,
    177,75,137,232,100,249,112,118,99,201,47,138,175,82,68,219,212,243,134,181,82,74,228,218,129,155,164,119,219,253,234,85,221,104,76,24,181,9,213,81,23,1,111,207,169,43,211,255,104,32,101,80,246,46,213,
    51,169,11,135,237,123,19,165,196,229,98,7,135,70,106,106,89,191,40,82,171,206,122,147,0,9,144,0,9,144,64,200,8,180,204,46,12,89,217,53,45,56,74,4,180,77,11,177,63,215,212,86,58,205,141,75,19,34,53,165,
    84,142,106,182,191,146,144,171,41,56,191,30,167,4,113,179,236,82,25,222,119,155,108,220,153,44,211,255,172,47,229,104,134,139,232,52,202,132,183,249,194,19,54,203,224,227,246,72,102,74,152,198,61,43,1,
    189,108,115,170,204,252,43,91,93,207,64,64,87,238,23,155,106,96,185,142,251,174,188,207,104,107,36,125,91,220,180,49,146,234,207,186,146,0,9,144,0,9,144,64,40,8,152,157,3,7,66,81,5,159,203,140,18,1,173,
    218,173,68,114,153,171,231,217,192,129,125,214,242,10,81,106,108,11,171,111,188,234,219,38,221,91,20,170,87,125,111,147,13,59,146,101,197,230,12,52,170,82,45,17,247,220,189,253,14,185,116,192,118,105,
    145,85,172,194,35,148,154,174,156,173,210,113,161,216,128,139,128,82,171,69,9,232,106,166,232,163,240,12,69,247,176,76,18,32,1,18,32,1,18,32,129,26,18,136,64,205,239,161,165,134,151,211,221,247,33,133,
    233,193,161,235,193,96,144,55,43,145,159,18,103,149,211,143,217,171,94,134,178,77,146,227,149,103,89,109,115,76,54,117,129,208,164,254,1,185,225,180,92,233,214,172,64,226,209,123,97,42,158,81,239,138,
    218,31,170,160,187,126,49,182,57,54,146,203,36,64,2,36,64,2,36,64,2,36,16,230,4,162,199,3,29,230,160,189,170,158,18,204,217,233,229,50,84,189,234,251,251,133,217,178,80,133,164,148,91,149,74,134,208,84,
    255,167,38,149,202,168,83,114,229,164,142,121,42,238,25,194,212,89,96,123,85,6,51,133,132,128,57,231,90,49,53,127,50,36,101,179,80,18,32,1,18,32,1,18,8,53,1,235,202,139,197,182,247,219,80,87,195,111,229,
    83,64,251,13,165,127,12,65,43,31,165,30,70,187,66,9,229,157,251,18,101,195,206,84,237,100,70,164,198,224,30,91,229,188,94,59,149,200,198,171,186,213,6,104,104,166,200,32,96,194,237,130,232,185,225,19,
    25,208,89,75,18,32,1,18,32,129,176,33,0,33,19,69,137,103,244,112,235,76,229,133,198,67,130,23,244,216,35,131,123,110,145,12,245,240,163,173,212,44,93,90,236,145,43,79,222,42,71,213,45,85,175,234,166,120,
    14,183,110,99,125,72,128,4,72,128,4,72,128,4,98,135,0,61,208,225,216,215,74,68,103,169,217,53,174,57,101,155,172,216,148,46,75,115,211,212,124,207,155,229,184,150,249,146,160,166,127,115,141,141,14,199,
    38,176,78,36,64,2,36,64,2,36,64,2,36,16,173,4,40,160,195,181,103,213,244,110,109,114,138,229,150,51,54,202,142,188,120,25,208,113,191,164,39,50,238,57,92,187,139,245,34,1,18,32,1,18,32,1,18,136,29,2,20,
    208,97,220,215,112,54,247,61,250,128,122,144,80,36,69,189,65,145,113,207,97,220,89,1,172,90,113,113,177,172,95,191,94,234,212,169,35,245,234,213,11,96,73,52,77,2,36,80,29,129,130,130,2,185,232,162,139,
    116,182,145,35,71,202,121,231,157,87,221,33,220,79,2,36,16,133,4,24,3,29,214,157,138,169,237,108,218,243,108,9,227,249,158,195,26,97,4,87,110,229,202,149,114,254,249,231,75,74,74,138,180,107,215,78,234,
    215,175,47,217,217,217,242,204,51,207,72,73,137,122,227,38,19,9,196,40,129,179,206,58,75,26,55,110,108,255,76,158,60,185,18,137,55,223,124,211,190,31,121,175,191,254,250,74,121,106,178,161,172,172,76,
    80,30,62,171,87,175,174,137,9,30,67,2,36,16,5,4,40,160,253,217,137,250,1,83,127,79,141,129,7,6,3,241,208,160,170,167,174,175,63,1,208,150,191,8,108,222,188,89,78,58,233,36,249,252,243,207,197,106,61,252,
    34,154,93,187,118,201,171,175,190,42,187,119,239,246,87,81,180,67,2,17,71,96,199,142,29,130,223,136,241,121,239,189,247,42,181,97,220,184,113,246,253,200,183,119,239,222,74,121,184,129,4,72,128,4,106,
    74,128,2,186,166,228,28,143,83,66,116,227,94,139,252,185,49,81,118,23,88,42,230,109,118,220,31,110,203,106,174,188,237,7,44,242,199,134,36,41,57,244,38,240,112,171,98,172,215,231,229,151,95,150,173,91,
    183,106,12,163,71,143,150,25,51,102,200,91,111,189,37,199,30,123,172,76,155,54,77,26,52,104,16,235,136,216,126,18,16,211,161,105,177,224,13,206,203,203,179,19,249,231,159,127,100,254,252,249,122,221,200,
    99,223,201,5,18,32,1,18,240,3,1,198,64,251,1,162,152,109,178,77,61,232,247,217,111,153,210,173,101,161,156,223,125,143,196,97,66,231,48,117,241,150,170,170,189,51,167,190,36,37,20,75,155,134,69,146,224,
    15,6,180,225,87,2,11,23,46,212,246,44,22,139,60,245,212,83,146,150,150,38,3,6,12,144,171,174,186,202,109,57,240,76,47,94,188,88,16,159,217,161,67,7,105,209,162,133,83,62,136,113,120,224,226,226,226,164,
    77,155,54,122,95,126,126,190,108,216,176,65,47,55,111,222,92,18,18,18,100,213,170,85,122,29,2,61,49,49,81,126,250,233,39,201,204,204,148,227,142,59,78,111,135,55,124,197,138,21,130,240,18,132,147,116,
    235,214,77,135,152,232,157,234,143,227,126,220,54,63,230,152,99,180,93,99,63,60,231,115,230,204,145,126,253,250,105,187,198,118,126,147,64,77,8,96,44,239,217,179,71,118,238,220,41,95,124,241,133,92,126,
    249,229,218,204,71,31,125,164,191,143,63,254,120,253,187,40,42,42,170,100,190,188,188,92,150,47,95,174,199,124,163,70,141,164,99,199,142,146,154,154,90,41,31,198,244,210,165,75,101,205,154,53,58,148,170,
    97,195,134,149,242,24,27,56,254,13,18,252,38,129,232,39,64,15,180,159,250,24,114,121,101,110,134,124,56,171,129,204,95,175,254,17,14,87,178,42,166,122,202,95,25,242,241,172,198,178,63,95,73,103,229,61,
    103,10,63,2,134,200,197,73,126,196,136,17,178,96,193,2,183,149,132,48,248,215,191,254,165,61,210,39,159,124,178,12,30,60,88,90,182,108,41,136,17,221,184,113,163,253,152,7,30,120,64,11,235,62,125,250,216,
    183,253,246,219,111,122,27,4,247,188,121,243,100,251,246,237,246,117,196,89,183,110,221,90,78,59,237,52,121,233,165,151,244,49,240,232,193,3,142,252,120,112,10,182,218,182,109,43,191,252,242,139,219,253,
    16,47,157,58,117,146,191,254,250,203,94,230,137,39,158,168,143,237,223,191,191,125,27,23,72,160,166,4,112,65,120,238,185,231,234,195,63,252,240,67,187,25,99,121,216,176,97,246,109,142,11,63,255,252,179,
    116,238,220,89,143,79,60,103,208,179,103,79,105,218,180,169,190,203,227,152,15,161,34,125,251,246,213,121,81,206,209,71,31,45,55,220,112,131,99,22,251,178,235,239,131,227,223,142,134,11,36,16,149,4,194,
    85,230,69,28,108,220,73,44,43,55,203,220,165,217,242,241,207,245,100,253,158,120,37,162,33,171,195,40,169,105,61,254,222,148,32,111,255,208,68,86,109,73,23,51,197,115,24,117,142,115,85,174,189,246,90,
    201,202,202,210,27,191,254,250,107,237,1,110,214,172,153,60,246,216,99,226,232,77,187,237,182,219,228,185,231,158,19,60,216,4,111,181,225,65,155,50,101,138,12,25,50,68,48,131,71,77,210,147,79,62,41,219,
    182,109,147,38,77,154,72,114,114,178,108,218,180,73,6,13,26,36,127,254,249,167,54,87,187,118,109,49,155,205,90,184,195,115,231,184,255,148,83,78,145,187,239,190,91,80,95,120,180,135,14,29,42,165,165,165,
    186,142,134,168,199,172,34,54,91,152,253,62,106,2,138,199,132,156,192,133,23,94,168,235,240,227,143,63,234,139,64,8,89,132,112,32,116,3,99,207,53,225,193,191,211,79,63,93,150,45,91,166,119,213,170,85,
    75,127,195,147,125,205,53,215,200,196,137,19,237,135,140,26,53,74,230,206,157,171,215,141,223,215,248,241,227,237,251,141,5,142,127,131,4,191,73,32,118,8,80,64,251,179,175,85,216,198,254,130,120,249,250,
    247,28,249,122,126,150,28,40,82,10,85,135,114,248,179,144,26,218,82,98,126,111,190,89,222,252,190,145,252,186,44,75,10,213,219,13,153,194,151,0,60,183,240,10,35,100,195,16,197,16,159,247,222,123,175,246,
    50,227,86,49,194,47,222,120,227,13,221,136,51,206,56,67,123,156,225,69,190,239,190,251,244,54,120,126,29,197,128,47,173,133,248,205,205,205,213,54,199,140,25,163,195,72,140,135,176,38,76,152,160,111,153,
    47,89,178,68,166,78,157,42,16,32,8,51,193,126,120,245,176,13,66,255,147,79,62,209,69,66,68,79,159,62,93,135,143,192,51,8,239,53,190,25,155,234,75,143,48,175,39,2,184,155,129,139,77,220,173,153,52,105,
    146,30,91,200,219,187,119,111,65,104,134,107,122,244,209,71,229,224,193,131,122,252,125,245,213,87,122,220,226,194,16,97,76,72,247,220,115,143,254,70,152,146,49,187,135,187,223,151,206,116,232,15,199,
    191,35,13,46,147,64,108,16,160,138,242,119,63,43,205,156,187,43,85,62,154,221,80,102,46,207,16,107,152,56,217,202,85,61,222,157,147,45,83,230,55,144,253,133,12,125,247,119,183,7,194,94,171,86,173,244,
    45,101,196,119,66,112,66,212,34,65,140,66,28,59,134,117,32,140,3,177,153,16,219,240,254,98,234,59,36,227,65,42,189,226,195,31,132,141,56,138,15,163,172,46,93,186,8,110,139,227,214,121,251,246,237,237,
    113,204,198,126,196,97,99,31,188,211,184,133,109,36,196,77,35,225,54,248,103,159,125,166,47,2,140,125,252,38,129,35,33,128,241,118,206,57,231,104,19,239,191,255,190,253,162,209,83,248,134,49,86,33,176,
    113,151,6,99,21,177,250,151,93,118,153,182,129,187,35,198,51,5,70,189,60,253,190,140,253,134,77,142,127,131,8,191,73,32,250,9,80,73,249,187,143,149,199,25,162,121,201,250,12,121,127,102,3,105,152,89,34,
    221,155,23,138,96,182,139,80,37,21,247,252,237,66,196,103,55,145,45,123,146,84,253,194,200,51,30,42,38,17,80,238,190,125,251,4,161,18,8,161,184,248,226,139,37,62,62,222,126,75,26,130,212,184,245,140,166,
    56,206,64,80,88,88,104,159,39,58,41,41,73,183,20,34,3,9,15,25,26,201,241,24,99,155,241,237,250,194,22,195,206,129,3,7,140,44,78,223,198,126,120,2,123,244,232,225,180,15,43,120,224,144,137,4,2,69,0,97,
    28,152,182,238,143,63,254,208,69,32,220,226,130,11,46,112,91,156,49,86,93,199,255,254,253,251,117,126,220,25,193,3,180,16,214,70,114,204,235,248,251,50,246,27,54,57,254,13,34,252,38,129,232,39,112,248,
    95,136,232,111,107,240,90,168,68,116,113,169,69,230,44,169,43,159,204,205,150,92,53,197,93,200,30,42,84,113,207,203,54,39,200,184,105,141,101,229,198,52,41,179,170,46,15,151,176,146,224,245,72,196,149,
    132,152,74,120,197,16,147,249,235,175,191,10,102,229,112,156,235,22,161,18,152,25,3,162,26,9,183,165,103,206,156,169,227,58,111,189,245,86,29,111,140,237,39,156,112,2,190,244,91,12,241,141,91,215,184,
    205,141,80,143,177,99,199,98,147,219,4,1,226,152,12,59,152,137,0,15,36,34,156,4,158,100,196,154,34,25,251,33,176,241,0,34,98,176,17,43,10,49,253,233,167,159,202,37,151,92,162,243,193,147,151,145,145,97,
    191,77,174,55,242,15,9,28,33,1,204,80,131,55,117,26,9,115,168,187,94,4,26,251,140,177,138,187,56,79,60,241,132,30,203,8,75,50,30,60,68,76,127,122,122,186,224,110,139,145,60,253,190,140,253,134,77,142,
    127,131,8,191,73,32,250,9,80,64,7,170,143,149,147,119,207,193,68,249,226,215,28,153,178,32,83,242,241,226,56,181,45,168,73,9,101,29,247,252,67,35,153,187,60,83,138,202,120,195,33,168,252,107,88,24,30,
    252,195,67,78,16,169,152,251,25,39,103,204,126,1,81,138,132,153,49,16,62,1,129,240,240,195,15,235,109,184,133,12,17,129,25,50,12,33,128,135,254,140,25,10,16,39,106,36,220,218,206,201,201,209,177,202,198,
    182,234,190,239,188,243,78,251,212,120,255,253,239,127,117,56,9,60,124,120,96,16,245,52,246,227,13,137,136,223,134,184,71,200,201,131,15,62,40,3,7,14,212,211,219,225,65,199,23,94,120,65,123,203,159,125,
    246,89,62,68,88,29,116,238,247,154,0,46,36,207,62,251,108,123,126,79,225,27,200,128,11,64,99,42,58,196,59,99,156,226,14,15,194,54,112,225,136,23,21,33,33,132,202,152,22,207,245,247,229,26,191,207,241,
    175,145,241,15,9,196,20,1,10,232,64,117,55,188,188,74,48,111,216,145,38,31,170,120,232,57,136,135,22,181,45,104,201,38,229,42,84,227,125,21,247,252,205,111,57,234,225,198,132,138,210,233,125,14,90,15,
    212,180,32,220,62,198,195,129,16,162,142,9,34,1,179,2,224,193,64,227,4,142,120,103,120,146,13,65,128,252,136,131,190,227,142,59,180,231,215,200,7,161,139,87,25,27,183,165,225,173,123,252,241,199,29,205,
    87,185,140,112,17,204,9,13,97,98,120,189,113,0,166,254,194,124,210,142,251,81,6,4,7,110,117,99,10,176,119,223,125,87,151,139,48,18,99,198,4,216,49,234,86,101,193,220,73,2,94,18,48,198,22,198,39,30,84,
    245,148,16,102,129,153,53,112,113,105,132,54,33,111,215,174,93,5,51,121,56,78,245,248,250,235,175,203,141,55,222,104,159,203,28,191,77,8,112,136,107,199,196,241,239,72,131,203,36,16,27,4,76,150,230,67,
    130,169,234,2,70,213,86,149,123,215,106,146,204,212,82,185,250,172,213,242,232,133,155,85,60,178,159,93,193,42,76,226,247,117,201,242,200,196,150,50,117,161,122,67,156,163,72,85,34,54,41,190,92,206,238,
    185,69,238,60,111,131,28,211,88,77,232,239,239,242,221,81,85,113,207,147,23,101,200,195,19,142,82,241,216,181,42,133,110,216,20,147,135,46,94,42,183,158,181,77,210,225,152,246,247,40,136,179,202,213,111,
    181,144,247,167,30,165,154,139,139,137,170,11,48,249,189,2,238,160,4,118,219,59,215,47,151,139,251,108,115,91,136,185,193,104,49,53,123,210,237,190,170,54,226,1,66,188,236,1,49,150,152,27,26,49,209,158,
    18,166,157,67,140,51,102,19,48,132,178,107,94,236,199,236,29,45,90,180,208,54,93,247,123,179,142,41,233,214,174,93,171,61,224,142,183,205,141,99,177,127,221,186,117,246,41,240,140,237,198,55,110,115,227,
    22,57,19,9,132,154,0,238,152,96,172,226,197,65,142,207,20,184,214,203,24,243,213,229,195,113,28,255,174,244,184,78,2,21,4,172,171,134,139,109,79,197,157,84,87,38,143,125,222,92,30,254,164,133,235,230,
    176,94,231,61,253,128,119,143,77,138,74,204,242,227,95,245,164,85,78,129,212,31,180,69,114,106,89,213,43,219,2,88,176,18,244,43,182,96,190,231,70,234,229,46,140,123,14,32,233,128,155,198,195,119,222,62,
    128,135,176,140,234,18,102,231,192,203,32,142,36,193,195,135,23,168,120,74,216,111,188,8,198,93,30,138,103,119,84,184,45,20,4,240,246,205,170,198,178,81,167,234,198,188,145,15,223,28,255,142,52,184,76,
    2,209,75,128,33,28,129,238,91,56,187,21,229,93,251,19,229,179,95,26,202,212,69,136,69,134,71,54,64,5,43,79,47,226,158,199,76,111,32,115,245,124,207,188,70,10,16,105,154,37,1,18,32,1,18,32,1,18,136,81,
    2,20,208,65,234,120,155,122,145,201,63,155,210,229,141,239,155,200,244,165,25,74,84,87,29,210,80,179,106,217,4,218,252,181,233,245,229,147,57,141,245,67,140,186,148,106,194,39,106,86,22,143,34,1,18,32,
    1,18,32,1,18,32,129,216,36,64,1,29,196,126,183,42,209,188,120,93,109,249,64,205,15,189,40,87,205,207,171,66,45,252,154,212,140,102,95,45,172,37,19,213,124,207,219,247,39,241,161,65,191,194,165,49,18,32,
    1,18,32,1,18,32,1,18,168,32,64,1,29,228,145,80,82,102,150,233,139,234,201,199,115,114,100,235,126,204,15,237,39,17,173,196,248,146,141,9,50,102,106,51,89,179,45,181,226,101,41,81,240,96,94,144,187,135,
    197,145,0,9,144,0,9,144,0,9,144,64,181,4,40,160,171,69,228,231,12,74,48,231,21,36,202,199,191,228,200,55,243,179,212,11,87,84,48,244,145,198,67,31,138,123,126,97,114,19,249,125,101,29,41,41,59,244,18,
    140,35,181,235,231,166,211,28,9,144,0,9,144,0,9,144,0,9,68,3,1,62,97,22,130,94,180,153,173,146,171,230,135,126,127,86,3,105,90,175,72,78,235,156,119,4,83,219,169,87,135,171,54,32,238,249,251,63,26,200,
    193,226,132,138,22,49,238,57,4,61,235,185,72,219,206,137,98,219,55,195,115,6,238,33,1,18,32,1,18,32,129,104,38,80,178,37,170,90,71,1,29,162,238,180,42,129,251,231,154,44,245,146,149,66,105,156,85,44,29,
    27,21,215,76,68,199,219,228,235,5,181,100,210,236,198,178,67,205,244,193,135,6,67,212,161,213,20,107,43,219,43,130,15,19,9,144,0,9,144,0,9,144,64,196,19,96,8,71,8,187,176,168,212,172,166,181,171,47,159,
    253,90,79,118,31,84,93,225,107,60,180,138,123,94,158,155,32,111,126,215,92,214,108,77,99,220,115,8,251,146,69,147,0,9,144,0,9,144,0,9,196,14,129,232,241,64,171,55,254,217,202,209,113,110,2,127,213,91,
    247,108,229,102,41,83,159,64,37,155,114,253,90,203,45,98,83,162,216,179,16,86,153,84,120,178,201,8,175,80,130,121,95,94,162,76,152,211,64,154,171,80,142,139,79,216,41,241,110,170,239,190,206,54,245,122,
    110,179,60,255,109,83,153,183,50,83,138,93,226,158,81,31,65,123,241,237,206,166,218,87,174,184,4,50,149,162,124,85,47,155,25,29,227,82,22,234,165,218,111,66,151,24,60,2,89,153,32,216,214,204,131,80,14,
    139,32,1,18,32,1,18,32,129,104,34,16,137,231,207,168,17,208,113,234,213,209,45,26,231,73,90,74,169,242,196,186,12,43,37,174,107,39,151,74,139,236,66,255,191,178,250,80,81,233,73,229,210,166,233,62,217,
    158,175,132,162,139,86,68,22,147,218,86,80,24,39,91,119,167,202,129,66,53,223,220,161,132,249,161,215,109,173,37,239,207,204,81,241,208,133,114,82,187,131,94,133,114,64,251,142,249,177,158,76,157,159,
    115,216,158,131,16,173,91,187,80,26,212,41,146,184,184,114,247,115,113,40,70,77,179,11,196,226,166,174,70,221,142,232,91,5,102,183,105,80,32,93,142,222,38,101,14,245,50,108,154,85,185,251,15,38,200,250,
    109,181,42,247,151,145,41,194,190,183,236,59,20,127,30,97,245,102,117,73,128,4,72,128,4,72,32,148,4,182,238,75,12,101,241,53,42,219,100,105,62,196,85,110,214,200,80,168,15,170,147,86,42,175,93,183,88,
    122,183,207,23,81,175,206,118,74,170,133,240,116,166,38,150,75,90,98,0,222,161,173,196,96,105,153,73,242,139,45,82,132,89,53,220,165,56,155,204,253,39,69,158,253,188,165,204,91,81,87,76,22,231,122,164,
    168,11,128,139,250,108,146,59,206,91,47,109,234,151,86,45,162,85,220,243,228,133,105,114,255,248,118,178,52,55,67,172,80,211,14,34,21,222,246,243,123,111,144,127,159,183,73,154,102,40,91,30,60,205,233,
    73,86,73,81,76,32,238,221,171,108,119,13,241,126,91,94,145,89,242,139,44,21,246,93,15,83,253,48,229,247,90,114,235,184,206,82,88,162,242,4,162,2,174,101,6,120,189,67,147,124,153,255,248,124,177,248,123,
    126,239,0,215,155,230,73,128,4,72,128,4,72,32,84,4,14,40,231,226,209,183,245,148,157,251,15,59,23,67,85,23,95,202,141,18,15,180,73,204,74,32,103,166,150,74,78,237,50,37,160,61,136,216,64,93,42,40,187,
    241,74,52,213,78,85,101,123,74,241,86,201,76,75,144,4,37,148,221,165,2,37,34,39,47,168,47,45,149,215,118,244,192,45,82,59,73,25,85,158,243,74,73,149,179,98,75,188,188,241,93,51,89,165,222,108,232,42,158,
    141,252,201,9,229,146,173,196,115,78,109,207,2,90,231,5,147,0,113,169,165,4,122,173,100,247,237,21,37,160,107,171,187,5,21,226,221,249,2,192,104,67,164,125,47,205,77,149,145,175,31,45,175,95,181,82,82,
    213,29,9,38,18,32,1,18,32,1,18,32,1,207,4,118,229,197,203,165,47,119,136,56,241,140,22,69,137,128,174,232,28,45,213,60,137,65,79,219,61,247,171,127,247,168,242,171,172,130,10,229,216,181,63,89,38,170,
    120,232,150,57,69,50,244,248,221,110,34,65,212,28,210,133,102,121,113,74,19,249,101,121,93,41,86,49,215,158,146,46,171,202,2,61,29,25,164,237,170,110,30,164,117,144,42,16,152,98,38,205,85,211,9,254,153,
    41,125,218,237,151,180,228,42,46,168,2,83,60,173,146,0,9,144,0,9,144,64,216,19,80,79,64,201,190,3,113,50,103,69,109,41,80,119,239,35,49,69,149,128,214,29,0,209,24,42,225,88,85,185,94,212,11,243,67,175,
    220,156,33,239,253,152,35,39,180,203,147,38,46,225,23,54,229,101,31,51,179,158,124,55,15,113,207,135,186,206,33,116,195,237,0,244,162,92,183,199,249,107,99,85,76,252,85,70,152,217,217,151,31,47,223,252,
    81,55,204,106,197,234,144,0,9,144,0,9,144,0,9,248,139,128,75,176,176,191,204,210,78,77,9,148,41,183,236,220,101,217,242,245,188,76,217,171,98,136,237,51,122,168,208,143,239,150,164,201,132,89,141,213,
    43,192,147,212,53,66,116,132,61,212,148,19,143,35,1,18,32,1,18,32,1,18,32,129,80,17,160,128,14,21,121,79,229,42,93,156,95,20,47,47,127,215,84,126,95,149,174,166,167,83,25,149,120,94,177,53,65,94,155,210,
    76,86,168,184,231,114,43,186,45,6,93,187,158,152,113,59,9,144,0,9,144,0,9,144,0,9,4,145,0,5,116,16,97,123,93,148,10,229,88,147,91,91,158,159,220,72,214,238,74,146,3,202,19,253,210,183,77,228,55,196,61,
    151,30,138,21,114,243,124,161,215,246,153,145,4,72,128,4,72,128,4,72,128,4,72,160,198,4,162,47,6,186,198,40,194,235,64,155,154,230,110,206,146,28,121,243,135,124,73,136,47,147,169,42,238,121,191,183,113,
    207,225,213,20,214,134,4,72,128,4,72,128,4,72,128,4,162,138,0,5,116,24,119,103,137,154,191,249,253,25,205,117,13,49,159,50,227,158,195,184,179,88,53,18,32,1,18,32,1,18,32,129,152,33,64,1,29,230,93,157,
    87,160,38,22,55,102,218,48,190,195,188,206,172,30,9,144,0,9,144,0,9,144,0,9,68,51,1,198,64,135,123,239,66,52,243,121,193,112,239,37,214,143,4,72,128,4,72,128,4,72,32,134,8,80,64,71,66,103,243,129,193,
    72,232,37,214,145,4,72,128,4,72,128,4,72,32,70,8,80,64,199,72,71,179,153,36,64,2,36,64,2,36,64,2,36,64,2,254,33,64,1,237,31,142,180,66,2,36,64,2,36,64,2,36,64,2,36,16,35,4,40,160,99,164,163,217,76,18,
    32,1,18,32,1,18,32,1,18,32,1,255,16,160,128,246,15,71,90,33,1,18,32,1,18,32,1,18,32,1,18,136,17,2,20,208,49,210,209,108,38,9,144,0,9,144,0,9,144,0,9,144,128,127,8,80,64,251,135,35,173,144,0,9,144,0,9,
    144,0,9,144,0,9,196,8,1,10,232,24,233,104,54,147,4,72,128,4,72,128,4,72,128,4,72,192,63,4,40,160,253,195,145,86,72,128,4,72,128,4,72,128,4,72,128,4,98,132,64,212,188,202,27,239,26,137,143,87,175,236,75,
    180,170,87,95,135,225,155,71,226,108,98,81,245,51,7,233,117,220,113,170,28,83,130,226,129,143,53,12,95,101,168,234,149,128,254,98,34,1,18,32,1,18,32,1,18,32,129,8,35,16,53,2,186,160,196,44,147,126,169,
    43,11,215,165,74,185,53,252,4,180,217,108,147,181,219,147,37,119,79,178,18,248,1,22,142,202,254,223,91,210,229,237,239,179,37,35,165,84,108,182,240,227,17,103,177,201,95,235,210,164,180,60,252,234,22,
    97,191,97,86,151,4,72,128,4,72,128,4,72,32,200,4,76,150,230,67,2,172,230,130,209,162,10,17,150,18,87,46,22,179,90,182,133,99,147,76,82,166,80,20,151,153,148,192,87,145,51,1,22,209,113,74,176,39,41,145,
    106,150,112,100,161,64,168,187,4,101,202,51,94,80,102,81,253,101,82,171,234,206,1,19,9,144,0,9,144,0,9,144,0,9,68,0,129,40,241,64,87,136,196,130,50,35,164,59,188,189,154,193,16,139,229,74,143,230,107,
    79,124,56,179,80,194,25,2,63,192,23,19,17,240,59,100,21,73,128,4,72,128,4,72,128,4,34,136,128,161,56,35,168,202,172,42,9,144,0,9,144,0,9,144,0,9,144,0,9,132,142,0,5,116,232,216,179,100,18,32,1,18,32,1,
    18,32,1,18,32,129,8,36,64,1,29,129,157,198,42,147,0,9,144,0,9,144,0,9,144,0,9,132,142,0,5,116,232,216,179,100,18,32,1,18,32,1,18,32,1,18,32,129,8,36,64,1,29,129,157,198,42,147,0,9,144,0,9,144,0,9,144,
    0,9,132,142,0,5,116,232,216,179,100,18,32,1,18,32,1,18,32,1,18,32,129,8,36,64,1,29,129,157,198,42,147,0,9,144,0,9,144,0,9,144,0,9,132,142,0,5,116,232,216,179,100,18,32,1,18,32,1,18,32,1,18,32,129,8,36,
    16,37,47,82,137,64,242,172,50,9,144,0,9,144,0,9,68,25,129,75,207,63,73,174,28,122,170,219,86,141,155,244,131,140,255,124,166,219,125,220,72,2,145,70,128,2,58,210,122,140,245,37,1,18,32,1,18,32,129,48,
    37,208,180,97,182,244,57,190,131,219,218,77,155,179,200,237,118,110,36,129,72,36,64,1,29,137,189,198,58,147,0,9,144,0,9,144,64,24,19,88,187,113,155,220,242,224,24,167,26,174,92,187,217,105,157,43,36,16,
    201,4,40,160,35,185,247,88,119,18,32,1,18,32,1,18,8,67,2,121,7,11,228,187,89,127,132,97,205,88,37,18,240,15,1,62,68,232,31,142,180,66,2,36,64,2,36,64,2,36,64,2,36,16,35,4,232,129,142,145,142,102,51,73,
    128,4,72,128,4,72,32,88,4,218,182,108,36,191,127,243,156,83,113,103,141,124,88,118,236,218,239,180,141,43,36,16,169,4,40,160,35,181,231,88,111,18,32,1,18,32,1,18,8,83,2,201,73,137,210,173,99,43,167,218,
    37,196,199,59,173,115,133,4,34,153,0,5,116,36,247,30,235,78,2,36,64,2,36,64,2,97,72,96,245,250,173,114,245,93,47,59,213,108,199,238,125,78,235,92,33,129,72,38,64,1,29,201,189,199,186,147,0,9,144,0,9,144,
    64,24,18,56,88,80,40,63,253,190,52,12,107,198,42,145,128,127,8,240,33,66,255,112,164,21,18,32,1,18,32,1,18,32,1,18,32,129,24,33,64,1,29,35,29,205,102,146,0,9,144,0,9,144,0,9,144,0,9,248,135,0,5,180,127,
    56,210,10,9,144,0,9,144,0,9,144,0,9,144,64,140,16,48,89,154,15,177,197,72,91,217,76,18,32,1,18,32,1,18,32,1,18,32,1,18,56,98,2,244,64,31,49,66,26,32,1,18,32,1,18,32,1,18,32,1,18,136,37,2,20,208,177,212,
    219,108,43,9,144,0,9,144,0,9,144,0,9,144,192,17,19,160,128,62,98,132,52,64,2,145,75,160,97,253,76,73,79,75,182,55,32,49,33,94,154,52,172,43,113,113,22,251,54,46,144,0,9,144,0,9,144,0,9,56,19,224,60,208,
    206,60,252,186,86,191,110,109,25,112,226,49,210,254,168,38,114,224,96,161,252,189,114,131,124,63,103,161,148,151,91,253,90,78,32,141,57,182,161,184,164,84,214,110,220,38,223,76,255,93,183,167,186,114,
    219,168,87,185,158,59,168,167,188,249,225,84,217,151,151,95,93,246,152,221,111,177,152,101,80,223,110,210,177,109,51,169,155,89,75,254,90,190,78,62,157,50,87,192,59,80,105,240,41,199,203,123,207,221,38,
    181,210,83,116,127,158,123,245,163,242,234,255,174,147,171,135,15,18,179,217,44,151,221,246,156,124,244,229,108,167,226,47,56,227,68,189,207,105,163,90,193,92,175,91,119,236,113,221,28,51,235,221,59,183,
    150,204,218,233,50,109,206,34,25,251,212,77,50,226,156,254,114,217,237,207,203,39,147,127,118,98,128,126,62,255,244,19,245,182,143,39,255,228,180,239,194,179,122,139,73,253,247,197,247,191,74,105,105,
    153,211,62,99,197,100,50,201,21,23,158,44,83,126,156,207,215,33,27,80,248,77,2,36,64,2,33,34,64,1,29,32,240,163,47,61,67,30,187,243,82,229,221,75,113,42,97,201,138,245,114,229,191,95,148,69,75,215,58,
    109,247,180,114,108,167,214,210,56,39,75,126,255,235,31,191,137,148,156,236,58,210,163,75,27,217,188,125,183,44,88,188,218,83,209,226,169,13,59,119,239,151,243,174,121,76,126,93,184,194,227,177,216,241,
    208,173,195,101,232,224,62,114,176,160,72,94,125,111,74,149,121,99,117,39,250,119,220,211,55,107,241,236,200,224,129,91,134,73,239,243,239,18,176,174,42,121,219,151,174,54,30,249,215,8,45,158,167,206,
    94,40,95,76,253,85,218,170,139,157,107,71,156,46,197,197,165,242,238,167,223,203,178,85,185,174,135,104,193,157,152,88,249,85,188,231,92,245,63,153,60,35,118,5,244,19,247,92,33,29,219,52,147,86,125,174,
    150,56,139,69,226,227,227,180,24,118,5,152,148,152,32,31,189,252,111,189,249,147,41,63,139,205,118,248,249,237,241,47,220,46,22,117,108,118,151,17,178,119,255,65,215,67,245,122,187,86,141,229,141,199,
    174,151,87,212,111,233,95,255,29,231,54,15,55,146,0,9,144,0,9,4,135,0,5,116,0,56,159,117,242,113,242,242,35,215,106,203,240,36,66,164,100,40,79,223,168,97,167,74,167,118,205,229,203,177,247,73,231,129,
    55,201,254,3,213,123,101,111,191,250,108,185,104,112,95,25,58,250,9,249,92,9,29,127,164,158,93,219,202,167,111,222,163,61,100,195,111,122,218,173,73,119,109,72,75,77,146,97,67,250,202,126,229,77,158,191,
    248,31,183,199,57,110,124,249,221,201,146,119,176,64,190,252,254,55,199,205,92,62,68,160,78,70,154,26,11,247,74,131,122,153,178,240,239,53,242,246,164,31,4,94,198,27,46,63,83,47,87,39,158,97,198,155,190,
    116,7,28,97,26,72,151,43,79,243,238,189,7,228,148,222,199,232,245,95,23,173,144,27,238,123,67,47,123,250,51,70,221,81,40,40,42,182,239,198,93,137,88,77,253,123,118,18,124,110,121,104,140,228,171,11,197,
    64,166,229,171,115,229,253,207,126,84,23,58,167,201,51,111,126,225,183,11,106,95,235,220,166,97,129,116,106,118,80,226,45,135,47,0,124,181,193,252,36,64,2,177,77,96,223,129,56,249,105,101,109,201,47,138,
    220,112,65,10,232,0,140,225,103,238,27,165,173,62,254,234,39,114,255,51,227,237,37,188,49,254,59,153,63,249,57,21,210,209,84,110,187,234,108,121,232,249,143,228,170,225,3,181,215,10,251,144,206,25,216,
    83,114,234,213,145,207,190,251,69,206,56,169,187,180,110,222,80,111,31,212,175,155,212,83,33,33,111,127,252,131,156,53,224,56,189,252,245,15,243,228,210,243,78,210,158,171,239,102,46,176,123,181,7,156,
    208,89,16,62,241,195,79,139,100,205,134,109,74,180,55,147,19,187,183,151,191,150,173,211,177,173,167,245,239,166,109,182,106,222,64,174,187,228,116,153,253,219,223,130,147,179,99,242,212,134,215,222,255,
    86,18,148,135,173,172,172,220,158,253,232,214,77,100,96,223,174,170,78,25,178,236,159,92,153,248,245,28,29,166,130,124,127,170,50,83,83,146,116,94,180,21,225,43,115,23,44,151,75,206,237,47,123,246,29,
    148,241,95,204,148,93,123,242,244,254,211,84,27,251,244,232,160,195,67,16,38,178,116,213,70,123,25,209,184,240,175,107,206,213,226,121,241,242,245,114,226,121,119,218,111,221,99,44,24,222,201,154,246,
    37,98,152,207,63,253,4,125,193,182,125,215,62,249,106,218,111,178,113,243,78,65,204,243,144,83,123,8,188,161,72,23,171,112,131,66,37,134,59,171,11,59,164,186,117,106,233,49,129,62,244,20,118,243,208,11,
    31,85,10,33,104,218,40,91,143,215,117,74,76,227,184,193,170,12,180,99,211,214,93,114,220,49,71,201,201,42,148,9,33,12,83,102,44,80,99,226,240,221,151,172,58,233,234,2,177,143,52,82,119,89,112,161,85,47,
    43,67,197,96,103,203,123,159,206,144,108,181,140,223,0,108,126,175,194,35,146,147,18,228,242,11,78,150,3,249,133,242,225,23,179,116,125,17,110,114,222,233,189,228,152,163,91,200,182,157,123,117,216,9,
    60,184,70,125,150,253,179,81,106,215,74,85,23,26,237,100,137,10,161,154,240,213,225,176,20,199,99,247,236,59,160,143,61,89,93,72,212,82,119,141,240,219,218,178,189,194,171,142,208,21,132,214,124,62,245,
    151,74,237,190,242,162,83,212,120,45,208,23,60,186,66,46,127,208,238,163,90,52,84,199,237,211,109,112,217,237,118,181,107,135,150,210,67,93,228,186,38,252,246,95,24,247,181,140,28,122,170,12,63,187,175,
    60,247,214,151,174,89,2,186,110,81,130,249,173,107,86,200,136,190,177,123,193,20,80,192,52,78,2,49,70,96,239,193,120,185,252,149,163,229,251,191,178,34,178,229,20,208,126,238,54,156,172,91,43,97,138,244,
    236,152,47,156,172,35,166,21,161,12,175,254,111,180,116,87,162,2,233,133,7,175,214,98,102,204,71,223,139,213,106,149,219,174,62,71,137,221,163,229,143,37,171,229,73,117,107,24,39,110,164,81,195,6,234,
    239,73,223,252,36,16,94,56,193,222,119,243,69,130,91,248,72,15,222,58,76,174,186,235,101,249,224,179,153,114,217,249,3,228,18,37,172,47,190,233,25,45,160,251,247,234,44,207,63,112,149,174,15,196,236,85,
    42,206,21,169,91,199,86,250,51,250,222,215,156,4,180,167,54,160,188,244,212,138,7,206,32,204,199,124,52,85,215,245,199,137,143,106,49,92,86,94,174,5,33,4,218,69,215,63,169,196,89,63,93,239,145,255,126,
    65,86,173,221,172,219,138,56,207,162,226,18,201,80,156,144,46,57,175,191,116,63,243,54,185,107,244,249,242,232,157,151,41,129,93,174,47,8,112,97,112,172,218,142,188,209,154,16,59,139,244,218,7,83,236,
    226,25,235,134,120,198,114,77,250,18,194,111,246,39,143,59,133,133,32,156,232,146,155,159,85,119,61,10,228,149,255,94,7,211,58,97,92,204,87,225,65,16,185,72,136,195,198,126,92,84,121,18,208,247,223,60,
    76,10,10,43,60,208,86,171,77,238,121,242,61,233,116,232,184,127,214,109,145,166,74,0,35,212,3,34,20,222,210,123,110,184,80,141,143,3,250,46,12,142,29,126,227,83,42,214,247,55,105,222,184,158,204,253,252,
    105,169,159,93,91,151,125,199,181,231,105,111,56,132,51,196,180,97,19,113,193,16,208,25,233,169,186,110,184,16,128,128,198,88,158,57,233,49,61,134,113,17,134,223,10,108,28,123,230,173,246,99,33,92,113,
    225,105,164,102,74,232,63,241,218,167,78,199,26,251,78,82,23,158,168,255,45,87,14,145,102,141,234,233,118,33,70,252,253,231,111,83,119,82,10,101,156,186,67,224,154,218,183,105,42,179,20,171,194,162,202,
    227,20,94,253,201,239,60,168,99,217,7,12,187,215,233,208,21,51,95,119,90,71,248,134,145,78,237,211,85,30,187,235,50,99,213,254,253,177,138,169,198,69,101,238,150,157,210,65,149,27,236,244,159,115,214,
    83,60,7,27,58,203,35,129,40,38,80,39,173,84,38,221,190,84,218,223,214,67,182,236,73,140,184,150,114,22,14,63,119,25,110,199,35,65,248,185,19,32,219,118,236,213,251,27,30,202,167,87,60,252,233,123,225,
    221,242,221,172,63,244,222,219,31,25,171,194,62,110,212,2,200,200,142,219,254,167,93,250,128,246,68,225,4,252,220,253,87,185,125,200,203,200,143,239,255,189,52,73,110,83,182,144,16,90,2,155,174,15,59,
    121,106,195,232,75,206,208,226,29,2,126,232,224,222,218,6,188,201,23,170,240,146,38,61,71,74,199,83,110,212,15,74,158,119,90,47,237,61,212,25,92,254,64,88,61,55,246,75,57,243,242,135,180,231,179,75,251,
    150,90,72,157,171,142,65,26,161,68,94,63,213,238,129,151,60,16,213,226,25,109,133,55,24,201,24,19,122,197,135,63,158,250,242,161,219,134,107,33,60,235,183,37,114,134,226,252,200,11,19,148,247,54,81,198,
    170,88,235,133,75,215,232,62,55,194,13,142,59,235,54,25,117,231,139,114,221,127,94,213,37,67,56,99,76,172,217,184,213,99,77,16,27,143,49,128,15,66,140,28,83,139,38,245,229,150,135,199,8,236,162,175,33,
    158,49,206,26,116,191,76,186,157,113,171,246,66,255,239,142,75,245,33,15,220,50,92,139,103,163,158,104,15,196,179,183,233,63,55,94,168,197,51,234,158,115,236,165,242,176,106,103,227,6,117,229,230,145,
    131,237,38,48,171,8,24,60,250,242,36,189,237,28,245,80,43,146,113,236,47,127,44,215,251,111,126,240,77,185,228,150,103,245,5,46,46,100,113,225,2,143,57,46,6,19,148,13,220,41,113,125,184,15,225,54,136,
    29,95,179,161,50,43,220,245,249,248,181,187,85,72,142,168,11,134,167,245,5,177,46,248,208,31,252,198,28,63,142,251,198,77,154,166,251,160,219,25,183,200,143,191,44,214,187,54,108,218,97,191,104,89,173,
    202,67,60,116,176,211,101,253,232,121,14,54,243,72,44,15,161,253,142,159,72,108,3,235,28,60,2,201,9,229,114,65,207,29,193,43,208,143,37,209,3,237,71,152,48,133,147,27,78,180,184,69,142,217,55,16,210,224,
    152,186,117,106,165,87,151,175,174,62,60,1,94,219,188,67,113,210,184,21,238,106,235,142,255,189,45,43,85,158,233,63,255,165,111,233,226,132,12,175,158,145,112,242,118,77,184,205,157,171,60,120,72,7,148,
    55,210,213,38,182,123,106,195,141,247,191,46,157,213,173,242,251,213,3,110,70,194,237,105,120,180,199,191,248,111,73,73,62,124,5,89,213,5,2,110,61,195,99,183,100,197,6,57,94,61,204,152,165,194,6,32,220,
    186,119,62,74,38,190,122,167,172,223,180,93,222,253,100,134,18,61,31,59,121,99,141,50,163,229,27,15,234,33,156,167,171,186,19,48,121,198,252,42,155,229,75,95,158,120,92,123,109,235,254,167,199,235,7,61,
    49,59,4,30,230,132,232,106,217,36,71,135,80,64,36,34,161,255,113,103,164,113,78,69,76,52,194,35,220,141,9,157,249,208,159,27,239,127,195,126,33,103,216,49,246,227,193,210,177,19,166,233,213,27,175,56,
    75,127,247,239,217,81,182,47,252,192,200,162,195,139,240,251,232,162,66,21,144,220,213,211,158,217,97,1,130,213,49,33,44,9,233,169,123,70,202,19,119,95,174,67,161,176,142,49,250,251,159,171,176,40,63,
    47,88,166,103,199,64,136,210,189,55,93,100,191,163,99,28,251,240,243,19,100,198,220,191,116,30,228,207,83,191,9,244,5,132,51,66,165,16,190,129,132,248,116,215,4,113,142,118,184,155,45,5,33,90,216,135,
    80,148,111,85,120,149,107,202,232,112,145,211,216,46,94,253,185,190,243,130,124,136,73,47,81,255,134,76,124,229,78,65,8,207,111,139,86,170,135,118,31,181,95,80,22,169,7,61,141,139,92,87,187,129,92,111,
    152,121,56,238,61,144,229,208,118,100,18,48,68,179,108,47,21,243,198,82,81,55,27,165,188,123,138,192,75,231,242,211,141,204,6,178,214,1,35,208,160,118,229,59,120,1,43,204,143,134,233,129,246,35,76,152,
    130,120,158,174,78,200,72,8,213,192,244,86,70,234,213,173,157,220,58,170,194,99,247,221,172,133,122,51,102,61,64,170,155,89,145,47,231,208,237,108,189,209,225,79,92,92,229,107,157,150,77,115,116,14,132,
    92,100,29,42,7,183,202,141,19,58,226,75,145,60,218,140,63,124,219,88,103,60,244,199,83,27,112,219,125,214,175,75,28,179,202,187,207,222,170,227,84,255,251,210,68,233,117,206,191,245,148,104,200,224,110,
    182,6,227,192,226,146,50,189,88,122,40,142,218,108,54,201,93,143,191,43,152,205,225,245,15,190,213,49,171,15,221,118,177,138,7,239,97,28,18,149,223,198,221,133,91,85,200,0,98,120,141,52,244,172,62,2,207,
    60,82,77,250,18,2,12,169,69,211,250,250,27,66,175,193,161,80,159,221,251,242,244,182,35,249,131,88,96,196,18,227,131,144,34,199,180,107,239,97,251,70,61,48,125,227,189,79,125,160,63,184,251,1,1,142,48,
    21,99,182,9,119,245,132,77,123,219,15,141,109,215,113,108,216,71,29,96,255,238,39,222,211,15,243,57,138,93,8,81,164,210,210,138,152,125,179,169,226,159,60,227,88,163,108,157,233,208,159,151,223,249,70,
    47,221,170,68,240,192,62,93,180,128,117,119,81,129,187,76,27,54,239,176,135,81,57,218,120,250,141,207,181,224,29,174,30,186,197,76,43,190,36,60,224,249,211,167,79,10,158,123,0,227,147,85,248,199,142,93,
    135,103,99,1,135,21,107,54,249,98,210,47,121,157,47,95,252,98,146,70,162,136,0,4,52,254,73,47,205,183,138,101,95,185,152,247,150,171,223,176,77,84,148,151,246,72,71,81,83,217,20,63,19,136,212,11,172,202,
    170,204,207,96,98,209,220,13,247,189,46,127,126,247,146,244,57,190,131,172,154,253,134,138,49,93,173,69,97,183,142,45,181,151,9,183,180,199,127,62,83,163,89,163,30,144,66,44,242,215,227,238,87,130,34,
    95,90,53,171,136,159,54,184,25,97,32,119,142,62,79,121,104,91,235,219,212,198,190,73,175,221,37,211,212,131,130,152,137,1,183,153,167,255,252,167,14,27,65,124,50,18,226,77,33,218,141,219,214,198,113,198,
    236,31,167,168,7,156,16,103,141,121,101,231,204,91,106,236,214,223,238,218,128,135,2,141,88,89,35,51,226,87,33,134,214,171,91,204,77,212,237,115,148,87,147,132,135,39,111,190,114,176,124,164,4,3,60,209,
    40,39,78,149,23,205,9,222,73,204,106,114,170,18,105,191,126,249,180,242,22,175,84,83,203,37,107,241,92,162,46,50,78,30,126,175,142,97,7,3,95,250,18,51,53,192,230,91,79,220,164,61,168,120,40,13,49,231,
    51,127,93,172,226,103,119,5,13,233,247,106,156,111,223,185,79,197,35,55,215,30,211,114,229,245,190,90,61,72,122,221,61,175,105,113,140,185,144,251,41,239,180,107,61,141,10,174,221,184,93,47,246,237,209,
    81,223,153,48,46,42,140,253,31,168,118,158,173,46,178,250,170,7,79,151,41,15,51,158,29,64,8,7,226,239,187,180,63,124,65,98,228,119,252,54,142,125,233,161,107,228,76,229,105,198,115,11,255,86,83,195,33,
    214,122,166,186,72,196,116,147,248,253,34,141,155,88,225,81,119,60,222,88,94,190,122,147,126,64,215,88,55,190,177,29,15,9,63,113,247,21,50,225,149,59,116,92,54,226,197,189,73,55,93,49,88,135,224,224,98,
    24,49,235,207,220,119,165,62,236,145,23,39,106,110,224,249,253,236,69,222,152,98,30,18,8,10,1,237,125,86,37,149,148,217,164,92,57,19,141,201,91,241,168,4,222,201,100,142,238,127,202,131,194,152,133,132,
    31,1,14,235,0,244,9,30,114,234,122,250,45,242,194,67,87,43,239,236,177,90,204,160,24,220,30,70,252,239,83,111,124,102,47,245,161,231,62,210,39,88,136,70,220,102,158,167,110,215,58,62,129,255,214,71,211,
    148,72,232,169,69,21,4,196,99,175,124,108,63,22,30,76,188,168,4,179,9,44,80,211,202,93,173,30,34,68,122,247,211,233,250,1,62,60,16,134,91,209,152,249,224,130,51,79,180,31,55,87,197,125,226,182,53,102,
    8,64,28,235,63,235,183,84,18,208,158,218,0,35,120,232,108,220,196,31,180,189,7,85,253,95,127,244,122,153,240,242,29,178,82,121,197,22,43,225,129,219,206,190,166,222,199,183,215,2,8,98,9,15,18,194,243,
    246,245,180,121,190,154,137,184,252,103,95,245,95,185,123,244,5,122,86,22,136,73,36,204,234,240,168,234,103,220,186,95,155,187,205,231,190,68,8,5,238,62,60,168,230,225,70,255,131,39,102,117,129,231,55,
    152,9,2,240,172,145,15,203,235,106,238,98,60,128,138,11,45,60,28,107,196,12,143,85,194,180,243,209,205,101,212,69,3,117,61,17,239,139,88,109,227,193,89,76,143,247,230,135,223,201,53,23,159,166,47,4,112,
    193,97,60,160,139,118,124,169,102,22,65,252,243,255,254,125,169,126,72,22,30,97,60,92,104,120,151,171,106,171,227,177,120,169,12,234,118,166,154,126,18,2,26,233,37,229,133,126,235,201,155,228,160,10,105,
    193,195,123,158,210,12,21,62,117,122,255,99,165,183,10,155,249,121,254,50,167,108,207,189,245,149,250,125,246,210,191,231,49,143,223,168,31,242,117,202,224,97,197,240,198,224,238,21,102,201,49,18,166,
    133,196,133,17,102,88,153,161,46,150,195,41,153,18,213,67,141,230,164,112,170,18,235,18,76,2,184,54,84,23,136,101,106,150,165,82,27,28,56,248,168,187,72,230,150,146,154,168,20,116,188,89,14,221,252,209,
    219,249,39,6,9,148,108,21,91,121,197,221,209,104,105,189,201,210,124,136,119,110,145,104,105,113,144,219,145,144,16,39,109,90,52,210,243,33,67,148,186,75,120,88,9,15,148,109,218,186,91,159,200,93,243,
    96,63,98,84,15,22,20,106,113,48,247,243,167,244,73,25,15,106,225,86,110,154,154,25,195,221,156,193,152,161,3,222,102,119,51,4,160,12,188,101,16,161,22,158,234,101,212,195,104,3,166,160,195,203,87,112,
    33,224,152,16,235,153,89,59,205,62,237,151,227,62,95,150,241,2,10,196,78,239,86,194,11,194,37,214,18,102,126,192,84,109,136,107,135,160,115,76,53,237,75,140,43,8,74,35,28,194,209,102,48,151,49,131,6,132,
    161,113,71,197,177,108,196,206,227,131,153,52,214,254,60,86,79,65,215,248,248,43,244,180,116,200,135,241,157,146,156,224,20,198,224,120,60,150,17,19,188,115,207,126,167,233,21,93,243,120,90,7,35,132,147,
    56,254,78,48,5,32,238,240,192,251,124,237,61,21,15,88,186,59,30,253,181,122,206,91,250,119,136,59,6,129,76,96,180,252,199,215,101,93,238,118,233,63,244,158,64,22,229,214,118,193,248,89,234,14,154,243,
    184,52,50,90,58,206,80,29,117,156,177,202,239,24,35,128,127,175,202,202,202,36,47,47,79,74,230,62,47,13,22,61,42,54,147,69,54,94,190,70,178,179,179,37,41,41,169,218,7,220,99,12,89,204,53,215,182,122,164,
    88,119,29,118,30,58,2,120,126,114,83,185,251,195,86,142,155,34,98,153,30,232,0,119,19,110,197,35,6,180,170,4,97,90,213,173,117,236,71,172,165,187,132,147,190,227,137,223,49,15,30,24,172,42,97,126,96,111,
    82,117,109,128,231,207,152,51,215,27,123,158,242,32,246,218,83,59,61,29,19,77,219,171,106,123,77,251,210,31,253,226,15,198,70,216,144,59,91,152,18,207,152,22,207,221,126,92,76,85,119,65,117,36,175,18,
    119,100,132,121,166,241,176,37,166,87,68,194,244,146,85,37,252,246,158,124,253,83,233,173,194,61,32,112,171,106,71,85,118,188,217,151,157,153,33,185,234,97,98,220,181,98,34,129,112,36,0,33,237,120,241,
    239,184,28,142,245,101,157,72,224,72,8,80,64,31,9,61,30,75,2,36,16,85,4,46,60,171,183,224,133,62,56,241,191,48,238,171,74,211,207,185,107,44,194,61,240,9,116,194,5,86,111,245,194,29,38,18,32,1,18,32,129,
    208,19,160,128,14,125,31,248,92,3,188,181,14,83,122,241,234,222,103,116,60,32,204,9,180,234,115,181,174,97,168,198,246,224,145,143,168,55,33,214,85,175,171,47,208,225,79,97,142,139,213,35,1,18,32,1,18,
    8,17,1,10,232,16,129,63,210,98,67,37,48,142,180,222,60,158,4,170,34,16,234,113,141,242,171,123,38,160,170,250,115,31,9,144,0,9,144,64,108,16,168,152,20,53,54,218,202,86,146,0,9,144,0,9,144,0,9,144,0,9,
    144,192,17,19,160,128,62,98,132,52,64,2,36,64,2,36,64,2,36,64,2,36,16,75,4,162,34,132,35,45,89,189,245,200,228,126,122,165,88,234,76,182,53,240,4,242,10,252,243,147,193,148,110,233,201,21,111,201,11,124,
    173,89,66,164,18,200,47,182,168,121,188,213,96,97,34,1,18,32,1,18,8,43,2,254,81,3,33,106,210,29,67,54,202,173,103,110,148,186,181,74,67,84,3,22,27,107,4,10,148,160,249,240,167,250,114,231,248,214,130,
    101,95,83,106,82,185,60,125,201,106,25,222,123,187,164,36,86,188,94,218,87,27,204,31,59,4,32,158,191,95,156,41,183,188,211,70,54,238,228,139,74,98,167,231,217,82,18,32,129,112,39,16,177,33,28,15,92,176,
    78,254,55,124,13,197,115,184,143,176,40,171,31,68,239,213,167,108,145,15,111,113,126,245,185,183,205,156,112,235,82,25,117,242,22,138,103,111,129,197,120,62,188,184,228,140,174,187,101,198,253,139,4,119,
    218,152,72,128,4,72,128,4,194,131,64,68,10,232,164,4,171,220,62,56,55,60,8,178,22,49,73,0,162,166,107,11,223,94,75,218,189,85,158,12,58,102,119,76,242,98,163,143,140,64,211,236,34,185,164,79,197,235,145,
    143,204,18,143,38,1,18,32,1,18,240,7,129,136,20,208,205,234,22,73,114,2,189,49,254,24,0,180,81,115,2,109,27,57,191,210,188,58,75,190,230,175,206,30,247,199,22,129,163,27,229,199,86,131,217,90,18,32,1,
    18,8,99,2,17,41,160,227,212,109,77,38,18,8,53,129,56,139,213,167,42,196,153,57,110,125,2,198,204,78,4,56,126,156,112,112,133,4,72,128,4,66,74,32,34,5,116,72,137,177,112,18,32,1,18,32,1,18,32,1,18,32,129,
    152,38,64,1,29,211,221,207,198,147,0,9,144,0,9,144,128,255,8,152,48,71,39,19,9,196,0,129,136,158,198,206,83,255,88,142,153,47,98,78,240,180,155,219,73,192,107,2,214,21,231,139,173,112,181,215,249,107,
    154,209,148,220,70,204,237,62,169,233,225,60,46,74,8,216,54,62,44,214,221,159,71,73,107,216,140,88,35,96,54,155,165,168,94,119,89,223,246,102,49,91,226,196,98,177,8,5,117,172,141,130,216,105,111,84,10,
    104,73,106,33,98,162,128,142,157,97,28,192,150,154,226,3,104,220,193,52,46,248,18,213,184,101,138,109,2,150,244,216,110,63,91,31,177,4,32,148,181,96,206,233,34,121,41,45,37,62,62,94,50,19,18,4,162,154,
    137,4,162,145,64,116,10,232,104,236,41,182,137,4,72,128,4,72,128,4,194,144,0,196,51,132,114,130,18,204,233,233,233,18,23,87,225,125,78,78,78,166,23,58,12,251,139,85,242,15,1,10,104,255,112,164,21,18,32,
    1,18,32,1,18,136,89,2,16,209,240,58,167,166,166,74,82,82,146,14,221,128,144,134,176,102,24,71,204,14,139,168,110,56,5,116,84,119,47,27,71,2,36,64,2,36,64,2,129,39,96,132,112,64,48,219,108,21,83,118,82,
    60,7,158,59,75,8,29,1,10,232,208,177,103,201,36,64,2,36,64,2,36,16,53,4,32,162,233,109,142,154,238,100,67,170,33,192,232,254,106,0,113,55,9,144,0,9,144,0,9,144,128,247,4,12,15,180,247,71,48,39,9,68,30,
    1,122,160,35,175,207,88,99,18,32,1,18,32,1,18,8,59,2,16,206,214,93,43,68,54,207,23,147,217,34,210,113,184,246,72,211,43,29,118,93,197,10,249,129,0,5,180,31,32,210,4,9,144,0,9,144,0,9,196,50,1,136,231,
    242,242,114,177,174,154,42,9,211,111,23,155,201,34,37,109,47,208,15,22,82,64,199,242,200,136,222,182,51,132,35,122,251,150,45,35,1,18,32,1,18,32,129,160,16,128,128,46,41,41,145,226,226,98,123,121,133,
    133,133,90,84,51,164,195,142,132,11,81,68,128,2,58,138,58,147,77,33,1,18,32,1,18,32,129,96,19,208,161,27,86,171,148,150,150,82,64,7,27,62,203,11,25,1,134,112,132,12,61,11,38,129,192,19,40,43,43,147,239,
    191,255,94,150,44,89,34,187,118,237,146,99,142,57,70,46,188,240,66,61,79,107,224,75,119,95,2,188,84,31,127,252,177,174,83,70,70,134,244,237,219,87,122,247,238,237,62,115,0,182,126,242,201,39,218,43,118,
    238,185,231,74,98,98,162,83,9,198,62,167,141,106,5,117,108,216,176,161,120,218,223,163,71,15,105,209,130,111,146,116,229,198,245,216,33,0,17,141,127,111,240,49,18,4,53,189,207,6,13,126,71,27,129,152,22,
    208,91,182,108,145,57,115,230,84,234,83,188,142,20,34,227,183,223,126,147,245,235,215,203,177,199,30,43,71,29,117,84,165,124,158,54,120,58,201,226,36,140,219,91,243,230,205,179,31,138,9,231,155,55,111,
    46,93,186,116,177,111,243,102,161,38,194,104,246,236,217,178,117,235,86,187,249,218,181,107,75,167,78,157,164,81,163,70,246,109,70,221,221,137,11,123,38,135,133,234,108,174,91,183,174,198,237,53,250,167,
    94,189,122,50,96,192,0,135,82,69,140,125,78,27,213,138,209,119,158,246,35,255,5,23,92,160,223,148,229,122,108,180,173,47,88,176,64,70,142,28,41,127,255,253,183,83,211,30,126,248,97,249,229,151,95,4,92,
    131,157,118,238,220,41,39,158,120,162,252,243,207,63,78,69,79,152,48,65,134,13,27,230,180,45,80,43,151,94,122,169,254,29,110,219,182,77,234,215,175,239,84,140,177,207,105,163,90,249,250,235,175,181,128,
    246,180,255,237,183,223,166,128,118,133,198,245,152,35,96,120,162,141,134,91,149,87,154,2,218,160,193,239,104,35,16,211,2,250,143,63,254,144,225,195,135,87,234,83,120,165,32,160,95,123,237,53,249,224,
    131,15,228,229,151,95,246,73,64,123,58,201,226,36,12,47,224,149,87,94,89,169,76,136,116,120,10,179,178,178,42,237,115,221,80,83,97,244,196,19,79,200,212,169,83,157,204,65,112,222,114,203,45,242,236,179,
    207,234,237,70,221,221,137,11,167,3,15,173,84,103,115,214,172,89,53,110,175,209,63,184,240,112,21,208,198,62,215,58,25,125,231,105,63,242,159,117,214,89,146,150,150,230,122,104,84,173,239,217,179,71,134,
    12,25,162,47,152,186,117,235,38,163,70,141,210,39,178,87,94,121,69,47,135,66,60,3,240,99,143,61,166,197,115,215,174,93,229,182,219,110,147,213,171,87,235,58,94,116,209,69,97,197,255,218,107,175,149,148,
    148,20,123,157,90,182,108,105,95,198,130,235,254,14,29,58,56,237,231,10,9,144,0,9,144,64,116,19,136,105,1,109,116,45,60,176,67,135,14,53,86,245,83,195,246,149,35,88,112,61,201,226,36,12,1,141,4,1,49,122,
    244,104,57,112,224,128,22,234,16,124,143,63,254,184,60,243,204,51,85,150,232,15,97,116,245,213,87,75,247,238,221,5,222,97,8,231,231,158,123,78,183,31,183,161,107,154,60,217,52,236,213,180,189,198,241,
    158,190,171,235,59,215,253,176,147,144,144,224,201,92,212,108,199,56,194,221,134,206,157,59,203,175,191,254,106,111,51,198,28,222,14,22,170,180,98,133,154,226,74,37,136,123,92,172,133,107,130,151,222,
    213,59,237,88,215,234,246,59,230,229,50,9,144,0,9,144,64,244,17,160,128,86,125,218,170,85,43,45,34,253,221,189,238,78,178,191,255,254,187,46,6,241,146,16,157,72,152,226,231,246,219,111,151,85,171,86,233,
    245,170,254,248,67,24,193,155,107,220,46,135,135,24,161,42,40,251,72,4,180,39,155,70,91,106,218,94,227,120,79,223,213,245,93,117,251,61,217,141,244,237,243,231,207,215,77,184,225,134,27,236,226,25,27,
    66,41,158,81,62,238,38,224,46,200,35,143,60,34,184,104,132,231,25,119,123,92,99,145,145,55,148,9,245,51,60,208,96,246,228,147,79,58,85,7,226,223,177,206,99,198,140,145,6,13,26,56,229,225,10,9,144,0,9,
    144,64,244,18,160,128,86,125,187,118,237,90,185,227,142,59,236,189,12,111,233,197,23,95,108,95,175,233,66,85,39,225,149,43,87,234,219,217,249,249,249,242,254,251,239,235,34,32,46,170,75,254,16,70,95,126,
    249,165,172,89,179,70,114,115,115,197,176,231,77,217,85,213,205,147,205,31,127,252,81,31,86,211,246,86,85,38,246,85,215,119,136,255,29,60,120,176,221,12,238,2,188,248,226,139,246,245,104,93,64,12,56,82,
    184,137,186,187,238,186,75,199,31,35,44,106,242,228,201,250,243,208,67,15,9,46,228,26,55,110,28,54,221,129,240,45,35,33,204,201,85,64,255,240,195,15,198,110,253,141,223,49,19,9,144,0,9,144,64,236,16,160,
    128,86,125,189,105,211,38,167,208,9,196,69,251,67,64,87,117,18,94,186,116,169,220,123,239,189,122,164,193,195,133,24,213,171,174,186,170,218,145,231,15,97,52,105,210,36,193,7,41,51,51,83,30,125,244,81,
    105,214,172,89,181,101,87,149,161,58,155,53,109,111,85,101,98,95,117,125,135,144,23,8,53,35,249,250,176,166,113,92,164,125,35,38,119,217,178,101,178,112,225,66,167,11,136,80,183,3,99,29,130,249,63,255,
    249,143,124,251,237,183,250,206,11,46,230,222,122,235,45,193,29,155,112,73,175,190,250,170,96,134,16,36,119,94,251,105,211,166,57,61,175,208,164,73,147,112,169,58,235,65,2,36,64,2,36,16,4,2,20,208,10,
    114,187,118,237,228,190,251,238,179,227,198,172,24,254,72,85,157,132,49,109,23,226,81,47,185,228,18,125,162,198,195,120,152,21,163,186,228,15,97,4,225,190,123,247,110,121,227,141,55,164,95,191,126,114,
    221,117,215,85,87,108,181,251,171,179,89,211,246,86,87,112,117,125,135,187,9,99,199,142,181,155,73,78,78,182,47,71,243,194,233,167,159,174,167,92,123,254,249,231,229,236,179,207,182,207,242,50,113,226,
    68,105,219,182,173,142,193,15,69,251,241,68,62,30,166,69,157,206,57,231,28,249,243,207,63,181,112,198,236,28,225,148,206,63,255,252,42,99,160,17,91,94,85,140,116,56,181,133,117,33,1,18,32,1,18,240,63,
    1,10,104,197,20,51,18,140,24,49,194,239,116,171,58,9,163,76,120,185,33,38,224,189,189,251,238,187,157,132,158,167,202,248,67,24,117,236,216,0,75,182,182,0,0,50,154,73,68,65,84,81,96,7,229,126,241,197,
    23,122,246,143,65,131,6,121,42,210,171,237,213,217,172,105,123,171,43,188,186,190,75,79,79,23,204,66,17,107,233,138,43,174,16,76,13,135,80,3,196,182,247,234,213,75,242,242,242,180,96,197,67,148,51,103,
    206,212,219,130,205,229,214,91,111,149,151,94,122,73,112,33,136,144,13,212,3,233,72,199,95,77,218,129,57,177,13,239,114,118,118,182,252,245,215,95,94,155,113,60,22,7,225,153,2,60,140,203,68,2,36,64,2,
    36,16,27,4,66,247,56,126,4,241,133,119,21,47,81,48,62,142,243,56,31,105,51,16,39,141,24,75,204,35,139,135,249,170,75,16,70,167,158,122,170,236,223,191,95,11,163,254,253,251,107,129,8,49,14,145,132,25,
    23,188,73,184,61,125,231,157,119,234,172,55,221,116,147,211,219,163,176,17,2,193,104,47,150,189,73,213,217,132,13,95,219,139,99,192,197,168,11,190,29,239,22,96,127,85,201,245,88,28,111,136,182,170,142,
    139,244,125,120,48,245,155,111,190,145,7,31,124,80,63,236,134,249,186,23,45,90,164,167,239,67,31,96,172,4,59,193,251,140,249,212,49,78,16,210,131,105,27,33,230,113,247,5,30,233,96,167,237,219,183,235,
    153,74,48,91,9,150,125,73,142,199,226,248,125,251,246,249,114,56,243,146,0,9,144,0,9,68,56,1,10,104,47,58,16,158,59,156,36,141,15,222,164,230,175,212,166,77,27,185,252,242,203,245,28,189,215,95,127,189,
    126,67,90,85,182,253,41,140,110,190,249,102,201,201,201,209,243,242,186,78,159,231,40,16,124,17,23,85,217,68,187,124,109,47,142,1,111,131,61,190,209,31,222,38,215,99,113,124,81,81,145,183,135,71,116,62,
    204,18,129,120,99,92,108,97,202,66,196,68,67,232,25,23,78,193,110,28,198,238,141,55,222,168,195,135,48,235,203,226,197,139,181,112,197,131,133,193,76,232,127,136,121,199,15,230,61,71,50,246,121,10,207,
    48,246,59,30,139,101,92,0,51,145,0,9,144,0,9,196,14,1,147,165,249,16,91,164,53,183,67,147,124,89,248,84,197,116,112,238,234,110,233,161,230,90,54,69,255,92,191,56,113,111,216,176,65,10,11,11,117,92,171,
    113,59,218,29,19,110,171,25,1,235,226,30,98,43,88,238,246,224,81,111,180,147,241,179,189,159,186,236,242,254,91,101,204,181,21,243,32,187,26,52,165,118,20,115,167,95,92,55,115,61,198,8,216,214,222,36,
    214,29,239,185,109,245,216,233,13,229,134,113,109,221,238,11,198,198,130,241,179,212,221,50,247,167,11,75,199,25,34,105,199,5,163,26,44,35,12,9,224,92,132,183,227,226,98,189,100,238,243,210,240,207,199,
    196,102,178,200,134,203,86,235,16,73,188,113,151,231,167,48,236,184,32,86,201,182,122,164,88,119,125,230,182,196,231,39,55,149,187,63,108,229,118,95,56,111,100,12,116,56,247,78,53,117,131,71,175,185,159,
    30,120,172,166,40,238,38,1,18,32,1,18,32,1,18,32,1,18,56,68,128,33,28,28,10,36,64,2,36,64,2,36,64,2,36,64,2,36,224,3,1,10,104,31,96,49,43,9,144,0,9,144,0,9,144,0,9,144,0,9,48,132,131,99,128,4,72,128,4,
    72,128,4,72,224,136,9,32,172,208,154,152,33,5,41,234,197,66,230,56,193,58,19,9,68,43,1,10,232,104,237,89,182,139,4,72,128,4,72,128,4,130,68,0,98,25,83,178,22,181,62,79,150,103,159,44,241,241,241,82,87,
    125,248,240,96,144,58,128,197,4,157,0,5,116,208,145,179,64,18,32,1,18,32,1,18,136,46,2,16,208,16,205,169,169,169,218,243,12,49,109,204,190,65,79,116,116,245,53,91,83,65,128,2,154,35,129,4,72,128,4,72,
    128,4,72,160,198,4,32,144,225,105,198,139,145,240,246,87,8,103,108,195,92,244,16,210,20,208,53,70,203,3,195,152,0,5,116,24,119,14,171,70,2,36,64,2,36,64,2,145,64,0,34,217,240,58,67,56,35,65,84,51,132,
    35,18,122,143,117,172,9,1,10,232,154,80,227,49,36,64,2,36,64,2,36,64,2,78,4,32,150,29,189,205,142,203,78,25,185,66,2,81,64,128,2,58,10,58,145,77,32,1,18,32,1,18,32,129,112,32,64,209,28,14,189,192,58,4,
    131,0,5,116,48,40,179,12,18,32,1,18,32,1,18,136,1,2,120,173,55,62,134,144,54,190,99,160,233,108,98,140,17,224,139,84,98,172,195,217,92,18,32,1,18,32,1,18,240,55,1,136,102,171,213,42,214,5,111,136,233,
    137,116,145,39,107,75,121,121,185,22,211,254,46,139,246,72,32,28,8,80,64,135,67,47,176,14,36,64,2,36,64,2,36,16,193,4,32,160,75,75,75,165,184,224,160,152,74,11,68,74,242,165,168,168,136,34,58,130,251,
    148,85,175,154,0,5,116,213,124,184,151,4,72,128,4,72,128,4,72,160,10,2,70,216,70,73,73,137,22,205,70,214,130,130,2,45,160,141,117,126,147,64,52,17,160,128,142,166,222,100,91,72,128,4,72,128,4,72,32,4,
    4,12,15,52,188,208,70,42,46,46,214,97,29,216,199,68,2,209,70,128,2,58,218,122,148,237,33,1,18,32,1,18,32,129,32,19,128,72,214,49,208,42,14,218,72,88,167,120,54,104,240,59,218,8,80,64,71,91,143,178,61,
    36,64,2,36,64,2,36,16,34,2,142,130,217,113,57,68,213,97,177,36,16,48,2,20,208,1,67,75,195,36,64,2,36,64,2,36,64,2,36,64,2,209,72,128,2,58,26,123,149,109,34,1,18,32,1,18,32,1,18,32,1,18,8,24,1,10,232,128,
    161,165,97,18,32,1,18,32,1,18,32,1,18,32,129,104,36,64,1,29,141,189,202,54,145,0,9,144,0,9,144,0,9,144,0,9,4,140,0,5,116,192,208,210,48,9,144,0,9,144,0,9,144,0,9,144,64,52,18,160,128,142,198,94,101,155,
    72,128,4,72,128,4,72,128,4,72,128,4,2,70,128,2,58,96,104,105,152,4,72,128,4,72,128,4,72,128,4,72,32,26,9,80,64,71,99,175,178,77,36,64,2,36,64,2,36,64,2,36,64,2,1,35,64,1,29,48,180,52,76,2,36,64,2,36,64,
    2,36,64,2,36,16,141,4,40,160,163,177,87,217,38,18,32,1,18,32,1,18,32,1,18,32,129,128,17,160,128,14,24,90,26,38,1,18,32,1,18,32,1,18,32,1,18,136,70,2,20,208,209,216,171,108,19,9,144,0,9,144,0,9,144,0,9,
    144,64,192,8,80,64,7,12,45,13,147,0,9,144,0,9,144,64,108,17,48,153,76,246,6,59,46,219,55,114,129,4,162,132,64,92,148,180,131,205,32,1,18,32,1,18,32,1,18,8,33,1,179,217,44,249,77,7,202,210,248,70,18,23,
    23,47,41,106,157,34,58,132,29,194,162,3,74,128,2,58,160,120,105,156,4,72,128,4,72,128,4,162,159,0,132,114,92,92,156,36,100,54,151,226,248,44,81,43,146,152,152,40,16,213,20,209,209,223,255,177,216,66,10,
    232,88,236,117,182,153,4,72,128,4,72,128,4,252,68,0,2,25,66,25,130,57,61,61,93,18,18,18,196,98,177,72,114,114,178,254,246,83,49,52,67,2,97,69,128,2,58,172,186,131,149,33,1,18,32,1,18,32,129,200,35,96,
    120,160,83,83,83,37,41,41,73,123,157,225,145,134,144,166,7,58,242,250,147,53,174,158,0,5,116,245,140,152,131,4,72,128,4,72,128,4,72,160,10,2,134,23,26,158,104,8,103,36,108,163,120,174,2,26,119,69,52,1,
    10,232,136,238,62,86,158,4,72,128,4,72,128,4,194,131,128,33,150,141,239,240,168,21,107,65,2,129,33,64,1,29,24,174,180,74,2,36,64,2,36,64,2,49,71,192,102,179,217,219,76,33,109,71,193,133,40,36,64,1,29,
    133,157,202,38,145,0,9,144,0,9,144,64,176,9,88,173,86,177,109,252,89,100,249,103,98,50,199,137,237,212,167,25,198,17,236,78,96,121,65,35,192,23,169,4,13,53,11,34,1,18,32,1,18,32,129,232,36,0,207,115,121,
    121,185,148,109,90,32,150,223,95,18,211,188,23,165,164,164,68,32,170,153,72,32,26,9,80,64,71,99,175,178,77,36,64,2,36,64,2,36,16,36,2,16,207,16,202,16,204,197,197,197,246,82,11,10,10,180,168,118,12,235,
    176,239,228,2,9,68,56,1,10,232,8,239,64,86,159,4,72,128,4,72,128,4,66,77,0,34,185,180,180,212,73,64,23,21,21,105,97,77,1,29,234,222,97,249,129,32,64,1,29,8,170,180,73,2,36,64,2,36,64,2,49,68,0,34,89,135,
    112,148,149,217,91,93,166,150,25,194,97,199,193,133,40,35,64,1,29,101,29,202,230,144,0,9,144,0,9,144,64,40,8,64,68,59,122,155,41,158,67,209,11,44,51,88,4,40,160,131,69,154,229,144,0,9,144,0,9,144,0,9,
    144,0,9,68,5,1,10,232,168,232,70,54,130,4,72,128,4,72,128,4,72,128,4,72,32,88,4,40,160,131,69,154,229,144,0,9,144,0,9,144,0,9,144,0,9,68,5,1,10,232,168,232,70,54,130,4,72,128,4,72,128,4,72,128,4,72,32,
    88,4,40,160,131,69,154,229,144,0,9,144,0,9,144,0,9,144,0,9,68,5,1,10,232,168,232,70,54,130,4,72,128,4,72,128,4,72,128,4,72,32,88,4,40,160,131,69,154,229,144,0,9,144,0,9,144,0,9,144,0,9,68,5,1,10,232,168,
    232,70,54,130,4,72,128,4,72,128,4,72,128,4,72,32,88,4,40,160,131,69,154,229,144,0,9,144,0,9,144,0,9,144,0,9,68,5,1,10,232,168,232,70,54,130,4,72,128,4,72,128,4,72,128,4,72,32,88,4,40,160,131,69,154,229,
    144,0,9,144,0,9,144,0,9,144,0,9,68,5,1,10,232,168,232,70,54,130,4,72,128,4,72,128,4,72,128,4,72,32,88,4,40,160,131,69,154,229,144,0,9,144,0,9,144,0,9,144,0,9,68,5,129,184,168,104,5,27,65,2,36,64,2,36,
    64,2,36,16,82,2,38,147,73,202,50,90,202,206,6,3,197,100,182,136,217,108,22,108,99,34,129,104,36,64,1,29,141,189,202,54,145,0,9,144,0,9,144,64,16,9,64,40,91,44,22,41,107,122,146,108,202,232,38,241,241,
    241,146,165,62,20,208,65,236,4,22,21,84,2,20,208,65,197,205,194,72,128,4,72,128,4,72,32,186,8,64,36,227,147,144,144,32,105,105,105,218,243,12,49,157,156,156,172,69,53,69,116,116,245,55,91,83,65,128,2,
    154,35,129,4,72,128,4,72,128,4,72,224,136,8,32,92,195,16,208,73,73,73,118,65,13,33,77,1,125,68,104,121,112,152,18,160,128,14,211,142,97,181,72,128,4,72,128,4,72,32,82,8,64,36,67,44,39,38,38,106,33,141,
    122,51,6,58,82,122,143,245,172,9,1,10,232,154,80,227,49,36,64,2,36,64,2,36,64,2,78,4,12,17,109,179,217,244,118,122,158,157,240,112,37,202,8,80,64,71,89,135,178,57,36,64,2,36,64,2,36,16,74,2,20,206,161,
    164,207,178,131,69,128,2,58,88,164,89,14,9,144,0,9,144,0,9,68,49,1,120,158,109,69,123,197,118,96,155,142,123,54,213,109,199,248,231,40,238,239,88,111,26,95,164,18,235,35,128,237,39,1,18,32,1,18,32,129,
    35,36,0,241,108,181,90,165,124,209,251,98,121,189,131,152,94,239,36,101,101,101,122,219,17,154,230,225,36,16,150,4,40,160,195,178,91,88,41,18,32,1,18,32,1,18,136,28,2,16,208,165,165,165,82,92,92,108,175,
    116,81,81,145,22,208,70,76,180,125,7,23,72,32,10,8,80,64,71,65,39,178,9,36,64,2,36,64,2,36,16,42,2,134,247,185,164,164,196,73,64,23,20,20,72,121,121,121,168,170,197,114,73,32,160,4,40,160,3,138,151,198,
    73,128,4,72,128,4,72,32,250,9,64,68,35,100,3,94,104,35,65,80,35,172,131,30,104,131,8,191,163,137,0,5,116,52,245,38,219,66,2,36,64,2,36,64,2,33,34,224,42,150,225,125,166,120,14,81,103,176,216,128,19,160,
    128,14,56,98,22,64,2,36,64,2,36,64,2,177,65,128,130,57,54,250,153,173,84,47,10,34,4,18,32,1,18,32,1,18,32,1,18,32,1,18,32,1,239,9,80,64,123,207,138,57,73,128,4,72,128,4,72,128,4,72,128,4,72,128,30,104,
    142,1,18,32,1,18,32,1,18,32,1,18,32,1,18,240,133,0,61,208,190,208,98,94,18,32,1,18,32,1,18,32,1,18,32,129,152,39,192,87,121,199,252,16,32,0,18,32,1,18,32,1,18,32,1,18,8,63,2,23,156,113,162,220,118,213,
    217,146,147,93,71,82,83,146,228,64,126,161,172,203,221,46,159,78,153,43,99,39,78,11,233,155,46,41,160,195,111,188,176,70,36,64,2,36,64,2,36,64,2,36,16,243,4,218,182,106,36,61,186,182,181,115,168,155,89,
    75,90,52,169,47,3,78,232,44,125,142,111,47,151,222,250,156,125,95,176,23,24,194,17,108,226,44,143,4,72,128,4,72,128,4,72,128,4,72,192,107,2,43,215,108,146,54,253,174,149,129,35,238,151,153,191,46,214,
    199,13,63,187,159,52,168,151,233,181,13,127,103,164,7,218,223,68,105,143,4,72,128,4,72,128,4,72,128,4,72,192,111,4,10,139,75,100,237,198,109,250,83,164,150,79,250,180,179,182,221,178,105,125,217,186,99,
    143,223,202,241,197,16,61,208,190,208,98,94,18,32,1,18,32,1,18,32,1,18,32,129,144,17,232,124,116,11,93,118,65,97,177,204,95,252,79,200,234,65,15,116,200,208,179,96,18,32,1,18,8,46,129,25,19,30,21,179,
    217,36,247,61,253,129,204,93,176,188,198,133,219,108,206,135,234,183,207,185,110,84,89,76,38,147,115,70,135,53,111,223,88,23,11,54,188,101,1,124,158,120,120,107,195,211,241,176,237,31,27,176,163,62,135,
    236,193,166,241,65,25,70,10,100,61,188,109,7,234,226,169,30,222,218,240,116,60,108,71,139,13,111,219,81,53,207,138,113,129,60,72,85,252,211,80,145,193,229,111,86,237,116,25,57,244,20,57,182,83,107,185,
    240,204,19,245,222,41,51,230,75,73,73,153,75,206,224,173,82,64,7,143,53,75,34,1,18,32,129,144,18,192,67,55,102,179,89,178,234,164,215,184,30,86,171,58,52,175,92,76,91,74,181,72,130,161,242,29,207,138,
    196,215,119,178,169,133,69,143,91,196,92,167,69,37,145,98,85,70,108,203,63,23,217,248,83,149,34,67,219,56,245,41,49,91,18,156,108,224,132,174,63,243,94,18,217,183,174,106,27,105,57,98,234,125,183,62,222,
    81,236,216,109,76,191,75,108,101,197,78,117,119,92,209,199,52,56,86,76,157,47,113,107,195,122,112,187,200,207,143,87,93,7,168,133,182,67,196,212,252,36,205,223,209,62,234,97,221,242,135,200,226,15,170,
    183,113,220,245,98,206,106,227,196,2,182,52,207,85,223,136,172,251,177,122,27,3,212,69,84,66,170,147,13,59,139,5,175,139,236,94,85,181,141,148,44,49,245,189,223,61,11,213,175,105,91,103,73,185,190,192,
    178,74,198,188,135,197,146,146,34,86,139,69,108,135,20,147,230,89,191,179,152,186,140,116,111,163,80,221,142,159,253,72,213,117,128,173,214,167,139,169,213,64,247,60,183,171,24,217,69,111,87,111,163,219,
    213,98,174,215,193,137,133,157,231,234,169,34,107,190,175,222,70,255,135,196,156,84,219,201,134,157,231,194,177,34,59,151,86,109,35,177,150,152,78,122,196,45,11,109,103,246,195,98,43,220,235,56,100,156,
    150,53,207,186,71,139,233,216,107,220,218,176,22,31,16,153,121,127,213,117,0,207,150,167,136,233,168,51,221,243,220,169,46,182,255,120,179,122,27,93,174,16,115,78,23,39,22,6,79,235,182,205,34,255,20,85,
    212,221,98,18,235,81,137,42,159,247,66,186,73,195,108,121,235,201,155,244,241,24,239,79,190,254,169,60,248,220,71,78,44,130,189,66,1,29,108,226,44,143,4,72,128,4,34,148,0,60,139,229,74,64,219,246,150,
    75,114,110,233,225,86,228,126,124,120,217,97,169,232,168,115,36,174,86,83,177,40,1,101,136,87,156,252,202,202,148,215,104,205,116,73,88,244,166,67,110,247,139,133,125,30,146,132,228,56,109,195,200,1,97,
    81,90,90,42,150,191,39,74,220,150,121,198,102,183,223,229,153,109,164,228,248,219,37,33,193,89,132,163,30,176,145,56,255,85,49,149,21,186,61,214,216,88,218,238,66,177,181,31,38,113,113,113,246,118,160,
    14,229,229,229,82,154,183,93,146,127,87,66,190,154,84,156,92,95,204,77,250,234,92,184,136,65,130,13,176,40,223,246,183,36,121,97,163,176,249,64,137,175,221,202,45,79,219,154,153,146,184,160,250,122,20,
    246,186,91,18,226,146,181,80,50,250,196,206,115,233,167,18,183,113,150,174,155,167,63,229,233,77,164,164,231,93,30,121,102,237,94,40,22,221,60,155,100,174,124,207,173,153,210,214,103,137,181,195,37,18,
    31,31,239,196,83,247,201,193,61,94,177,40,142,175,37,230,230,39,107,251,142,60,209,39,101,219,87,120,101,163,168,113,95,137,203,106,231,150,167,108,248,89,18,188,233,147,238,183,40,22,170,46,170,79,93,
    121,154,151,127,33,241,107,149,16,175,34,89,83,178,165,228,196,251,42,241,68,159,148,148,148,72,130,18,225,150,131,91,170,176,32,82,214,252,20,41,235,60,210,45,207,146,130,253,222,141,79,81,125,209,98,
    144,30,227,149,120,238,90,237,29,207,156,227,196,82,183,163,211,239,4,125,138,62,177,110,223,41,137,135,254,205,176,90,68,10,91,36,74,188,82,160,74,75,123,149,86,173,221,44,119,62,246,142,188,244,240,
    181,210,164,97,93,125,76,89,89,185,87,199,6,42,19,5,116,160,200,210,46,9,144,0,9,68,25,1,117,78,151,210,50,37,94,173,38,49,39,154,196,6,111,52,18,188,207,230,196,138,101,245,23,66,2,159,66,165,147,147,
    149,64,52,196,5,68,129,33,12,172,150,12,145,90,45,60,206,227,106,216,192,3,67,150,132,114,39,27,56,41,23,23,23,139,37,41,71,202,211,155,123,244,140,193,134,53,165,145,148,32,239,33,17,143,109,168,3,108,
    20,21,21,137,73,29,47,74,64,99,155,187,132,252,37,241,153,162,10,180,215,193,176,1,97,80,84,106,21,139,106,135,209,54,119,54,208,254,34,83,138,196,41,65,148,148,148,164,243,26,54,32,160,139,109,9,98,174,
    194,6,242,226,83,84,174,68,154,39,158,113,202,147,233,5,207,194,34,197,34,165,130,39,234,106,176,168,224,89,191,122,158,105,13,171,228,89,168,250,53,190,164,72,223,157,40,75,109,100,231,110,112,65,59,
    74,19,234,138,77,177,112,237,19,176,40,40,42,169,146,5,236,84,240,76,117,203,19,23,69,69,229,150,42,109,216,121,90,227,36,81,229,119,29,159,176,81,110,78,243,110,124,170,16,2,139,26,7,134,77,131,39,196,
    175,41,49,91,172,213,140,79,91,114,150,30,135,174,44,244,216,82,227,83,210,154,40,219,9,85,142,207,82,148,227,50,198,193,73,219,40,86,23,154,85,140,45,59,79,75,186,196,169,118,163,30,104,3,218,131,111,
    205,179,204,236,37,207,120,73,84,125,104,180,5,199,227,3,22,165,54,37,55,213,191,25,122,96,196,169,177,92,98,83,23,90,234,223,17,47,5,116,129,26,183,147,85,200,70,82,82,130,76,124,229,78,185,107,244,5,
    50,109,246,34,153,61,239,111,52,33,36,137,2,58,36,216,89,40,9,144,0,9,68,22,1,117,30,84,202,88,133,11,168,239,188,180,56,217,216,216,34,7,11,225,133,85,155,91,60,172,148,114,59,221,32,156,120,225,169,
    77,79,79,151,172,140,44,73,84,66,213,49,225,132,138,19,251,222,14,163,101,111,195,97,82,88,88,168,215,177,221,72,176,1,239,100,70,70,134,100,149,87,156,200,141,125,248,70,94,136,173,29,189,158,145,125,
    251,246,105,1,2,65,236,152,32,138,18,19,19,43,108,168,188,142,246,13,27,16,7,219,6,126,46,251,247,239,215,39,121,215,60,16,2,201,201,201,82,187,118,109,201,84,117,118,221,175,133,124,82,3,217,50,240,27,
    57,112,224,128,22,27,142,121,208,14,216,72,77,77,149,58,117,234,72,29,85,71,199,253,88,6,139,131,57,125,101,227,201,95,74,126,126,190,110,151,99,30,131,103,90,90,154,100,101,86,240,116,220,111,216,216,
    219,246,74,217,91,239,220,42,121,214,170,85,75,234,154,85,72,197,161,122,192,182,193,2,245,216,113,220,255,52,11,244,137,39,158,218,134,27,158,176,131,99,126,238,50,78,182,111,201,85,237,20,73,175,147,
    45,200,143,190,68,127,128,5,46,32,52,11,55,54,112,124,73,66,150,252,83,13,207,20,21,22,162,109,184,244,9,88,192,70,65,253,94,146,235,5,207,204,204,76,137,63,196,66,131,80,127,236,60,91,143,144,189,89,
    103,72,65,65,129,199,241,137,182,101,197,101,72,178,178,225,152,96,3,227,115,207,177,15,202,190,86,21,227,19,124,29,19,120,224,174,136,30,227,110,88,24,54,54,244,127,207,62,62,221,245,137,167,241,105,
    176,40,49,167,202,214,65,147,37,47,47,207,227,248,132,13,176,168,227,129,103,97,221,110,178,233,148,175,228,224,193,131,30,199,39,198,56,108,196,121,176,177,191,126,11,89,95,188,92,95,128,167,166,152,
    36,75,93,92,99,140,248,154,240,2,149,57,151,254,45,125,123,116,148,151,30,185,86,186,157,113,139,234,31,103,254,190,218,172,105,126,10,232,154,146,227,113,36,64,2,36,16,131,4,224,49,194,173,215,196,4,
    156,0,77,42,164,67,121,171,82,146,69,82,82,53,13,67,240,65,40,65,72,67,40,184,38,8,41,136,42,156,184,145,31,194,0,39,124,35,97,27,246,67,0,59,134,77,56,238,199,118,8,16,136,41,216,115,39,46,176,191,58,
    27,216,15,27,40,207,177,14,40,11,118,177,31,118,176,108,8,78,163,30,104,27,234,129,182,66,32,65,52,57,218,64,126,28,135,253,134,136,116,180,97,236,55,88,224,88,216,169,202,6,142,113,180,97,212,19,117,
    172,138,167,81,79,124,163,222,142,54,140,122,160,173,176,129,253,238,120,26,125,226,137,5,142,173,93,39,75,137,164,138,254,132,168,50,216,58,150,81,21,79,148,81,21,79,212,13,229,184,179,129,50,176,223,
    23,158,158,88,24,60,193,215,221,248,4,199,170,198,22,24,193,134,49,62,221,9,104,131,39,108,57,246,7,202,196,186,81,134,193,208,93,159,120,26,159,142,44,192,19,99,211,221,248,68,251,171,26,159,6,79,228,
    65,249,158,198,39,250,4,237,113,29,27,135,235,161,46,104,213,191,25,113,202,251,156,24,143,223,22,218,136,150,250,158,110,123,120,172,204,159,252,156,116,104,211,84,110,30,57,88,158,31,251,149,239,70,
    252,112,4,5,180,31,32,210,4,9,144,0,9,68,59,1,156,236,42,196,179,73,210,82,108,18,167,130,23,75,225,69,82,110,105,75,78,150,72,106,3,59,2,199,147,174,163,56,48,78,166,16,22,240,80,227,219,245,164,110,
    24,129,13,67,196,56,158,148,29,109,192,123,103,136,45,71,209,105,216,64,217,176,1,145,1,123,56,22,201,176,129,99,225,93,134,64,113,21,56,70,62,67,196,192,142,171,13,212,11,199,98,59,196,162,171,192,49,
    108,24,66,9,223,40,219,177,30,176,143,99,241,13,38,238,108,192,62,142,53,132,142,227,241,216,135,186,225,88,228,241,150,39,234,134,100,176,0,35,120,84,241,237,42,146,42,114,30,190,160,64,61,28,89,96,25,
    44,224,37,111,216,176,161,246,170,162,63,12,113,103,228,69,89,200,135,237,248,24,219,141,122,96,31,132,24,242,29,9,79,67,180,86,199,19,117,0,119,71,158,88,6,71,180,5,223,184,75,225,110,108,161,238,224,
    14,22,174,54,176,15,182,189,225,233,205,248,4,19,79,227,211,19,79,48,197,62,199,49,238,110,108,161,189,168,63,242,161,46,88,119,228,129,125,198,24,63,34,158,41,234,57,134,90,234,98,89,93,39,227,2,60,41,
    1,23,59,53,19,209,127,45,95,39,99,39,76,147,107,70,156,38,15,220,50,76,38,124,53,71,182,237,244,252,160,165,49,126,253,253,77,1,237,111,162,180,71,2,36,64,2,81,74,64,157,91,245,3,98,56,249,37,168,179,
    7,78,134,72,150,58,42,158,57,77,197,9,59,36,136,8,156,192,29,69,18,118,27,39,108,156,148,113,210,118,119,82,55,242,225,88,227,227,96,90,219,192,201,222,16,8,238,4,142,163,13,228,51,68,129,97,7,118,97,
    3,2,1,117,240,213,6,236,193,174,33,194,112,188,39,27,70,27,140,111,163,14,134,13,67,188,120,98,129,252,56,182,42,158,216,143,186,120,178,129,178,140,242,144,23,203,70,194,50,196,34,182,163,46,158,218,
    129,124,200,99,124,140,227,241,141,186,65,244,130,41,194,43,96,195,83,125,113,60,246,185,214,1,219,130,201,211,93,61,176,13,99,2,223,161,228,137,242,209,39,96,2,1,93,93,159,184,227,105,180,1,237,193,241,
    158,108,32,159,241,113,237,19,131,5,234,226,105,108,161,255,141,227,241,237,104,3,235,176,145,156,164,238,58,165,170,112,44,228,197,197,184,18,207,222,196,63,63,250,242,199,130,143,107,186,254,190,215,
    5,159,80,38,10,232,80,210,103,217,36,64,2,36,16,97,4,112,226,51,169,179,96,197,76,11,21,149,183,224,158,172,18,111,238,146,227,201,20,251,177,110,124,112,210,175,46,185,30,239,106,163,186,227,141,252,
    174,249,96,23,229,227,4,239,77,242,84,15,67,56,212,212,134,33,56,188,97,129,50,92,235,129,117,227,227,141,13,215,227,13,155,134,141,35,105,7,218,226,90,7,119,229,25,101,186,150,133,188,161,230,137,58,
    249,210,39,238,218,103,176,116,183,207,181,205,88,119,151,15,219,252,49,62,253,97,195,31,125,2,197,108,114,80,156,170,121,17,159,28,154,19,241,109,97,3,72,128,4,72,128,4,188,32,144,164,196,110,106,74,
    146,83,206,226,146,82,117,251,223,249,65,39,167,12,14,43,174,39,63,45,0,92,55,58,228,119,183,232,78,52,184,203,87,213,182,112,176,17,14,117,0,163,112,169,7,196,214,145,164,112,105,7,235,113,184,23,253,
    195,2,99,244,176,205,104,88,162,128,142,134,94,100,27,72,128,4,72,192,7,2,31,189,252,239,74,185,49,199,234,115,111,125,89,105,59,55,144,128,47,4,92,195,4,252,33,190,124,41,159,121,73,32,88,4,142,236,82,
    49,88,181,100,57,36,64,2,36,64,2,36,64,2,97,75,0,194,25,49,178,214,101,159,137,237,157,190,98,123,239,164,42,99,203,195,182,33,172,24,9,120,73,128,30,104,47,65,49,27,9,4,148,64,193,50,177,206,63,60,139,
    65,64,203,162,241,240,37,96,45,14,104,221,18,90,157,27,80,251,52,30,187,4,32,160,49,3,72,249,238,245,234,45,149,63,171,87,119,91,164,72,189,220,3,15,226,25,49,197,177,75,135,45,143,70,2,20,208,209,216,
    171,108,83,196,17,176,225,149,110,229,249,17,87,111,86,152,4,72,128,4,32,158,241,193,27,231,202,148,104,86,179,130,235,132,23,178,24,179,56,144,18,9,68,27,1,134,112,68,91,143,178,61,36,64,2,36,64,2,36,
    16,100,2,16,208,152,51,25,175,4,55,18,94,149,238,105,78,105,35,15,191,73,32,82,9,80,64,71,106,207,177,222,17,71,64,133,7,50,145,64,141,9,88,241,30,109,38,18,8,83,2,16,208,58,6,218,225,31,58,79,47,117,
    9,211,38,176,90,36,224,19,1,10,104,159,112,49,51,9,212,156,64,238,46,227,198,102,205,109,240,200,216,37,176,97,167,243,180,115,177,75,130,45,15,87,2,70,40,135,81,63,172,51,145,64,180,18,160,128,142,214,
    158,101,187,194,142,192,156,21,181,229,239,141,169,97,87,47,86,40,252,9,28,40,140,147,15,127,202,9,255,138,178,134,36,64,2,36,16,35,4,40,160,99,164,163,217,204,208,19,192,157,205,115,159,233,44,243,86,
    171,215,30,51,145,128,151,4,54,42,207,243,217,79,118,150,173,123,19,188,60,130,217,72,128,4,72,128,4,2,77,128,179,112,4,154,48,237,147,128,3,1,136,161,190,247,119,147,214,57,5,210,160,78,169,195,30,46,
    146,64,101,2,251,11,44,178,100,99,154,154,225,160,242,62,110,33,1,18,32,1,18,8,29,1,10,232,208,177,103,201,49,76,96,245,182,20,89,189,45,134,1,176,233,36,64,2,36,64,2,36,16,193,4,24,194,17,193,157,199,
    170,147,0,9,144,0,9,144,0,9,144,0,9,4,159,0,5,116,240,153,179,68,18,32,1,18,32,1,18,32,1,18,32,129,8,38,64,1,29,193,157,199,170,147,0,9,144,0,9,144,0,9,144,0,9,4,159,0,5,116,240,153,179,68,18,32,1,18,
    32,1,18,32,1,18,32,129,8,38,64,1,29,193,157,199,170,147,0,9,144,0,9,144,0,9,144,0,9,4,159,0,5,116,240,153,179,68,18,32,1,18,32,1,18,32,1,18,32,129,8,38,64,1,29,193,157,199,170,147,0,9,144,0,9,144,0,9,
    144,0,9,4,159,0,5,116,240,153,179,68,18,32,1,18,32,1,18,32,1,18,32,129,8,38,64,1,29,193,157,199,170,147,0,9,144,0,9,144,64,56,17,48,153,76,225,84,29,214,133,4,2,70,128,111,34,12,24,90,26,38,1,18,32,1,
    18,32,129,216,33,96,54,155,165,168,94,119,89,223,246,102,49,91,226,196,98,177,8,5,117,236,244,127,172,181,148,30,232,88,235,113,182,151,4,124,32,208,183,71,7,25,122,86,31,253,57,119,80,79,57,238,152,163,
    164,78,70,154,15,22,68,78,62,241,24,41,92,245,153,124,62,230,63,62,29,231,77,230,248,248,56,185,105,228,96,73,72,240,143,47,0,39,251,145,67,79,145,122,117,51,188,41,158,121,72,128,4,14,17,192,111,71,11,
    230,156,46,146,215,126,148,228,119,188,74,253,46,19,4,162,154,137,4,162,145,128,127,206,58,209,72,134,109,34,1,18,144,59,71,95,32,167,245,235,230,68,162,172,172,92,38,125,243,147,60,240,236,135,178,97,
    243,14,167,125,238,86,204,102,147,64,232,90,44,254,63,145,142,186,232,84,121,254,129,171,100,237,134,173,50,229,199,5,238,138,247,105,91,187,86,141,229,141,199,174,151,87,222,155,34,255,250,239,56,159,
    142,101,102,18,136,85,2,16,207,16,202,16,204,233,233,233,18,23,87,225,125,78,78,78,166,23,58,86,7,69,12,180,219,255,103,180,24,128,198,38,146,64,172,17,248,118,230,2,121,249,157,111,228,171,105,243,164,
    172,188,92,70,156,219,95,190,123,255,33,201,72,79,13,25,10,120,157,239,185,225,66,249,233,247,165,126,17,207,104,200,242,213,185,242,254,103,63,202,181,35,78,147,6,245,50,67,214,54,22,76,2,145,70,0,34,
    58,62,62,94,82,83,83,165,78,157,58,146,145,145,33,73,73,73,90,88,99,31,19,9,68,27,1,122,160,163,173,71,217,30,18,8,0,129,241,159,207,146,143,39,255,164,45,55,172,159,41,179,63,121,66,218,180,108,36,255,
    190,246,92,185,255,153,241,122,59,194,30,206,63,253,68,105,148,147,37,139,254,94,35,159,125,247,139,199,154,156,222,255,88,233,174,194,65,172,86,171,204,250,117,137,204,93,176,92,122,118,109,43,93,58,
    180,148,101,255,108,148,57,243,150,234,99,187,180,111,41,61,187,181,149,191,150,173,147,95,23,174,112,178,7,207,56,202,186,229,193,49,122,123,211,70,217,114,198,73,221,245,241,181,107,165,202,241,93,218,
    202,111,234,152,201,51,230,203,224,83,142,87,235,109,116,189,62,159,250,171,206,159,154,146,36,23,159,211,79,90,53,205,81,158,244,157,50,254,139,153,114,224,96,161,188,48,238,107,21,198,113,170,12,63,
    187,175,60,247,214,151,78,101,114,133,4,72,192,61,1,35,132,3,158,104,155,205,166,51,97,153,226,217,61,47,110,141,124,2,20,208,145,223,135,108,1,9,4,149,192,150,237,123,228,241,87,63,145,49,79,220,168,
    99,162,81,120,159,227,59,200,151,111,221,43,73,137,9,82,92,82,42,181,210,83,228,195,47,102,201,229,183,63,95,169,110,207,220,119,165,220,58,234,108,249,103,221,22,105,210,176,174,60,116,219,197,50,226,
    230,103,37,119,203,78,121,229,191,215,201,218,141,219,164,77,191,107,245,113,15,255,235,98,57,115,192,113,114,198,229,15,85,178,115,116,235,38,130,112,146,31,126,254,83,239,235,212,182,153,62,126,199,
    174,125,42,134,185,182,61,255,55,211,127,215,2,218,216,112,237,61,175,202,184,137,211,100,230,164,199,164,91,199,86,82,174,60,234,136,221,108,209,164,190,220,249,216,59,178,116,213,70,93,151,14,109,154,
    26,135,240,155,4,72,192,11,2,16,203,20,204,94,128,98,150,168,32,192,16,142,168,232,70,54,130,4,130,75,96,171,18,209,72,77,27,102,235,239,113,79,223,172,99,156,219,13,184,78,26,116,191,76,254,88,178,90,
    135,121,116,106,215,76,239,119,252,243,200,139,19,101,208,37,15,72,199,83,111,144,1,195,238,213,39,220,107,70,12,210,30,230,5,139,255,145,150,202,35,124,82,175,78,90,132,159,218,187,139,108,84,222,225,
    31,126,170,16,201,142,118,218,31,213,84,182,43,177,156,95,80,228,184,89,18,19,226,181,224,126,237,253,41,122,59,30,98,60,123,212,127,229,165,183,191,214,235,231,168,135,33,155,53,170,167,197,243,222,253,
    7,165,89,175,81,114,254,53,143,201,93,143,191,107,183,179,90,197,84,35,30,154,137,4,72,192,119,2,134,7,218,247,35,121,4,9,68,14,1,122,160,35,167,175,88,83,18,8,27,2,39,30,215,94,215,5,161,21,245,149,183,
    23,162,23,225,24,139,190,123,81,111,79,78,76,212,223,157,143,110,33,240,8,59,166,65,42,244,226,63,42,118,25,30,94,227,9,253,198,57,117,117,150,23,223,254,70,62,120,225,118,185,82,61,28,216,168,65,93,245,
    80,82,188,188,251,201,116,251,45,97,71,59,240,114,23,21,151,56,110,210,203,63,47,88,38,211,230,44,146,146,146,50,185,254,178,51,5,162,28,15,24,110,221,177,87,110,190,114,136,100,213,78,151,220,173,187,
    180,167,27,245,94,255,203,56,153,175,242,20,42,91,56,14,169,168,184,148,49,208,154,4,255,144,128,247,4,32,156,173,187,84,168,213,230,249,98,50,91,68,58,14,215,23,200,244,74,123,207,144,57,35,135,0,5,116,
    228,244,21,107,74,2,33,39,128,16,141,75,207,63,73,254,117,245,57,186,46,159,76,249,89,246,31,40,208,97,16,101,101,86,121,232,249,9,82,90,90,166,103,221,192,55,98,161,17,167,108,36,120,126,63,124,241,95,
    90,204,14,29,253,164,158,197,227,167,207,158,84,94,227,138,127,138,96,239,169,255,92,33,231,158,214,75,133,119,100,107,81,254,142,18,208,238,210,202,53,155,164,127,207,142,149,118,149,168,114,145,202,
    149,160,71,42,85,97,30,72,86,107,69,92,102,197,178,85,142,31,124,187,158,158,111,96,191,174,114,206,192,158,242,217,155,247,72,214,49,23,107,225,157,147,93,91,86,40,251,76,36,64,2,222,17,128,120,70,56,
    148,117,213,84,73,152,126,187,216,76,22,41,105,123,129,126,176,144,2,218,59,134,204,21,89,4,24,194,17,89,253,197,218,146,64,72,8,188,246,232,117,178,237,143,15,228,192,242,143,229,245,71,175,215,2,249,
    217,49,95,8,30,200,131,23,248,147,41,115,37,49,49,94,250,41,65,27,23,103,145,107,46,30,36,173,155,55,80,179,90,56,139,208,236,172,90,218,235,156,119,176,64,118,239,59,160,99,147,33,202,141,132,152,230,
    55,198,127,167,99,169,123,43,47,55,66,55,114,183,236,50,118,59,125,47,251,39,87,210,211,82,228,24,229,229,174,73,194,244,119,8,49,153,54,123,145,110,131,217,100,22,124,224,217,238,212,182,185,172,112,
    169,123,77,202,224,49,36,16,43,4,32,160,75,74,74,164,184,184,216,222,228,194,194,66,45,170,25,210,97,71,194,133,40,34,64,15,116,20,117,38,155,66,2,129,34,80,187,86,154,246,6,175,223,180,67,150,172,88,
    47,207,143,253,74,79,31,103,148,55,250,222,215,164,176,168,88,46,61,111,128,156,59,168,151,14,219,248,83,133,119,184,158,56,255,88,178,70,38,124,53,91,205,112,209,79,63,196,135,7,13,15,230,23,26,102,244,
    247,155,31,78,85,33,30,67,181,32,127,123,210,15,78,251,28,87,230,204,251,91,63,68,136,23,159,220,250,240,91,142,187,170,93,206,201,174,35,173,91,52,148,94,221,218,233,188,136,133,190,251,137,247,180,144,
    30,53,236,84,125,17,48,227,208,195,137,213,26,99,6,18,136,113,2,248,157,35,132,171,180,180,84,74,149,128,78,63,196,3,2,26,83,217,241,141,132,49,62,64,162,180,249,38,75,243,33,135,239,107,70,72,35,59,52,
    201,151,133,79,253,238,177,182,150,30,202,99,101,58,236,213,242,152,145,59,72,160,26,2,214,197,61,196,86,176,220,109,174,81,111,180,147,241,179,27,184,221,23,171,27,241,194,148,186,117,106,169,16,141,
    138,135,12,61,113,168,155,89,75,157,108,203,85,248,71,126,165,44,105,169,201,146,251,219,219,58,14,185,105,175,43,117,72,72,165,76,135,54,188,245,228,141,50,108,72,95,233,112,202,13,250,97,67,79,249,60,
    109,199,60,214,25,181,82,4,51,139,192,251,157,146,156,40,203,127,124,93,214,229,110,151,254,67,239,241,116,88,76,110,47,24,63,75,9,33,247,167,11,75,199,25,34,105,199,197,36,23,54,90,244,133,114,89,89,
    153,228,229,229,73,233,47,47,72,206,194,255,233,16,142,220,43,214,74,118,118,182,186,24,78,180,63,239,64,94,177,73,192,182,122,164,138,143,255,204,109,227,159,159,220,84,238,254,176,149,219,125,225,188,
    145,30,232,112,238,29,214,141,4,34,140,0,226,158,171,19,207,104,210,174,61,121,149,90,214,81,77,67,119,197,133,39,75,215,14,173,116,104,198,27,227,63,255,127,123,119,31,35,249,93,215,1,252,51,51,59,251,
    188,189,227,122,237,245,129,158,245,56,8,73,83,109,84,140,137,154,0,23,64,67,52,145,127,180,255,152,0,33,81,18,139,198,88,18,30,20,255,168,1,106,136,32,208,98,21,104,125,128,24,149,88,31,2,82,43,24,5,
    41,149,135,82,184,86,123,22,106,75,107,1,91,185,187,185,217,217,221,25,231,59,117,214,93,174,108,239,118,231,247,155,249,125,231,53,201,118,158,191,223,239,231,245,153,219,123,247,123,191,153,217,49,60,
    167,1,110,248,221,63,237,127,148,222,243,226,162,3,251,118,21,160,83,128,223,26,226,211,56,233,13,134,111,121,199,159,156,181,62,55,16,32,176,179,192,112,39,122,248,168,180,43,253,157,255,10,53,188,207,
    57,129,170,11,8,208,85,239,160,245,19,200,68,224,135,190,239,185,131,207,135,78,229,220,115,252,171,241,246,155,159,126,183,98,107,185,233,144,146,107,126,226,186,173,55,237,233,114,250,106,242,31,123,
    197,245,123,26,195,147,9,16,32,64,32,127,1,1,58,255,30,171,144,64,37,4,210,199,213,253,245,223,223,21,179,253,195,64,210,33,21,78,4,8,16,32,64,96,82,5,4,232,73,237,140,117,17,152,66,129,167,59,180,99,
    10,25,148,76,128,0,1,2,19,46,224,99,236,38,188,65,150,71,128,0,1,2,4,8,16,32,48,89,2,118,160,39,171,31,86,51,69,2,71,47,105,197,145,67,237,168,199,211,127,178,193,20,81,40,117,7,129,51,157,70,124,238,
    171,203,113,242,140,95,215,59,48,185,139,0,1,2,165,10,248,141,92,42,183,201,8,68,236,91,92,143,91,127,233,43,241,147,215,124,11,7,129,115,18,104,173,54,226,215,254,232,104,252,254,29,151,157,211,227,61,
    136,0,1,2,4,138,21,112,8,71,177,190,70,39,112,150,192,251,126,225,62,225,249,44,21,55,236,36,176,56,183,17,239,121,245,253,113,236,234,39,118,122,152,251,8,16,32,64,160,36,1,1,186,36,104,211,16,72,2,7,
    47,88,139,159,121,193,55,96,16,216,149,192,171,95,252,245,93,61,207,147,8,16,32,64,96,180,2,2,244,104,61,141,70,96,71,129,203,159,181,186,227,253,238,36,176,147,192,179,15,122,253,236,228,227,62,2,4,8,
    148,37,32,64,151,37,109,30,2,125,129,122,221,27,6,189,16,118,47,80,243,134,211,221,227,121,38,1,2,4,70,40,32,64,143,16,211,80,4,8,16,32,64,128,0,1,2,249,11,248,20,142,252,123,172,194,10,9,212,154,23,85,
    104,181,150,90,136,64,247,76,244,54,78,21,50,180,65,9,16,32,64,96,52,2,2,244,104,28,141,66,96,36,2,245,31,60,49,146,113,12,82,93,129,222,127,221,18,189,7,127,181,186,5,88,57,1,2,4,166,64,64,128,158,130,
    38,43,145,0,1,2,4,8,20,45,80,171,213,162,59,183,47,90,139,87,244,223,240,49,19,233,186,19,129,92,5,4,232,92,59,171,46,2,4,8,16,32,80,146,64,10,203,141,70,35,218,71,95,17,199,47,58,22,205,102,51,14,246,
    127,234,117,111,181,42,169,5,166,41,89,64,128,46,25,220,116,4,8,16,32,64,32,55,129,20,160,83,104,94,90,90,26,236,60,167,48,61,63,63,63,8,208,118,162,115,235,182,122,146,128,0,237,117,64,128,0,1,2,4,8,
    236,90,32,5,228,180,211,60,59,59,27,43,43,43,131,224,156,110,155,155,155,27,236,74,11,208,187,166,245,196,9,22,16,160,39,184,57,150,70,128,0,1,2,4,170,32,144,66,242,112,215,57,5,231,116,74,161,218,33,
    28,85,232,158,53,238,70,64,128,222,141,154,231,16,32,64,128,0,1,2,219,4,82,88,222,186,219,188,245,242,182,7,186,66,32,3,1,1,58,131,38,42,129,0,1,2,4,8,76,130,128,208,60,9,93,176,134,50,4,4,232,50,148,
    205,65,128,0,1,2,4,166,64,160,215,235,69,250,25,6,233,225,249,20,148,174,196,41,19,240,249,50,83,214,112,229,18,32,64,128,0,129,81,11,164,208,220,237,118,163,123,247,205,81,123,235,74,196,219,246,199,
    198,198,198,32,76,143,122,46,227,17,152,4,1,1,122,18,186,96,13,4,8,16,32,64,160,194,2,41,64,175,173,173,197,106,235,84,212,214,90,17,157,211,209,110,183,133,232,10,247,212,210,119,22,16,160,119,246,113,
    47,1,2,4,8,16,32,176,131,192,240,176,141,78,167,51,8,205,195,135,182,90,173,65,128,30,94,119,78,32,39,1,1,58,167,110,170,133,0,1,2,4,8,140,65,96,184,3,157,118,161,135,167,213,213,213,193,97,29,233,62,
    39,2,185,9,8,208,185,117,84,61,4,8,16,32,64,160,100,129,20,146,7,199,64,247,143,131,30,158,210,117,225,121,168,225,60,55,1,1,58,183,142,170,135,0,1,2,4,8,140,73,96,107,96,222,122,121,76,203,49,45,129,
    194,4,4,232,194,104,13,76,128,0,1,2,4,8,16,32,144,163,128,0,157,99,87,213,68,128,0,1,2,4,8,16,32,80,152,128,0,93,24,173,129,9,16,32,64,128,0,1,2,4,114,20,16,160,115,236,170,154,8,16,32,64,128,0,1,2,4,
    10,19,16,160,11,163,53,48,1,2,4,8,16,32,64,128,64,142,2,2,116,142,93,85,19,1,2,4,8,16,32,64,128,64,97,2,2,116,97,180,6,38,64,128,0,1,2,4,8,16,200,81,64,128,206,177,171,106,34,64,128,0,1,2,4,8,16,40,76,
    64,128,46,140,214,192,4,8,16,32,64,128,0,1,2,57,10,8,208,57,118,85,77,4,8,16,32,64,128,0,1,2,133,9,8,208,133,209,26,152,0,1,2,4,8,16,32,64,32,71,1,1,58,199,174,170,137,0,1,2,4,8,16,32,64,160,48,1,1,186,
    48,90,3,19,32,64,128,0,129,233,18,168,213,106,155,5,111,189,188,121,163,11,4,50,17,152,201,164,14,101,16,32,64,128,0,1,2,99,20,168,215,235,113,250,240,75,227,203,205,203,99,102,166,25,139,253,235,66,244,
    24,27,98,234,66,5,4,232,66,121,13,78,128,0,1,2,4,242,23,72,65,121,102,102,38,102,15,92,25,171,205,11,163,127,37,230,230,230,34,133,106,33,58,255,254,79,99,133,2,244,52,118,93,205,4,8,16,32,64,96,68,2,
    41,32,167,160,156,2,243,202,202,74,204,206,206,70,163,209,136,133,133,133,193,249,136,166,49,12,129,137,18,16,160,39,170,29,22,67,128,0,1,2,4,170,39,48,220,129,94,90,90,138,249,249,249,193,174,115,218,
    145,78,65,218,14,116,245,250,105,197,207,44,32,64,63,179,145,71,16,32,64,128,0,1,2,59,8,12,119,161,211,78,116,10,206,233,148,110,19,158,119,64,115,87,165,5,4,232,74,183,207,226,9,16,32,64,128,192,100,
    8,12,195,242,240,124,50,86,101,21,4,138,17,16,160,139,113,53,42,1,2,4,8,16,152,58,129,94,175,183,89,179,32,189,73,225,66,134,2,2,116,134,77,85,18,1,2,4,8,16,40,91,160,219,237,70,239,161,127,138,56,254,
    231,81,171,207,68,239,37,55,58,140,163,236,38,152,175,52,1,95,164,82,26,181,137,8,16,32,64,128,64,158,2,105,231,121,99,99,35,214,31,190,59,26,119,189,43,106,159,121,103,116,58,157,72,161,218,137,64,142,
    2,2,116,142,93,85,19,1,2,4,8,16,40,73,32,133,231,20,148,83,96,94,93,93,221,156,181,213,106,13,66,245,214,195,58,54,239,116,129,64,197,5,4,232,138,55,208,242,9,16,32,64,128,192,184,5,82,72,94,91,91,219,
    22,160,219,237,246,32,88,11,208,227,238,142,249,139,16,16,160,139,80,53,38,1,2,4,8,16,152,34,129,20,146,7,135,112,172,175,111,86,189,222,191,236,16,142,77,14,23,50,19,16,160,51,107,168,114,8,16,32,64,
    128,192,56,4,82,136,222,186,219,44,60,143,163,11,230,44,75,64,128,46,75,218,60,4,8,16,32,64,128,0,1,2,89,8,8,208,89,180,81,17,4,8,16,32,64,128,0,1,2,101,9,8,208,101,73,155,135,0,1,2,4,8,16,32,64,32,11,
    1,1,58,139,54,42,130,0,1,2,4,8,16,32,64,160,44,1,1,186,44,105,243,16,32,64,128,0,1,2,4,8,100,33,32,64,103,209,70,69,16,32,64,128,0,1,2,4,8,148,37,32,64,151,37,109,30,2,4,8,16,32,64,128,0,129,44,4,4,232,
    44,218,168,8,2,4,8,16,32,64,128,0,129,178,4,4,232,178,164,205,67,128,0,1,2,4,8,16,32,144,133,128,0,157,69,27,21,65,128,0,1,2,4,8,16,32,80,150,128,0,93,150,180,121,8,16,32,64,128,0,1,2,4,178,16,16,160,
    179,104,163,34,8,16,32,64,128,0,1,2,4,202,18,16,160,203,146,54,15,1,2,4,8,16,32,64,128,64,22,2,51,89,84,161,8,2,4,8,16,32,64,96,172,2,181,90,45,214,247,29,137,111,92,250,210,168,213,27,81,175,215,35,221,
    230,68,32,71,1,1,58,199,174,170,137,0,1,2,4,8,148,40,144,130,114,163,209,136,245,195,47,138,135,247,253,64,52,155,205,184,176,255,35,64,151,216,4,83,149,42,32,64,151,202,109,50,2,4,8,16,32,144,151,64,
    10,201,233,103,118,118,54,150,151,151,7,59,207,41,76,47,44,44,12,66,181,16,157,87,191,85,243,148,128,0,237,149,64,128,0,1,2,4,8,236,73,32,29,174,49,12,208,243,243,243,155,129,58,5,105,1,122,79,180,158,
    60,161,2,2,244,132,54,198,178,8,16,32,64,128,64,85,4,82,72,78,97,121,110,110,110,16,164,211,186,29,3,93,149,238,89,231,110,4,4,232,221,168,121,14,1,2,4,8,16,32,176,77,96,24,162,123,189,222,224,118,59,
    207,219,120,92,201,76,64,128,206,172,161,202,33,64,128,0,1,2,227,20,16,156,199,169,111,238,178,4,4,232,178,164,205,67,128,0,1,2,4,50,22,72,59,207,189,246,19,209,59,249,216,224,184,231,218,193,231,59,254,
    57,227,126,79,123,105,190,72,101,218,95,1,234,39,64,128,0,1,2,123,20,72,225,185,219,237,198,198,231,111,139,198,77,87,69,237,166,171,99,125,125,125,112,219,30,135,246,116,2,19,41,32,64,79,100,91,44,138,
    0,1,2,4,8,84,71,32,5,232,181,181,181,88,93,93,221,92,116,187,221,30,4,232,225,49,209,155,119,184,64,32,3,1,1,58,131,38,42,129,0,1,2,4,8,140,75,96,184,251,220,233,116,182,5,232,86,171,21,27,27,27,227,90,
    150,121,9,20,42,32,64,23,202,107,112,2,4,8,16,32,144,191,64,10,209,233,144,141,180,11,61,60,165,64,157,14,235,176,3,61,20,113,158,147,64,158,111,34,124,242,227,17,181,102,78,125,82,203,184,4,54,78,141,
    107,102,243,18,32,64,160,82,2,223,25,150,211,238,179,240,92,169,22,90,236,121,8,100,25,160,55,238,191,246,60,8,60,148,192,228,8,244,190,246,134,201,89,140,149,140,69,160,215,250,210,88,230,221,203,164,
    189,199,110,138,104,126,100,47,67,120,110,133,5,250,155,207,209,219,232,239,52,127,123,53,186,79,222,245,84,37,189,254,245,71,110,236,127,42,199,98,244,230,102,162,87,175,85,184,66,75,223,171,64,239,244,
    61,123,29,98,226,158,159,101,128,158,56,101,11,34,112,142,2,221,71,223,125,142,143,244,48,2,147,35,208,253,230,159,77,206,98,172,164,116,129,20,160,187,253,67,157,187,167,250,23,78,117,254,111,254,254,
    167,114,60,126,107,116,215,106,209,157,237,135,103,7,140,150,222,23,19,22,43,224,37,93,172,175,209,9,16,32,64,128,0,1,2,4,50,19,168,100,128,238,172,251,167,160,204,94,135,149,44,167,179,86,201,63,62,149,
    180,182,104,2,4,170,39,80,243,87,117,245,154,102,197,231,44,80,201,67,56,30,124,124,33,254,251,84,51,14,44,255,255,187,125,207,185,98,15,36,48,34,129,207,63,184,114,222,35,157,60,211,56,239,231,120,2,
    129,161,192,56,95,63,39,219,51,177,127,201,239,220,97,47,156,111,23,72,97,185,222,223,83,248,159,131,51,241,200,92,35,154,51,181,56,208,63,238,217,215,122,111,119,114,237,108,129,147,237,106,254,189,88,
    201,45,180,245,141,90,188,225,67,207,57,187,11,110,33,80,146,192,45,119,92,22,255,254,232,226,121,207,246,192,99,139,113,162,255,227,68,96,55,2,31,251,194,133,187,121,218,72,158,243,177,47,28,24,201,56,
    6,201,83,32,5,232,102,127,75,110,105,190,30,75,203,245,88,92,170,197,252,236,83,161,218,78,116,158,61,31,85,85,127,247,197,106,254,110,169,228,14,116,106,218,7,238,188,52,158,56,217,140,235,94,254,80,
    60,231,208,153,240,6,223,81,189,148,141,243,221,4,250,111,143,137,199,158,156,141,63,252,228,37,241,238,143,94,241,221,30,246,140,183,191,230,230,231,199,237,175,255,98,44,47,248,130,129,103,196,242,128,
    77,129,79,124,101,127,220,244,241,203,55,175,151,125,225,245,127,124,52,126,248,185,223,142,239,189,248,76,217,83,155,111,194,5,82,64,174,245,127,65,206,54,107,113,193,82,175,31,156,107,131,221,232,20,
    160,103,170,185,185,56,225,226,249,44,239,183,111,63,28,159,125,224,130,74,22,84,107,92,249,211,41,23,56,17,32,80,162,192,21,7,219,241,202,23,62,26,71,14,181,251,255,243,231,143,96,137,244,149,155,234,
    76,167,30,255,120,223,254,248,240,63,31,234,127,171,219,120,15,42,77,255,211,247,170,23,125,61,190,255,240,233,254,110,99,183,114,150,22,92,156,64,250,36,142,116,234,118,123,49,252,141,86,239,39,235,65,
    184,30,239,203,246,169,133,249,239,196,8,164,215,202,19,167,155,113,251,221,7,227,206,123,159,53,49,235,58,223,133,8,208,231,43,230,241,4,8,16,32,64,128,0,1,2,83,45,80,201,99,160,167,186,99,138,39,64,
    128,0,1,2,4,8,16,24,171,128,0,61,86,126,147,19,32,64,128,0,1,2,4,8,84,77,64,128,174,90,199,172,151,0,1,2,4,8,16,32,64,96,172,2,2,244,88,249,77,78,128,0,1,2,4,8,16,32,80,53,1,1,186,106,29,179,94,2,4,8,
    16,32,64,128,0,129,177,10,8,208,99,229,55,57,1,2,4,8,16,32,64,128,64,213,4,4,232,170,117,204,122,9,16,32,64,128,0,1,2,4,198,42,80,217,111,34,28,171,154,201,9,16,32,64,128,0,129,109,2,183,191,255,205,113,
    229,179,47,142,3,251,87,162,255,21,42,241,248,183,158,140,79,253,235,241,120,239,109,127,27,95,254,183,135,182,61,214,21,2,85,23,240,69,42,85,239,160,245,19,32,64,128,0,129,9,16,232,156,248,72,255,43,
    188,207,254,135,237,147,167,90,113,236,218,55,197,231,238,61,49,1,171,180,4,2,163,17,56,251,149,62,154,113,141,66,128,0,1,2,4,8,76,161,192,117,191,241,190,184,234,216,107,227,117,111,249,189,254,87,123,
    119,99,101,121,49,94,115,237,203,166,80,66,201,57,11,8,208,57,119,87,109,4,8,16,32,64,160,100,129,135,31,253,102,220,255,31,143,196,123,110,253,155,184,243,83,247,12,102,63,242,61,151,148,188,10,211,17,
    40,86,64,128,46,214,215,232,4,8,16,32,64,96,42,5,26,141,122,92,245,188,195,131,218,63,249,47,247,78,165,129,162,243,21,240,38,194,124,123,171,50,2,4,8,16,32,80,186,192,177,31,189,38,142,94,121,89,188,
    252,197,47,136,75,47,62,16,107,107,235,241,87,119,124,166,244,117,152,144,64,145,2,222,68,88,164,174,177,9,16,32,64,128,192,148,8,60,221,155,8,239,59,241,112,252,252,47,191,195,27,8,167,228,53,48,77,101,
    58,132,99,154,186,173,86,2,4,8,16,32,80,176,192,27,223,126,91,252,206,31,252,229,96,150,217,230,76,156,106,181,11,158,209,240,4,202,23,16,160,203,55,55,35,1,2,4,8,16,200,86,224,248,3,255,25,215,255,214,
    7,227,222,251,191,22,71,14,95,18,239,189,225,23,179,173,85,97,211,43,32,64,79,111,239,85,78,128,0,1,2,4,10,17,72,31,95,247,43,191,121,203,96,236,23,254,200,213,241,179,63,245,227,133,204,99,80,2,227,18,
    16,160,199,37,111,94,2,4,8,16,32,144,177,192,63,124,250,75,241,23,31,253,244,160,194,27,223,248,202,88,94,90,200,184,90,165,77,155,128,0,61,109,29,87,47,1,2,4,8,16,40,73,224,250,27,222,31,237,213,78,92,
    118,232,194,248,245,215,253,92,73,179,154,134,64,241,2,62,133,163,120,99,51,16,32,64,128,0,1,2,4,8,100,36,96,7,58,163,102,42,133,0,1,2,4,8,16,32,64,160,120,1,1,186,120,99,51,16,32,64,128,0,1,2,4,8,100,
    36,32,64,103,212,76,165,16,32,64,128,0,1,2,4,8,20,47,32,64,23,111,108,6,2,4,8,16,32,64,128,0,129,140,4,4,232,140,154,169,20,2,4,8,16,32,64,128,0,129,226,5,4,232,226,141,205,64,128,0,1,2,4,8,16,32,144,
    145,128,0,157,81,51,149,66,128,0,1,2,4,8,16,32,80,188,128,0,93,188,177,25,8,16,32,64,128,0,1,2,4,50,18,16,160,51,106,166,82,8,16,32,64,128,0,1,2,4,138,23,16,160,139,55,54,3,1,2,4,8,16,32,64,128,64,70,
    2,2,116,70,205,84,10,1,2,4,8,16,32,64,128,64,241,2,2,116,241,198,102,32,64,128,0,1,2,4,8,16,200,72,224,127,1,107,101,80,160,234,161,232,84,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* UpmixerComponents::slide1_png4 = (const char*) resource_UpmixerComponents_slide1_png4;
const int UpmixerComponents::slide1_png4Size = 30448;


//[EndFile] You can add extra defines here...
//[/EndFile]

