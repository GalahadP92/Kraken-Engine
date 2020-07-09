// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the KRAGRAPHICSDX11_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// KRAGRAPHICSDX11_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef KRAGRAPHICSDX11_EXPORTS
#define KRAGRAPHICSDX11_API __declspec(dllexport)
#else
#define KRAGRAPHICSDX11_API __declspec(dllimport)
#endif

// This class is exported from the dll
class KRAGRAPHICSDX11_API CkraGraphicsDX11 {
public:
	CkraGraphicsDX11(void);
	// TODO: add your methods here.
};

extern KRAGRAPHICSDX11_API int nkraGraphicsDX11;

KRAGRAPHICSDX11_API int fnkraGraphicsDX11(void);
