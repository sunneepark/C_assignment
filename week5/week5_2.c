#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define LEVEL 5
void success(int inc) { //성공 하였을때
	printf("[가방]\n진명황의 집행검(+%d), 공격력: 5(+%d).\n",LEVEL+inc,(LEVEL+inc)*2);
}
void fail() { //실패 하였을때 
	printf("[가방]\n 아무것도 없습니다.\n");
}
int main() {
	
	char input;
	
	srand((unsigned)time(NULL));
	int r = (rand() % 100) + 1; //확률
	int prob = 100.0 / ((LEVEL + 1) / 2); //성공확률

	success(0);
	printf("[SYSTEM] 강화하시겠습니까? (성공 확률 : %d %%)\n", prob);
	printf("[Y/N or Other keys]>");

	scanf_s("%c", &input, 1);
	(input == 'Y') ? ((r <= prob) ? success(1) : fail()) : success(0); //중첩 삼항연산자를 이용하여 성공과 실패
}