#pragma once
#include "kraPrerequisitesUtil.h"
#include "kraVector4.h"

namespace kraEngineSDK {
  class KRA_UTILITY_EXPORT Color 
  {
 
   public:

     static const Color Black;
     static const Color Blue;
     static const Color Clear;
     static const Color Cyan;
     static const Color Grey;
     static const Color Green;
     static const Color Magenta;
     static const Color NeonPink;
     static const Color Purple;
     static const Color Red;
     static const Color White;
     static const Color Yellow;

     float r = 0.0f;
     float g = 0.0f;
     float b = 0.0f;
     float a = 0.0f;
  };
}