#include <stdio.h>
int main()
{
	int a, b;

	printf("�� �� �Է� >> ");
	scanf_s("%d %d", &a, &b);

	for (a; a <= b; a++)
		printf("%d ", a);

	return 0;
}