#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_big(int a, int b)
{
	int result=0;
	result = (a >= b) ? a : b;
	printf("%d", result);
	return 0;
}
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	print_big(a, b);
}