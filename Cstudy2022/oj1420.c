//1420: 함수 문제 - 2
//아래 프로그램에서 함수 func 는 인수로 양의정수 1개를 입력받아, 1부터 그 정수까지의 합을 반환해야 한다.
//
//func를 완성한 후, 아래 프로그램을 '복붙' 하여 실행시키시오.
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