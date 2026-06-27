#pragma once

#include <coreinit/debug.h>

namespace Ship {
namespace WiiU {

inline void Init(const char* appShortName) {
}

inline void ThrowInvalidOTR() {
    OSFatal("Invalid OTR File! Attempted to load an invalid OTR file. Try regenerating.");
}

};
};
