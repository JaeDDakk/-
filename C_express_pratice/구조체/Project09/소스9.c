#include <stdio.h>
#include <string.h>
typedef struct {
	char name[100];
	int calories;
}food;
int sum_c(food* f);
int main()
{
	food f[3];
	for (int i = 0; i < 3; i++)
	{
		printf("���� ������ �̸�: ");
		gets_s(f[i].name, sizeof(f[i].name));
	
		printf("Į�θ� �Է�: ");
		scanf("%d", &(f[i].calories));
		getchar();
	}
	printf("�� Į�θ�=%d", sum_c(f));
	return 0;
}
int sum_c(food* f)
{
	int sum;
	sum = (f[0].calories) + (f[1].calories) + (f[2].calories);
	return	sum;
}