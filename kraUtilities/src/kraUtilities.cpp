// kraUtilities.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "kraUtilities.h"


// This is an example of an exported variable
KRAUTILITIES_API int nkraUtilities=0;

// This is an example of an exported function.
KRAUTILITIES_API int fnkraUtilities(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CkraUtilities::CkraUtilities()
{
    return;
}
