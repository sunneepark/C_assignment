#include <stdio.h>

int main() {
	int i = 3000;
	int *p = &i;
	printf("i���ּҰ�(i�� ��Ÿ���ÿ�) = %p\n", &i);
	printf("i���ּҰ�(p�� ��Ÿ���ÿ�) = %p\n", p);
	printf("i(i�� ��Ÿ���ÿ�) = %d\n", i);
	printf("i(p�� ��Ÿ���ÿ�) = %d\n", *p);

	return 0;
}