#include <stdio.h>

void main() {

	const int a = 0; // a의 값을 고정한다 (바꿀 수 없음)
	//a = 10; // 오류 발생(빌드 안됨)
	//printf("%d", a);


	volatile int b; // b에 대해서 최적화를 하지 않음
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