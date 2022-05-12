#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 10, b = 2; 
	int* temp = 0;
	int* c[2];
	c[0] = &a;
	c[1] = &b;

	printf("%d %d", *c[0], *c[1]);

	temp = (*c[0] < *c[1]) ? c[0] : c[1];
	c[1] = (*c[0] > *c[1]) ? c[0] : c[1];
	c[0] = temp;

	printf("%d %d", *c[0], *c[1]);

	return 0;
}