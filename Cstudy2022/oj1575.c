#include <stdio.h>


int is_prime(int a) {
	int i, c = 0;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0) {
			return 0;
		}
	}
	
	return 1;
	

}
/*

	�Լ� is_prime��

	2���� ū ���� ���� int argument 1���� �Է����� �޾�,
	�Ҽ��̸� 1, �ƴϸ� 0�� ��ȯ


*/

//-------------  �Ʒ��δ� ��ġ�� ������ ----------

int main(void) {

	int a;
	scanf_s("%d", &a);

	printf("%d", is_prime(a));

	return 0;
}