#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));

	//0���� 99���� ����
	int num1 = rand() % 100;
	int num2 = rand() % 100;
	int result = 0;

	//���ϱ�
	printf("1. %d + %d = ", num1, num2);
	scanf_s("%d", &result);
	if (result == num1 + num2)
		printf("����!\n");
	else
		printf("����\n");
	
	//����
	printf("2. %d - %d = ", num1, num2);
	scanf_s("%d", &result);
	if (result == num1 - num2)
		printf("����!\n");
	else
		printf("����..\n");

	//����
	printf("3. %d * %d = ", num1, num2);
	scanf_s("%d", &result);
	if (result == num1 * num2)
		printf("����!\n");
	else
		printf("����..\n");
	return 0;
}