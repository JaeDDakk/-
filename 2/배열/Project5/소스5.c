#include <stdio.h>
#define size 5
int main()
{
	int asdf[size];
	int a;
	int minimum, maximum;
	for (int i = 0; i < size; i++)
	{
		printf("�Է� >> ");
		scanf_s("%d", &a);
		asdf[i] = a;
	}
	minimum = asdf[0];
	for (int i = 1; i < size; i++)
		{
			if (asdf[i] < minimum)
				minimum = asdf[i];
		}
	printf("�ּڰ�: %d\n", minimum);

	maximum = asdf[0];
	for (int i = 1; i < size; i++)
	{
		if (asdf[i] > maximum)
			maximum = asdf[i];
	}
	printf("�ִ�: %d\n", maximum);
	return 0;
}
	
	