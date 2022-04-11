#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int* p;
	int c[10] = { 1,2,3,4,5,6,7,8,9,10 };
	p = &c;

	*(p + 4) = 10;

	printf("%d", c[4]);

	return 0;
}