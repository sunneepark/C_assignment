#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define LEVEL 5
void success(int inc) { //���� �Ͽ�����
	printf("[����]\n����Ȳ�� �����(+%d), ���ݷ�: 5(+%d).\n",LEVEL+inc,(LEVEL+inc)*2);
}
void fail() { //���� �Ͽ����� 
	printf("[����]\n �ƹ��͵� �����ϴ�.\n");
}
int main() {
	
	char input;
	
	srand((unsigned)time(NULL));
	int r = (rand() % 100) + 1; //Ȯ��
	int prob = 100.0 / ((LEVEL + 1) / 2); //����Ȯ��

	success(0);
	printf("[SYSTEM] ��ȭ�Ͻðڽ��ϱ�? (���� Ȯ�� : %d %%)\n", prob);
	printf("[Y/N or Other keys]>");

	scanf_s("%c", &input, 1);
	(input == 'Y') ? ((r <= prob) ? success(1) : fail()) : success(0); //��ø ���׿����ڸ� �̿��Ͽ� ������ ����
}