#include <stdio.h>

int main() {

	printf("scanf �Լ��� ����� �� ������ ������ �տ� ���̴� ���ڸ� �Է��ϼ���.\n");
	char str;
	scanf_s("%c", &str, 1);
	printf("%c %d", str, str);
	return 0;
}