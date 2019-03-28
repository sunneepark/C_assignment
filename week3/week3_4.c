#include <stdio.h>

int main(void) {
	int a = 3;
	int b = 2;

	//printf("3 + 2 = %d\n", 3 + 2); -> 이런 방식으로도 사용가능합니다.
	printf("3 + 2 = %d\n", a + b);
	printf("3 - 2 = %d\n", a - b);
	printf("3 * 2 = %d\n", a * b);

	return 0;
}