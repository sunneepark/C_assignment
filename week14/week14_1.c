#include <stdio.h>
int main()
{
	int arr[2][3] = { {1,2,3},{1,2,3} };
	int i, j;				
	int(*p)[3];

	p = arr;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}