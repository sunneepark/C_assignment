#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void eachNum(int a) {
	static int i = 0;//���° �ڸ�����
	if (a == 0)
		return;
	else
	{
		printf("10^%d �ڸ��� = %d\n", i, a % 10);
		eachNum(a / 10);
	}
}
int main() {
	srand(time((unsigned)NULL));

	int a = rand() % 100000 + 1;
	printf("�߻��� ���� A : %d \n",a);
	eachNum(a);
	return 0;
}