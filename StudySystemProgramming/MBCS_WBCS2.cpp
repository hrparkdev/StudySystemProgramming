#define _CRT_SECURE_NO_WARNINGS
#define UNICODE
#define _UNICODE

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int _tmain(int argc, TCHAR* argv[])
{
	LPCTSTR str1 = _T("MBCS or WBCS 1");
	TCHAR str2[] = _T("MBCS or WBCS 2");
	TCHAR str3[100];
	TCHAR str4[50];

	LPCTSTR pStr = str1;

	_tprintf(_T("string size: %d \n"), sizeof(str2)); // 30
	_tprintf(_T("string length: %d \n"), _tcslen(pStr)); // 14

	_fputts(_T("Input String 1 : "), stdout);
	_tscanf(_T("%s"), str3); // Hello
	_fputts(_T("Input String 2 : "), stdout);
	_tscanf(_T("%s"), str4); // World

	_tcscat(str3, str4);
	_tprintf(_T("String 1 + String 2 : %s \n"), str3); // HelloWorld

	return 0;
}