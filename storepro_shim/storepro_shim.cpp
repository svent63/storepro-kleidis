// storepro_shim.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "storepro_shim.h"


// This is an example of an exported variable
STOREPROSHIM_API int nstoreproshim=0;

// This is an example of an exported function.
STOREPROSHIM_API int fnstoreproshim(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Cstoreproshim::Cstoreproshim()
{
    return;
}
