#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


char str1[4] = "aaa";
char str2[4] = "bbb";
char str3[4] = "ccc";

void setPc(char** p) {

	*p = str2;

}

int main(void) {

	char* pc = NULL;
	setPc(&pc);
	printf("%s\n", pc);
	printf("%c\n", pc[0]);

}

