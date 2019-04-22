#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));

	//0부터 99까지 숫자
	int num1 = rand() % 100;
	int num2 = rand() % 100;
	int result = 0;

	//더하기
	printf("1. %d + %d = ", num1, num2);
	scanf_s("%d", &result);
	if (result == num1 + num2)
		printf("정답!\n");
	else
		printf("오답\n");
	
	//뺄셈
	printf("2. %d - %d = ", num1, num2);
	scanf_s("%d", &result);
	if (result == num1 - num2)
		printf("정답!\n");
	else
		printf("오답..\n");

	//곱셈
	printf("3. %d * %d = ", num1, num2);
	scanf_s("%d", &result);
	if (result == num1 * num2)
		printf("정답!\n");
	else
		printf("오답..\n");
	return 0;
}