#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	unsigned int a = 0X12345678; //����
	int N = 0, i;

	scanf("%d", &N); // 1~4�� ����

	char* b;
	b = (char*)&a;

	for ( i = 0; i < N; i++)
	{
		*b = 0;
		b++;
	}

	printf("%X", a);
	// ==========================================
	// �� �κп� �ڵ带 �ۼ��ϼ���.




	// ==========================================

}