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

#ifndef __JUCE_HEADER_1A94844AEF12C080__
#define __JUCE_HEADER_1A94844AEF12C080__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class UpmixerComponents  : public Component,
                           public SliderListener,
                           public ComboBoxListener
{
public:
    //==============================================================================
    UpmixerComponents ();
    ~UpmixerComponents();

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void mouseDrag (const MouseEvent& event);
    void handleMouse (const MouseEvent& event);
    
    // Binary resources:
    static const char* slide1_png;
    static const int slide1_pngSize;
    static const char* slide1_png2;
    static const int slide1_png2Size;
    static const char* slide1_png3;
    static const int slide1_png3Size;
    static const char* slide1_png4;
    static const int slide1_png4Size;
    
    bool decoderMode;
    bool userInputMode;
    bool manualSourceMode;
    bool sourceRotationMode;
    
    double FLslidervalue;
    double FRslidervalue;
    double Cslidervalue;
    double RLslidervalue;
    double RRslidervalue;
    double LFEslidervalue;
    
    double delaySlidervalue;
    double centerCutoffvalue;
    double surroundCutoffvalue;
    double LFECutoffvalue;
    
    String xCoord, yCoord;
    int x, y;

private:
    //==============================================================================
    ScopedPointer<Slider> RRslider;
    ScopedPointer<Slider> RLslider;
    ScopedPointer<Slider> LFEslider;
    ScopedPointer<Slider> Cslider;
    ScopedPointer<Slider> FLslider;
    ScopedPointer<Slider> FRslider;
    ScopedPointer<Label> modeLabel;
    ScopedPointer<Slider> cutoffSliderLFE;
    ScopedPointer<Slider> cutoffSliderSurround;
    ScopedPointer<Slider> cutoffSliderC;
    ScopedPointer<Slider> delaySlider;
    ScopedPointer<ComboBox> sourceComboBox;
    ScopedPointer<ComboBox> modeComboBox;
    
    Image cachedImage_slide1_png4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (UpmixerComponents)
   
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1A94844AEF12C080__
