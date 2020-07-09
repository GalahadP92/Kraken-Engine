// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the KRAUTILITIES_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// KRAUTILITIES_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef KRAUTILITIES_EXPORTS
#define KRAUTILITIES_API __declspec(dllexport)
#else
#define KRAUTILITIES_API __declspec(dllimport)
#endif

// This class is exported from the dll
class KRAUTILITIES_API CkraUtilities {
public:
	CkraUtilities(void);
	// TODO: add your methods here.
};

extern KRAUTILITIES_API int nkraUtilities;

KRAUTILITIES_API int fnkraUtilities(void);
