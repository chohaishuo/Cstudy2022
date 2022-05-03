#include <stdio.h>


int is_prime(int a) {
	int i, c = 0;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0) {
			return 0;
		}
	}
	
	return 1;
	

}
/*

	함수 is_prime은

	2보다 큰 양의 정수 int argument 1개를 입력으로 받아,
	소수이면 1, 아니면 0을 반환


*/

//-------------  아래로는 고치지 마세요 ----------

int main(void) {

	int a;
	scanf_s("%d", &a);

	printf("%d", is_prime(a));

	return 0;
}