#include <stdio.h>
int array_sum(int* A, int size)
{
	int i, sum = 0;
	printf("A[]:");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(A + i));
		sum += *(A + i);
	}
	return sum;
}
int main()
{
	int A[10] = { 1,2,3, };
	printf("\n������ ��=%d",array_sum(A,10));
	return 0;
}