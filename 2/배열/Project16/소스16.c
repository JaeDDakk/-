#include <stdio.h>
int main()
{
	int asdf[4][2];
	int i, j, sum;

	printf("�Է��Ͻÿ�(��4��2)\n");
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d %d", &asdf[i][0], &asdf[i][1]);

	}
	printf("���� ���: ");
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 2; j++)
		{
			sum += asdf[i][j];
		}
		printf("%d,", sum / 2);
	}
}