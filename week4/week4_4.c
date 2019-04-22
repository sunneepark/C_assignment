#include <stdio.h>

int main() {

	printf("scanf 함수를 사용할 때 저장할 변수명 앞에 붙이는 문자를 입력하세요.\n");
	char str;
	scanf_s("%c", &str, 1);
	printf("%c %d", str, str);
	return 0;
}