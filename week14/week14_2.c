#include <stdio.h>
int main()
{
	char arr[80] = { 0, };
	FILE *out;
	fopen_s(&out,"input.txt", "r");
	FILE *in;
	fopen_s(&in,"output.txt", "w");
	if (out == NULL)
		printf("파일을 읽지 못하였습니다");
	while (1)
	{
		if (fscanf_s(out, "%s", arr,sizeof(arr)) == EOF) break;
		printf("%s\n", arr);
	
		scanf_s("%s", arr, sizeof(arr));
		fprintf(in, "%s\n", arr);
	}

	fclose(out);
	//fclose(in);
}