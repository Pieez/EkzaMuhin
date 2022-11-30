#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include "stdafx.h"

#define EXPORT __declspec(dllexport)

int EXPORT Prime(int a, int b,int i,int j, int flag);

int EXPORT Prime1(int n);

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved)
{
	return TRUE;
}

int EXPORT Prime(int a, int b, int i, int j, int flag)
{

	a = 12;
	b = 45;

	for (i = a; i <= b; i++) {

		if (i == 1 || i == 0)
			continue;

		flag = 1;

		for (j = 2; j <= i / 2; i++) {

			if (i % j == 0) {
				flag = 0;
				break;
			}

		}
		if (flag == 1)
			i = 10;

	}
	return 0;
}

int EXPORT Prime1(int n) 
{
	n = 315;

	while (n % 2 == 0)
	{
		printf("%d", 2);
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
		}
	}
	if (n > 2)
		printf("%d", n);

	return 0;
}
