#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int whoWin(int com, char user) { //1 �̱�, 2 ���, 3 ��
	int user_trans = (user == 'C') ? 0 : ((user == 'R') ? 1 : 2);

	if (com == user_trans) return 2;//���
	if (com > user_trans) {
		if (com - user_trans == 2)
			return 1;
		return 3;
	}
	if (com < user_trans) {
		if (user_trans - com == 2)
			return 3;
		return 1;
	}
}
int main() {
	srand((unsigned)time(NULL));

	char user = ' ';
	int com = 0;
	while (1) {
		printf("����(C) ����(R) ��!(P) : ");
		rewind(stdin);
		scanf_s("%c", &user,1);

		com = rand() % 3;
		printf("��ǻ�� : %s\n", (com == 0 ? "����" : (com == 1 ? "����" : "��")));
		
		switch (whoWin(com, user)) {
		case 1:
			printf("�̰���ϴ� ^��^\n");
			break;
		case 2:
			printf("�����ϴ�.\n");
			break;
		case 3:
			printf("�����ϴ� �Ф�.\n");
			break;
		}
		printf("������ �׸��Ͻðڽ��ϱ�? ");
		rewind(stdin);
		scanf_s("%c", &user);
		if (user=='y')
			break;
	}

	return 0;
}