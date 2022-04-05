#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0, i, c=0, s=0;
	scanf("%d %d", &a, &b);

	a = (a < b) ? a : b;
	b = (a < b) ? b : a;

	for ( i = a+1; i < b; i++)
	{
		if (i % 2 == 1) {
			c++;
			s = s + i;
	   }
	}
	printf("%d", c + s);
	return 0;
}