#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char phone[15];
	scanf("%s", phone);


	// ================================================
	// �� �κп� �ڵ带 �ۼ��ϼ���.
	// �����͸� ����� '-'�� �������� �ٲٱ�
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