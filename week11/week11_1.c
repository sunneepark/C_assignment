#include <stdio.h>
int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main(void)
{
	int i;
	printf("������ �˰� ���� ���� �Է��Ͻÿ�.(2019��) : ");
	scanf_s("%d", &i);

	printf("2019�� %d���� %d�ϱ��� �ֽ��ϴ�.\n", i, days[i+1]);
	return 0;
}