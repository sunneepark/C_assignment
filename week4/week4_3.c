#include <stdio.h>

int main(void) {
	int f = 0;

	printf("ȭ������ �Է��Ͻÿ�.\n");
	scanf_s("%d", &f);
	printf("%d �� �����µ� ����  %lf�Դϴ�.", f, (double)5/9*(f-32));
	return 0;
}