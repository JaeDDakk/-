#include <stdio.h>
#define size 6
int main()
{
	double asdf[size];
	double* p = asdf;
	int i;
	double sum = 0;
	
	for (i = 0; i < size; i++)
	{
		printf("�Է� >> ");
		scanf("%lf", (p + i));
	}
	for (i = 0; i < size; i++)
	{
		sum += *(p+i);
	}
	printf("���: %.1lf", sum / size);
	return 0;
}