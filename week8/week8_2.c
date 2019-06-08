#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int whoWin(int com, char user) { //1 이김, 2 비김, 3 짐
	int user_trans = (user == 'C') ? 0 : ((user == 'R') ? 1 : 2);

	if (com == user_trans) return 2;//비김
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
		printf("가위(C) 바위(R) 보!(P) : ");
		rewind(stdin);
		scanf_s("%c", &user,1);

		com = rand() % 3;
		printf("컴퓨터 : %s\n", (com == 0 ? "가위" : (com == 1 ? "바위" : "보")));
		
		switch (whoWin(com, user)) {
		case 1:
			printf("이겼습니다 ^ㅁ^\n");
			break;
		case 2:
			printf("비겼습니다.\n");
			break;
		case 3:
			printf("졌습니다 ㅠㅠ.\n");
			break;
		}
		printf("게임을 그만하시겠습니까? ");
		rewind(stdin);
		scanf_s("%c", &user);
		if (user=='y')
			break;
	}

	return 0;
}