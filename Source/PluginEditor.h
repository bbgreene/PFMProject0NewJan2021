/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PFMProject0NewJan2021AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PFMProject0NewJan2021AudioProcessorEditor (PFMProject0NewJan2021AudioProcessor&);
    ~PFMProject0NewJan2021AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PFMProject0NewJan2021AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFMProject0NewJan2021AudioProcessorEditor)
};
