/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class TestAudioProcessorEditor  : public AudioProcessorEditor,
private Slider::Listener, private Button::Listener
{
public:
    TestAudioProcessorEditor (TestAudioProcessor&);
    ~TestAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void sliderValueChanged (Slider* slider) override;
    
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TestAudioProcessor& pluginProcessor;
    
    Slider key;
    Slider mode;
    Slider chordChooser;
    Label keyLabel;
    Label modeLabel;
    Label chordLabel;
    ToggleButton toggleChordMode;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestAudioProcessorEditor)

    void ButtonClicked(Button *button);

    void buttonClicked(Button *button);
};


#endif  // PLUGINEDITOR_H_INCLUDED
