#include <stdio.h>
/* 3-1) �������� ���*/
int n = 1;
void print() { 
	printf("hello world\n");
	printf("%d\n", n++);
}
/* 3-2) �Լ� ���� ���� ���(static)*/
void print_static() {
	static int n = 1;
	printf("hello world\n");
	printf("%d\n", n++);
}
int main() {
	printf("�ݺ� Ƚ���� �Է��ϼ��� : ");
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		print_static();
		//print();
	return 0;
}