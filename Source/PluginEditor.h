/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
//#include "PluginProcessor.h"

//==============================================================================
/**
*/
struct PFMProject0NewJan2021AudioProcessor;

class PFMProject0NewJan2021AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PFMProject0NewJan2021AudioProcessorEditor (PFMProject0NewJan2021AudioProcessor&);
    ~PFMProject0NewJan2021AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void mouseDown(const juce::MouseEvent& e) override;
    void mouseUp(const juce::MouseEvent& e) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PFMProject0NewJan2021AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFMProject0NewJan2021AudioProcessorEditor)
};
