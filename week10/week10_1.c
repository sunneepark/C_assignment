#include <stdio.h>
int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main() {
	printf("N�� �Է��Ͻÿ� : ");
	int n = 0;
	scanf_s("%d", &n);
	printf("%d! �� %d �Դϴ�.", n, factorial(n));
	return 0;
}