#include <stdio.h>
int main()
{
	int a;

	printf("���� �Է� >> ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			printf("(%d , %d) ", i, j);
		}
		printf("\n");
	}
	return 0;
}