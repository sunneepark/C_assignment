#include <stdio.h>

#include <stdlib.h>
#include <time.h>

void init(int arr[]) { //�ֻ������� ���� ���� �迭�� �����ϴ� �Լ�
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % 6 + 1;
	return 0;
}
void print(int arr[]) { //�迭�� ����ϴ� �Լ�
	for (int i = 0; i < 100; i++)
		printf("%d ", arr[i]);
	printf("�ֻ����� 100�� �������ϴ�.\n");
}
int count(int arr[]) { //�迭�� ���޹޾� for���� ������ 2�� ���� Ƚ���� ��ȯ�ϴ� �Լ�
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
	printf("2�� ���� Ƚ���� %d �� �Դϴ�.\n", count(arr));
	return 0;
}