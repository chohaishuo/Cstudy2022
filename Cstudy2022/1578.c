#include <stdio.h>

int biggest(int a, int b, int c) {
	int d;
	d = a > b ? a : b;
	d = c > d ? c : d;

	return d;
}
/*

	�Լ� biggest��

	int argument 3���� �Է����� �޾�,
	���� ū ���� ��ȯ

*/

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	int b;
	int c;
	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d", biggest(a, b, c));

	return 0;
}