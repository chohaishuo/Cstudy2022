#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[10] = { 1,0,1,0,1,0,1,0,1,0};
	int sum = 0;

	for ( int i = 0; i < 10; i=i+2)
	{
			sum = sum + arr[i];
			printf("������ %d��° : sum�� %d\n", i, sum);
			
		
	}

	printf("����!!!!\n");
	printf("%d", sum);
	return 0;
}