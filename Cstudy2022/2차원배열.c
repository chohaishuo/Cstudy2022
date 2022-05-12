#include <stdio.h>

void main() {
	int a[2][3] = { {1,2,3}, {4,5,6} };

	int(*pa)[3] = a;


	printf("%d %d \n", a, a+1); // 1000 1012
	printf("%d %d \n", a[0], a[0]+1); // 1000 1004
	printf("%d %d \n", *a[0],*(a[0] + 1)); // 1 2
	printf("%d %d \n", a+1, *(a+1)); // 1012 1012
	printf("===============\n");

	printf("%d %d \n", a, a + 1); // 1000 1012
	printf("%d %d \n", a[0], a[0] + 1); // 1000 1004
	printf("%d %d \n", *a[0], *(a[0] + 1)); // 1 2
	printf("%d %d \n", a + 1, *(a + 1)); // 1012 1012




	return 0;
}