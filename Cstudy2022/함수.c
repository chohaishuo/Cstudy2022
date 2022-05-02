#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a, int b) {

	printf("SWAP ]  a狼 林家: %x   |  b狼 林家: %x\n", a, b);
	
	int temp;
	c[0] = *c
	temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}

int main() {
	int a = 0, b = 0;
	
	scanf("%d %d", &a, &b);
	

	printf("a狼 林家: %x   |  b狼 林家: %x\n", &a, &b);
	swap(&a, &b);

	printf("%d %d", a, b);

	return 0;
}