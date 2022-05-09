#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 10, b = 20;
	int * temp = NULL;
	int* parr[2];
	parr[0] = &a;
	parr[1] = &b;


	printf("parr[0] : %x\n", parr[0]); // parr의 0번째 원소 값(a의 주소)
	printf("parr[1] : %x\n", parr[1]); // parr의 1번째 원소 값(b의 주소)

	printf("parr : %x\n", parr);  // 포인터 배열의 시작 주소
	printf("parr +1  : %x\n", parr + 1);  //포인터 배열의 시작 주소의 다음 덩어리의 주소
	printf("parr +2  : %x\n", parr + 2);  //포인터 배열의 시작 주소의 다음 다음 덩어리의 주소

	printf("*parr : %x\n", *parr);  //   포인터 배열의 시작 주소에 들어있는 값(a의 주소)
	printf("*(parr + 11) : %x\n", *(parr + 1));  // 포인터 배열의 시작 주소의 다음 덩어리의 주소에 들어있는 값(b의 주소)
	printf("*(parr + 2) : %x\n", *(parr + 2)); // 미선언된 쓰레기값

	printf("*parr[0] : %d\n", *parr[0]); // parr의 0번째 원소 값에 들어 있는 값(a의 값)
	printf("*parr[1] : %d\n", *parr[1]); // parr의 1번째 원소 값에 들어 있는 값(b의 값)


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