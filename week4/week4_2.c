#include <stdio.h>

int main(void) {
	double num1 = 0;
	double num2 = 0;

	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);
	printf("%lf * %lf = %lf\n", num1, num2, num1*num2);
	return 0;
}