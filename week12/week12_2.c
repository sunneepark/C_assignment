#include <stdio.h>

void copyArr(int a[], int b[],int count) { //count :�迭�� ����(�����͸� �ѱ�� ������ ���� ũ�⸦ ��)
	for (int i = 0; i < count; i++)
		b[i] = a[i];
}
void printArr(int a[],int count) {
	for (int i = 0; i < count; i++)
		printf("%d ", a[i]);
}
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10];
	copyArr(a, b, sizeof(a) / sizeof(a[0]));
	printf("�迭 A : ");
	printArr(a, sizeof(a) / sizeof(a[0]));
	printf("\n�迭 B : ");
	printArr(b, sizeof(b) / sizeof(b[0]));
	return 0;
}