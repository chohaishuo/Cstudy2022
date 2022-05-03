#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int myStrlen(char* string);

int main() {
	char arr[100];
	scanf("%s", arr);

	printf("문자열의 길이 : %d\n", myStrlen(arr));

	return 0;
}
int myStrlen(char* string) {
	int i=0;
	while (string[i] != NULL) {

		i++;
	}

		return i;
}
// ======================================
// myStrlen 함수 정의를 여기에 작성





// =====================================