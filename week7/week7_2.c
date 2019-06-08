#include <stdio.h>

int main() {
	int n = 0;
	scanf_s("%d", &n);
	int sum = 0;
	while (n >= 0)
		sum += n--;

	printf("합은 %d 입니다", sum);
}