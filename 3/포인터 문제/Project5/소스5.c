#include <stdio.h>
int main()
{
	int asdf[5];
	int* a = asdf;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�Է� >> ");
		scanf("%d", a + i);
	}
	int minimum, maximum;
	minimum = *a;
	maximum = *(a + 4);
	for (i = 1; i < 5; i++)
	{
		if (minimum > * (a + i))
		{
			minimum = *(a + i);
		}
		if (maximum < *(a + 4 - i))
		{
			maximum = *(a + 4 - i);
		}
	}
	printf("�ִ�: %d\n�ּڰ�: %d", maximum, minimum);
	return 0;
}