#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pow(int a, int b) {
	if (b == 0)
		return 1;
	else
		return a*pow(a, b - 1);
}
int main() {
	srand(time((unsigned)NULL));

	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	printf("발생한 난수 A : %d , B = %d\n",a,b);
	printf("계산결과 : %d", pow(a, b));
	return 0;
}