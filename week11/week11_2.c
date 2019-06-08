#include <stdio.h>

#include <stdlib.h>
#include <time.h>

void init(int arr[]) { //주사위에서 나온 수를 배열에 저장하는 함수
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % 6 + 1;
	return 0;
}
void print(int arr[]) { //배열을 출력하는 함수
	for (int i = 0; i < 100; i++)
		printf("%d ", arr[i]);
	printf("주사위를 100번 던졌습니다.\n");
}
int count(int arr[]) { //배열을 전달받아 for문을 돌려서 2가 나온 횟수를 반환하는 함수
	int n=0;
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 2)
			n++;
	}
	return n;
}
int main() {
	int arr[100] = { 0 };
	init(arr);
	print(arr);
	printf("2가 나온 횟수는 %d 번 입니다.\n", count(arr));
	return 0;
}