#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, cun = 0;
	char text[50];
	scanf("%s", text);
	char* t;
	t = text;

	for ( i = 0; i < 50; i++)
	{
		
		if (*t == '!') {
			break;
		}
		if (*t >= 'A' && *t <= 'Z') {
			cun++;
			
		}
		t++;
	}
	printf("%d", cun);
	return 0;
	// ================================================
	// 이 부분에 코드를 작성하세요.





	//=================================================

}