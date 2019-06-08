#include <stdio.h>
/* 3-1) 전역변수 사용*/
int n = 1;
void print() { 
	printf("hello world\n");
	printf("%d\n", n++);
}
/* 3-2) 함수 안의 변수 사용(static)*/
void print_static() {
	static int n = 1;
	printf("hello world\n");
	printf("%d\n", n++);
}
int main() {
	printf("반복 횟수를 입력하세요 : ");
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		print_static();
		//print();
	return 0;
}