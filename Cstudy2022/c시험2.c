#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int myStrlen(char* string);

int main() {
	char arr[100];
	scanf("%s", arr);

	printf("���ڿ��� ���� : %d\n", myStrlen(arr));

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
// myStrlen �Լ� ���Ǹ� ���⿡ �ۼ�





// =====================================