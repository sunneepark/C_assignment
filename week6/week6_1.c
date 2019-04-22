#include <stdio.h>

int main() {
	int number = 0;
	scanf_s("%d", &number);

	if (number > 0)
		printf("양수입니다.");
	else if (number == 0)
		printf("0입니다.");
	else
		printf("음수입니다.");
	return 0;
}