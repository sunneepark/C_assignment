#include <stdio.h>
void odd(int *ptr, int len) {
	for (int i = 0; i < len; i++) {
		if ((*ptr+i) % 2 != 0)
			printf("%d번째 %d 값은 홀수입니다.\n", i+1, *ptr + i);
	}
}
int main() {
	int arr[5];
	int i = 0;
	int len = sizeof(arr) / sizeof(int);

	printf("5개의 정수 입력\n");
	for (int i = 0; i < len; i++)
		scanf_s("%d", &arr[i]);
	
	odd(arr, len);
	return 0;
}