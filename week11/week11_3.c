#include <stdio.h>
#define SIZE 10

int main(void)
{
	char ans1;
	int seat1, seat2, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ�n) ");
		scanf_s("%c", &ans1,1);

		if (ans1 == 'y')
		{
			printf("-------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("-------------------------------\n");

			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("�¼� ��ȣ 2���� �Է��Ͽ��ּ���: ");
			scanf_s("%d %d", &seat1, &seat2);
			rewind(stdin);
			if ((seat1 <= 0 || seat1 > SIZE) ||
				(seat2 <= 0 || seat2 > SIZE)) {
				printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
				continue;
			}
			if (seats[seat1 - 1] == 0 && seats[seat2 - 1] == 0) {	// ������� �ʾ����� 
				seats[seat1 - 1] = 1;
				seats[seat2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else {			// �̹� ����Ǿ�����
				printf("�̹� ����� �ڸ��Դϴ�.\n");
				continue;
			}
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}