#include <stdio.h>

int main() {
	int n = 0;
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 0; i <= n; i++)
		sum += i;
	printf("합은 %d 입니다", sum);
}