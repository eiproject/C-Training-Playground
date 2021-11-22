#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define NAG_CALL __stdcall 
#define NAG_DLL_EXPIMP  __declspec(dllexport)

NAG_DLL_EXPIMP int NAG_CALL Factorial(int);
NAG_DLL_EXPIMP int NAG_CALL Factorial(int in)
{
    int result = 1;
    for(int i=1; i < in; i++){
        result*=i;
    }
    return result;
}

// gcc -shared -o factorial.dll factorial.c