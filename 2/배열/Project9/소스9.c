#include <stdio.h>
#define size 100
int main()
{
	int a, sum = 0, count = 0;
	int asdf[size];
	double avg;
	for (int i = 0; i < size; i++)
	{
		printf("�Է� >> ");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		asdf[i] = a;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		sum += asdf[i];
	}
	avg = sum / count;
	printf("�հ�: %d / ���: %lf", sum, avg);
	return 0;
}