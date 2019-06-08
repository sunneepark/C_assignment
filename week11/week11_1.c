#include <stdio.h>
int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main(void)
{
	int i;
	printf("말일을 알고 싶은 달을 입력하시오.(2019년) : ");
	scanf_s("%d", &i);

	printf("2019년 %d월은 %d일까지 있습니다.\n", i, days[i+1]);
	return 0;
}