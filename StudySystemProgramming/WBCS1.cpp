#include <stdio.h>
#include <string.h>

int main(void)
{
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = wcslen(str);

	wprintf(L"Array Size : %d \n", size); // 8
	wprintf(L"String Length : %d \n", len); // 3

	return 0;
}

//아직 완전한 유니코드 기반 예제는 아님