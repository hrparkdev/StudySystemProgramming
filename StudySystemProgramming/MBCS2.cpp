#include <stdio.h>

int main(void)
{
	char str[] = "한글입니다";
	int i;

	for (i = 0; i < 5; i++)
	{
		fputc(str[i], stdout); // 한글
	}

	fputs("\n", stdout);

	for (i = 0; i < 10; i++)
	{
		fputc(str[i], stdout); // 한글입니다
	}

	fputs("\n", stdout);
	return 0;
}

// 실제 출력 결과
// 한 (총 3바이트)
// 한글입 (총 9바이트)