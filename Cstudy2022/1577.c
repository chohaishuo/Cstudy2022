#include <stdio.h>


int myfibo(int a){
	
	if (a == 0) {
		return 0;
	}
	if (a == 1) {
		return 1;
	}
	return myfibo((a - 1)) + myfibo((a - 2));
	
}
/*

	�Լ� myfibo��

	0 �Ǵ� ���� ���� int argument 1���� �Է����� �޾�,
	�ش� ��ġ�� fibonacci ���ڸ� ��ȯ.

	Fibonacci ������ �տ� ��ġ�� �� ���� ���� ���� ���� �ȴ�.

	0 ��° : 0
	1 ��° : 1
	2 ��° : 1
	3 ��° : 2
	4 ��° : 3


*/

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	scanf("%d", &a);

	printf("%d", myfibo(a));

	return 0;
}