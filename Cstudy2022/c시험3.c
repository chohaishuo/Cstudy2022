#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char phone[15];
	scanf("%s", phone);


	// ================================================
	// 이 부분에 코드를 작성하세요.
	// 포인터를 사용해 '-'를 공백으로 바꾸기
	char* pp;
	pp = phone;
	int i;

	for ( i = 0; i < 15; i++)
	{
		
		if (*pp == '-')  {
			*pp = ' ';
		}
		(pp++);
	}




	//=================================================

	printf("phone: %s", phone);
}