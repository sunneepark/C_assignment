#include <stdio.h>

void saveCal(int n1, int n2, int *sum, int *sub) {
	*sum = n1 + n2;
	*sub = n1 - n2;
}
int main() {
	int n1 = 0;
	int n2 = 0;
	int sum = 0;
	int sub = 0;
	scanf_s("%d %d", &n1, &n2);
	saveCal(n1, n2, &sum, &sub);
	printf("ÇÕ : %d \nÂ÷ : %d \n", sum, sub);
}