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
			printf("������ ��� �����̴� �ٽ� �� �� ��ȸ�� �ش�");
			break;
		}
		if (c = a) {
			printf("�̱�");
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
		printf("���� ������ ���� %d", a);
	}
	return 0;
}