#include <stdio.h>

void copyArr(int a[], int b[],int count) { //count :배열의 갯수(포인터를 넘기기 때문에 실제 크기를 모름)
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
	printf("배열 A : ");
	printArr(a, sizeof(a) / sizeof(a[0]));
	printf("\n배열 B : ");
	printArr(b, sizeof(b) / sizeof(b[0]));
	return 0;
}