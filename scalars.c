#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
// #include "scalar.h"

#define NAG_CALL __stdcall 
#define NAG_DLL_EXPIMP __declspec(dllexport)

NAG_DLL_EXPIMP int NAG_CALL Scalars(int);
NAG_DLL_EXPIMP int NAG_CALL Scalars(int in)
{
  return in;
}

// void main(){

// }

// gcc -shared -o scalars.dll scalars.c