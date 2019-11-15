#pragma once

#include <string>
#include <map>

#include "KaleidoscopeKeycodeInfo.h"

class Settings;

struct KeymapInfo {
   
   std::string layout_;
   std::string variant_;
   
   std::map<char, KaleidoscopeKeycodeInfo> ascii_to_kaleidoscope_key_code_;
   std::map<uint32_t, KaleidoscopeKeycodeInfo> unicode_to_kaleidoscope_key_code_;
   std::map<std::string, KaleidoscopeKeycodeInfo> non_printable_to_kaleidoscope_key_code_;
   
   void dump() const;
   
   void writeConfigFile(const Settings &settings) const;
   
   void writeConfigFile(std::ostream &file) const;
};