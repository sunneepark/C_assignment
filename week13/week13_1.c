#include <stdio.h>

int main() {
	int i = 3000;
	int *p = &i;
	printf("i의주소값(i로 나타내시오) = %p\n", &i);
	printf("i의주소값(p로 나타내시오) = %p\n", p);
	printf("i(i로 나타내시오) = %d\n", i);
	printf("i(p로 나타내시오) = %d\n", *p);

	return 0;
}