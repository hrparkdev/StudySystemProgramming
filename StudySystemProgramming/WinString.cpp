#include <stdio.h>
#include <Windows.h>

int main(int argc, wchar_t* argv[])
{
	//LPSTR str1 = "SBCS Style String 1";
	//LPWSTR str2 = L"WBCS Style String 1";

	// 현재 C++은 문자열 리터럴을 CHAR*, WCHAR*가 아닌 CONST CHAR*, CONST WCHAR*로 처리함
	LPCSTR cStr1 = "SBCS Style String 1";
	LPCWSTR cStr2 = L"WBCS Style String 1";

	CHAR arr1[] = "SBCS Style String 2";
	WCHAR arr2[] = L"WBCS Style String 2";

	printf("%s\n", cStr1);
	printf("%s\n", arr1);

	wprintf(L"%s\n", cStr2);
	wprintf(L"%s\n", arr2);

	return 0;
}