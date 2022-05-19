#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));
	int a = 0, b = 0, c = 0, d = 0,i;
	a = ((rand()%9)+1)* ((rand() % 9)+1);
	scanf_s("%d", &b);
	for ( i = 0; i <=b; i++)
	{
		scanf_s("%d", &c);
		if (c < 1 || c>100) {
			printf("범위를 벗어난 숫자이니 다시 한 번 기회를 준다 \n");
			break;
		}
		if (c == a) {
			printf("이김 \n");
			d++;
			break;
		}
		else if (c < a) {
			printf("up \n");
			break;
		}
		else (c > a); {
			printf("down \n");
		}
	}
	if (d == 0) {
		printf("졌음 난수의 값은 %d \n", a);
	}
	return 0;
}