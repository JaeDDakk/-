#include <stdio.h>
int change(int n);
int main()
{
	int n;

	printf("���� ���� �Է� >> ");
	scanf_s("%d", &n);
	change(n);
	return 0;
}
int change(int n)
{
	if (n == 0)
		return;
	else
	{ 
		change(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}