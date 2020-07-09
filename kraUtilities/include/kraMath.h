#pragma once
#include "kraPrerequisitesUtil.h"
#include "kraPlatformMath.h"

#if KRA_PLATFORM == KRA_PLATFORM_WIN32
#include "kraWindowsMath.h"
#endif

namespace kraEngineSDK {

#if KRA_PLATFORM == KRA_PLATFORM_WIN32
  using Math = kraWindowsMath;
#else
  using Math = kraPlatformMath;
#endif

}

