#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("구구단 게임을 시작합니다. 틀리면 게임이 종료됩니다.\n");

	srand((unsigned)time(NULL));

	int r1, r2 = 0;
	int n = 0;
	while (1) {
		r1 = rand() % 9 + 1;
		r2 = rand() % 9 + 1;
		printf("%d * %d = ",r1,r2);
		scanf_s("%d", &n);

		if (r1*r2 != n)
			break;
	}
	printf("틀렸습니다!");
}