#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0x01020304;

	int *pa = 0, *pb=0;
	char c = 'a';
	char* pc;

	pc = &a;
	printf("%x", *(pc+1));
	
	return 0;
}