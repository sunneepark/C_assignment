#include <stdio.h>

#include <stdlib.h>
#include <time.h>

void score(int num, char str) {
	if (num == 10) { //9�϶��� 10�� �޾ƾ� �ϹǷ�
		char result2;
		scanf_s("%c", &result2,1);
		if (atoi(&str) == 1 && atoi(&result2) == 0)
			printf("����!\n");
		else
			printf("Ʋ��..\n");
		return;
	}
	if (num == 3 || num == 6) { //�ڼ� �ľ��� ��
		if (str == 'x')
			printf("����!\n");
		else
			printf("Ʋ��..\n");
		return;
	}
	
	(atoi(&str) == num) ? printf("����!\n") : printf("Ʋ��..\n"); //������ ���
	return;

}
int main() {
	srand((unsigned)time(NULL));

	printf("�عڼ� : x\n");

	int num = rand()%9;
	char result;

	//ù��° ����
	printf("%d > ",num);
	scanf_s("%c", &result,1);
	score(++num, result);

	rewind(stdin);

	//�ι�° ����
	printf("%d > ", num);

	scanf_s("%c", &result,1);
	score(++num, result);
	
	return 0;
}