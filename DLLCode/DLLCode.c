#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>

#define LIB L"DllLib.dll"
#define PRIME "Prime"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevHinstance, PSTR pCmdLine, int nCmdShow) {

	HMODULE hDllE = LoadLibrary(LIB);
	if (!hDllE)
		return 1;
	int(*Prime)(int, int, int, int, int) = NULL;


	(FARPROC*)Prime = GetProcAddress(hDllE, PRIME);

	if (Prime)
	{
		int iValSumm = Prime(3,2,1,5,6);
	}

	FreeLibrary(hDllE);
	return 0;

}