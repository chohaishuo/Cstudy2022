#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x, y) { int t; t=x, x=y; y=t;}
// 필요한 헤더파일들을 include하시오

void mystery(int* a, int* b, int* c, int* d, int* e) {
	int* p[5] = { a, b, c, d, e };
	int i, j, temp=0;
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 4-i; j++)
		{
			if (*p[j] > *p[j + 1])
			{
				SWAP(*p[j], *p[j + 1]);
			}
		}

	}
}
/*
 함수 mystery를 정의하시오.
*/

//--------  이 아래로는 절대 수정하지 마시오 (문법오류 제외) -------------------
int main(void) {

	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	mystery(&a, &b, &c, &d, &e);

	printf("%d %d %d %d %d", a, b, c, d, e);

	return 0;
}