#include <stdio.h>

int main() {
	int num1 = 0; //ū��
	int num2 = 0;

	scanf_s("%d %d", &num1, &num2);
	if (num1 < num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1%num2 == 0)
		printf("%d�� %d�� ����Դϴ�.", num2, num1);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", num2, num1);
	return 0;
}