#include <stdio.h>

int main() {
	int num1 = 0;
	char op;
	int num2 = 0;

	scanf_s("%d %c %d", &num1, &op, 1, &num2);

	if (op == '+')
		printf("%d + %d = %d", num1, num2, num1 + num2);
	else if (op == '-')
		printf("%d - %d = %d", num1, num2, num1 - num2);
	else if (op == '/')
		printf("%d / %d = %lf", num1, num2, (double)num1 / num2);
	else if (op == '*')
		printf("%d * %d = %d", num1, num2, num1 * num2);
	else
		printf("지원되지 않은 연산자입니다.");

	return 0;
}