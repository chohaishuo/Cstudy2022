#include <stdio.h>

int biggest(int a, int b, int c) {
	int d;
	d = a > b ? a : b;
	d = c > d ? c : d;

	return d;
}
/*

	함수 biggest는

	int argument 3개를 입력으로 받아,
	가장 큰 수를 반환

*/

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	int b;
	int c;
	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d", biggest(a, b, c));

	return 0;
}