#include <stdio.h>

void saveCal(int n1, int n2, int *gcd, int *lcm) {
	if (n1 > n2) {//n2가 크다는 가정하에
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}
	int temp_gcd = 0;
	for (int i = 1; i <= n2; i++) {
		if (n1%i == 0 && n2 %i == 0)
			temp_gcd = i;
	}
	*gcd = temp_gcd;
	*lcm = temp_gcd * (int)(n1/temp_gcd) * (int)(n2/temp_gcd);
}
int main() {
	int n1 = 0;
	int n2 = 0;
	int gcd = 0;
	int lcm = 0;
	scanf_s("%d %d", &n1, &n2);
	saveCal(n1, n2, &gcd, &lcm);
	printf("최대공약수 : %d \n최소공배수 : %d \n", gcd, lcm);
}