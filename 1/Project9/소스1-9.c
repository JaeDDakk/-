#include<stdio.h>
int main()
{
	int ans, sum=0;
	
	printf("���� �Է� >> ");
	scanf_s("%d", &ans);

	for (int i = 1; i <= ans; i++)
	{
		sum = sum+ i;
	}
	printf("%d", sum);
	return 0;
}