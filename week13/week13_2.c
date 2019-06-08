#include <stdio.h>

int main() {
	char c = 'A';
	int i = 1000;
	double d = 6.78;

	char *ptrchar = &c;
	int *ptrint = &i;
	double *ptrdouble = &d;

	printf("%c %c\n", *ptrchar, *ptrchar+1);
	printf("%d %d\n", *ptrint, *ptrint + 1);
	printf("%lf %lf\n", *ptrdouble, *ptrdouble + 1);

	return 0;
}