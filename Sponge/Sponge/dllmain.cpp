// dllmain.cpp : Defines the entry point for the DLL application.

#include "Windows.h"
#include <iostream>


// on inject use this thread.
/*
1 - get device
2 - ...
3 - ...
*/
DWORD WINAPI MainThread(LPVOID param)
{



	return false;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		CreateThread(0, 0, MainThread, hModule, 0, 0);
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

