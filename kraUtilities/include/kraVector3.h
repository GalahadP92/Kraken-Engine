#pragma once
#include "kraPrerequisitesUtil.h"

namespace kraEngineSDK {

  class Vector2;

  class KRA_UTILITY_EXPORT Vector3
  {
   public:

     Vector3() = default;

     Vector3::Vector3(float _x, float _y, float _z) 
       : x(_x), y(_y), z(_z) {}

   public:

     static Vector3 ZERO;

     static Vector3 ONE;

     static Vector3 ONEX;

     static Vector3 ONEY;

     static Vector3 ONEZ;

     static Vector3 UP;

     static Vector3 FRONT;

     static Vector3 RIGHT;

     float x = 0.0f;

     float y = 0.0f;

     float z = 0.0f;
  };
}
