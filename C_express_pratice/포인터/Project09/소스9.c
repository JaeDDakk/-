#include <stdio.h>
int search(int* A, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (A[i] == search_value)
		{
			return i;
		}
	}
}
int main()
{
	int A[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	
	printf("������ 200������ ����� �ε���=%d", search(A, 10, 200));
	return 0;
}