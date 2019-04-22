#include <stdio.h>

int main(void) {
	int f = 0;

	printf("화씨값을 입력하시오.\n");
	scanf_s("%d", &f);
	printf("%d 의 섭씨온도 값은  %lf입니다.", f, (double)5/9*(f-32));
	return 0;
}