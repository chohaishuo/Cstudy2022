#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 10, b = 20;
	int * temp = NULL;
	int* parr[2];
	parr[0] = &a;
	parr[1] = &b;


	printf("parr[0] : %x\n", parr[0]); // parr�� 0��° ���� ��(a�� �ּ�)
	printf("parr[1] : %x\n", parr[1]); // parr�� 1��° ���� ��(b�� �ּ�)

	printf("parr : %x\n", parr);  // ������ �迭�� ���� �ּ�
	printf("parr +1  : %x\n", parr + 1);  //������ �迭�� ���� �ּ��� ���� ����� �ּ�
	printf("parr +2  : %x\n", parr + 2);  //������ �迭�� ���� �ּ��� ���� ���� ����� �ּ�

	printf("*parr : %x\n", *parr);  //   ������ �迭�� ���� �ּҿ� ����ִ� ��(a�� �ּ�)
	printf("*(parr + 11) : %x\n", *(parr + 1));  // ������ �迭�� ���� �ּ��� ���� ����� �ּҿ� ����ִ� ��(b�� �ּ�)
	printf("*(parr + 2) : %x\n", *(parr + 2)); // �̼���� �����Ⱚ

	printf("*parr[0] : %d\n", *parr[0]); // parr�� 0��° ���� ���� ��� �ִ� ��(a�� ��)
	printf("*parr[1] : %d\n", *parr[1]); // parr�� 1��° ���� ���� ��� �ִ� ��(b�� ��)


#if 0

	printf("%x %d \n", parr[0], *parr[0]);
	printf("%x %d  \n", parr[1], *parr[1]);
	//printf("%x %x \n", &parr[0], &parr[1]);
	printf("%d %d \n", a, b);

	temp = parr[0];
	parr[0] = parr[1];
	parr[1] = temp;
	printf("%x %d \n", parr[0], *parr[0]);
	printf("%x %d  \n", parr[1], *parr[1]);
	//printf("%x %x \n", &parr[0], &parr[1]);
	printf("%d %d", a, b);

#endif


	return 0;
}