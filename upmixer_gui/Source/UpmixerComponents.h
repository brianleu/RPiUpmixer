/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.1

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
                           public ButtonListener
{
public:
    //==============================================================================
    UpmixerComponents ();
    ~UpmixerComponents();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);
    void mouseMove (const MouseEvent& e);

    // Binary resources:
    static const char* slide1_png;
    static const int slide1_pngSize;
    static const char* slide1_png2;
    static const int slide1_png2Size;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> RRslider;
    ScopedPointer<Slider> RLslider;
    ScopedPointer<Slider> LFEslider;
    ScopedPointer<Slider> Cslider;
    ScopedPointer<Slider> FLslider;
    ScopedPointer<Slider> FRslider;
    ScopedPointer<TextButton> demoButton;
    ScopedPointer<TextButton> sourceButton;
    ScopedPointer<TextButton> reverbButton;
    ScopedPointer<TextButton> userButton;
    ScopedPointer<Label> modeLabel;
    Image cachedImage_slide1_png2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (UpmixerComponents)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1A94844AEF12C080__
