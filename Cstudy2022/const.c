#include <stdio.h>

void main() {

	const int a = 0; // a�� ���� �����Ѵ� (�ٲ� �� ����)
	//a = 10; // ���� �߻�(���� �ȵ�)
	//printf("%d", a);


	volatile int b; // b�� ���ؼ� ����ȭ�� ���� ����
	for (int i = 0; i < 10; i++)
	{
		b = i;
	}


	int c = 10, d=20;
	int* const pc = &c;

	//pc = &c;
	printf("%d\n", *(pc)); // 10

	//*pc = 100;
	//printf("%d\n", *(pc)); //100

	pc = &d;
	printf("%d", *(pc)); // 20



	
	return ;
}