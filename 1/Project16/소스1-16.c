#include <stdio.h>
int main()
{
	int row, col, mul;

	printf("��� �� �Է� >> ");
	scanf_s("%d %d", &col, &row);

	for (int i = 1; i <= col; i++)
	{
		for (int j = 1; j <= row; j++)
		{
			mul = i * j;
			printf("%3d", mul);
		}
		printf("\n");
	}
	return 0;
}