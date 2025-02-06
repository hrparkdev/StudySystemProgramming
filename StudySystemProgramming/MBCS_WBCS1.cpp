#define UNICODE
#define _UNICODE

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int wmain(void)
{
	TCHAR str[] = _T("1234567");
	int size = sizeof(str);
	printf("string length : %d \n", size); // 매크로의 정의에 상관없이 MBCS 기반으로 컴파일 됨.
	return 0;
}
// 출력 결과
// string length : 16

// 매크로 _UNICODE, UNICODE의 정의 유무에 따라서 WBCS 기반, 혹은 MBCS 기반으로 컴파일 및 실행이 된다. 
// 그러나 아직 완벽하지는 않다.
