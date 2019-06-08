#include <stdio.h>
int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main() {
	printf("N을 입력하시오 : ");
	int n = 0;
	scanf_s("%d", &n);
	printf("%d! 은 %d 입니다.", n, factorial(n));
	return 0;
}