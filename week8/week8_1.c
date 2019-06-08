#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int score(int one, int two, int result) {
	if (result == one * two)
		return 1;

	return 0;
}
int main() {
	srand((unsigned)time(NULL));

	int count = 0;
	int one = 0; int two = 0; int result = 0;
	while (count <= 1) {
		one = rand() % 9 + 1;
		two = rand() % 9 + 1;
		printf("%d * %d 는? ", one, two);

		scanf_s("%d", &result);
		if (!score(one, two, result)) {
			count++;
			if (count == 1)
				printf("틀렸습니다. 한번 더 기회가 주어집니다.\n");
		}
	}
	printf("탈락하였습니다!");
	return 0;
}