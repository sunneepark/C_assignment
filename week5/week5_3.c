#include <stdio.h>

#include <stdlib.h>
#include <time.h>

void score(int num, char str) {
	if (num == 10) { //9일때는 10을 받아야 하므로
		char result2;
		scanf_s("%c", &result2,1);
		if (atoi(&str) == 1 && atoi(&result2) == 0)
			printf("정답!\n");
		else
			printf("틀림..\n");
		return;
	}
	if (num == 3 || num == 6) { //박수 쳐야할 때
		if (str == 'x')
			printf("정답!\n");
		else
			printf("틀림..\n");
		return;
	}
	
	(atoi(&str) == num) ? printf("정답!\n") : printf("틀림..\n"); //나머지 경우
	return;

}
int main() {
	srand((unsigned)time(NULL));

	printf("※박수 : x\n");

	int num = rand()%9;
	char result;

	//첫번째 숫자
	printf("%d > ",num);
	scanf_s("%c", &result,1);
	score(++num, result);

	rewind(stdin);

	//두번째 숫자
	printf("%d > ", num);

	scanf_s("%c", &result,1);
	score(++num, result);
	
	return 0;
}