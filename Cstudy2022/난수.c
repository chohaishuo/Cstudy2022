#include <stdio.h>
#include <stdlib.h>

void main() {
	int a = 0, b = 0, c = 0, d = 0,i;
	a = rand();
	scanf_s("%d", &b);
	for ( i = 0; i <=b; i++)
	{
		scanf_s("%d", &c);
		if (c < 0 || c>100) {
			printf("범위를 벗어난 숫자이니 다시 한 번 기회를 준다");
			break;
		}
		if (c = a) {
			printf("이김");
			d++;
			break;
		}
		else if (c < a) {
			printf("up");
		}
		else (c > a); {
			printf("down");
		}
	}
	if (d = 0) {
		printf("졌음 난수의 값은 %d", a);
	}
	return 0;
}