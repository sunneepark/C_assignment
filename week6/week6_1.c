#include <stdio.h>

int main() {
	int number = 0;
	scanf_s("%d", &number);

	if (number > 0)
		printf("����Դϴ�.");
	else if (number == 0)
		printf("0�Դϴ�.");
	else
		printf("�����Դϴ�.");
	return 0;
}