//1420: �Լ� ���� - 2
//�Ʒ� ���α׷����� �Լ� func �� �μ��� �������� 1���� �Է¹޾�, 1���� �� ���������� ���� ��ȯ�ؾ� �Ѵ�.
//
//func�� �ϼ��� ��, �Ʒ� ���α׷��� '����' �Ͽ� �����Ű�ÿ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int a)
{
	int sum = 0, i;
	for ( i = 1; i <= a; i++)
	{
		sum = sum + i;
	}
	return sum;
}

void main()
{
	int a;

	scanf("%d", &a);


	printf("%d", func(a));
	return;
}