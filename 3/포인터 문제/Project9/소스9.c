#include <stdio.h>
#define size 100
int main()
{
	int a, sum = 0, count = 0;
	int asdf[size];
	int* p = asdf;
	double avg;
	for (int i = 0; i < size; i++)
	{
		printf("�Է�>> ");
		scanf("%d", &a);
		if (a == -1)
			break;
		*(p+i) = a;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		sum += *(p + i);
	}
	avg = sum / count;
	printf("�հ�: %d / ���: %lf", sum, avg);
	return 0;
}