
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10], b[10];
	int i;
	

	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &a[i]);
	}

	char* pa;
	char* pb;
	pa = a;
	pb = b;

	pb = pa;

	for (i = 0; i < 10; i++)
	{
		*pb++ = *pa++;
	}


	for (int i = 0; i < 10; i++)
	{
		printf("b[%d] ---> %d\n", i, b[i]);
	}

	return;
}