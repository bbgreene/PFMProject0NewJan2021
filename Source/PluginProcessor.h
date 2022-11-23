/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/
/*
TODO:
 Click anywhere on the window, and play a note
 if you click and drag, it will change the pitch of the note
 Should we play a sound? (did this)
 */

#pragma once

#include <JuceHeader.h>

//==============================================================================
/**
*/
class PFMProject0NewJan2021AudioProcessor  : public juce::AudioProcessor
{
public:
    //==============================================================================
    PFMProject0NewJan2021AudioProcessor();
    ~PFMProject0NewJan2021AudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;

    //==============================================================================
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    juce::AudioParameterBool* shouldPlaySound = nullptr; //  = false;
    
    static void UpdateAutomatableParameter(juce::RangedAudioParameter*, float value);

private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFMProject0NewJan2021AudioProcessor)
};
