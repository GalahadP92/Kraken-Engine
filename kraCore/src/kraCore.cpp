// kraCore.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "kraCore.h"


// This is an example of an exported variable
KRACORE_API int nkraCore=0;

// This is an example of an exported function.
KRACORE_API int fnkraCore(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CkraCore::CkraCore()
{
    return;
}
