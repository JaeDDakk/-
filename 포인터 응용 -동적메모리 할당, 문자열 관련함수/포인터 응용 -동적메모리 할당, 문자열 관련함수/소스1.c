#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* arr;
	int size, i;
	int* p;

	printf("ĭ �Է� >> ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	for (p = arr; p < arr + size; p++)
	{
		printf("�� �Է� >> ");
		scanf("%d", p);
	}

	for (p = arr; p < arr + size; p++)
	{
		printf("%d\n", *p);
	}
	free(arr);
	return 0;
}