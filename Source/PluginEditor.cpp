/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
PFMProject0NewJan2021AudioProcessorEditor::PFMProject0NewJan2021AudioProcessorEditor (PFMProject0NewJan2021AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

PFMProject0NewJan2021AudioProcessorEditor::~PFMProject0NewJan2021AudioProcessorEditor()
{
    //audioProcessor.shouldPlaySound->beginChangeGesture();
    //audioProcessor.shouldPlaySound->setValueNotifyingHost(false);
    //audioProcessor.shouldPlaySound->endChangeGesture();
    PFMProject0NewJan2021AudioProcessor::UpdateAutomatableParameter(audioProcessor.shouldPlaySound, false);
}

//==============================================================================
void PFMProject0NewJan2021AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Lads.... it works!", getLocalBounds(), juce::Justification::centred, 1);
}

void PFMProject0NewJan2021AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

void PFMProject0NewJan2021AudioProcessorEditor::mouseUp(const juce::MouseEvent &e)
{
    //audioProcessor.shouldPlaySound->beginChangeGesture();
    //audioProcessor.shouldPlaySound->setValueNotifyingHost( !audioProcessor.shouldPlaySound->get() );
    //audioProcessor.shouldPlaySound->endChangeGesture();
    PFMProject0NewJan2021AudioProcessor::UpdateAutomatableParameter(audioProcessor.shouldPlaySound, !audioProcessor.shouldPlaySound->get());
}

void PFMProject0NewJan2021AudioProcessorEditor::mouseDown(const juce::MouseEvent &e)
{
    //audioProcessor.shouldPlaySound = true;
}
