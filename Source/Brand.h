#pragma once
#include <juce_graphics/juce_graphics.h>
#include "Bloodline.h"

// ============================================================================
//  BRAND / LOOK  -  change colours and text here, nothing else needs touching.
//  (The plugin NAME and VERSION live in CMakeLists.txt, top of the file.)
// ============================================================================
namespace sty
{
    // Bloodline palette - values live in Bloodline.h (shared by all CrushAudio plugins)
    const juce::Colour bg        { bl::voidC };
    const juce::Colour panel     { bl::panel };
    const juce::Colour accent    { bl::blood };       // active states
    const juce::Colour neon      { bl::glow };        // corrected pitch line
    const juce::Colour silver    { bl::silverBright };
    const juce::Colour silverDim { bl::silverDim };
    const juce::Colour rawLine   { bl::silverDim };   // original pitch line
    const juce::Colour text      { bl::text };

    inline const char* tagline() { return "THE VOICE  /  CRUSHAUDIO"; }
}
