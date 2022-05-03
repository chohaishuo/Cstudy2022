#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	unsigned int a = 0X12345678; //예시
	int N = 0, i;

	scanf("%d", &N); // 1~4의 숫자

	char* b;
	b = (char*)&a;

	for ( i = 0; i < N; i++)
	{
		*b = 0;
		b++;
	}

	printf("%X", a);
	// ==========================================
	// 이 부분에 코드를 작성하세요.




	// ==========================================

}