#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void a(int n)
{
	int i;
	for (i = n; i >= 1; i--)
	{
		printf("%d ", i);

	}
	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	a(n);
}