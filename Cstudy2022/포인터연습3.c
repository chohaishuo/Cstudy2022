#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14


int main() {
	//int a = 10, b = 20, temp;
	//temp = a;
	//a = b;
	//b = temp;
	//printf("%d %d", a, b);

	int* p; 


	int c[5] = { 1,2,3,4,5 }; 
	int i, temp = 0;
    p = c; // 1000


	printf("%x %x %x %x \n", p, &c, p+1, (&c)+1); // 1000 1000 1004 1020
	

	printf("%d %d %d\n", c[0], c[1], c[2]); // 1 2 3


	printf("%p %p %p\n", c, c+1, c+2); // 1000 1004 1008
	printf("%x %x %x\n", p, p + 1, p + 2); // 1000 1004 1008
	printf("%d %d %d\n", *c, *(c+1), *(c+2)); // 1 2 3
	printf("%p %p %p %p\n", c, &c, c+1, (&c)+1); // 1000 1000 1004 1020 
	printf("%x %x %x\n", *p, *(p + 1), *(p + 2)); // 1 2 3
	

	return 0;
}