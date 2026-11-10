#pragma once
#include <juce_graphics/juce_graphics.h>

// ============================================================================
//  BRAND / LOOK  -  change colours and text here, nothing else needs touching.
//  (The plugin NAME and VERSION live in CMakeLists.txt, top of the file.)
// ============================================================================
namespace sty
{
    // Bloodline palette (CrushAudio Skin Kit design tokens)
    const juce::Colour bg      { 0xff070708 };   // window background (void)
    const juce::Colour panel   { 0xff141418 };   // buttons / dropdowns (panel)
    const juce::Colour accent  { 0xffc51f38 };   // blood red: active states
    const juce::Colour neon    { 0xffe12b49 };   // corrected pitch line (blood glow)
    const juce::Colour silver  { 0xffe6e7ea };   // highlights / value text
    const juce::Colour silverDim { 0xff777980 }; // quiet structural lines
    const juce::Colour rawLine { 0xff777980 };   // original pitch line
    const juce::Colour text    { 0xffe7e5e6 };

    inline const char* tagline() { return "THE VOICE  /  CRUSHAUDIO"; }
}
