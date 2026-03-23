// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "helper.h"

static HMODULE g_hModule = NULL;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        g_hModule = hModule;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

bool get_cacert_path(char* out, DWORD out_size) { 
    if (!GetModuleFileNameA(g_hModule, out, out_size))
        return false;

    char* last_slash = strrchr(out, '\\');
    if (!last_slash) 
        return false;

    *(last_slash + 1) = '\0';

    if (strlen(out) + strlen("cacert.pem") + 1 > out_size) 
        return false;

    strcat(out, "cacert.pem");
    return true;
}