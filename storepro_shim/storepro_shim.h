// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the STOREPROSHIM_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// STOREPROSHIM_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STOREPROSHIM_EXPORTS
#define STOREPROSHIM_API __declspec(dllexport)
#else
#define STOREPROSHIM_API __declspec(dllimport)
#endif

// This class is exported from the dll
class STOREPROSHIM_API Cstoreproshim {
public:
	Cstoreproshim(void);
	// TODO: add your methods here.
};

extern STOREPROSHIM_API int nstoreproshim;

STOREPROSHIM_API int fnstoreproshim(void);
