#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "ABC한글";
	int size = sizeof(str); // 연산
	int len = strlen(str);

	printf("배열의 크기: %d \n", size); // ABC(총 3바이트) + 한글(총 4바이트) + NULL 문자(총 1바이트) = 8바이트
	printf("문자열 길이: %d \n", len); // ABC(총 길이 3) + 한글(총 길이 4) = 7

	return 0;
}

// 실제 출력 결과
// 10
// 9

// 문자열 인코딩이 UTF-8 이라서 이렇게 나오게 됨
// 'A': 1바이트
// 'B': 1바이트
// 'C': 1바이트
// '한': 3바이트
// '글': 3바이트
// '\0': 1바이트