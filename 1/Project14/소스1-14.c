#include<stdio.h>
int main()
{
	double width, height;
	char ans;
	while(1)
	{
	printf("�غ� �Է� >> ");
	scanf_s("%lf", &width);
	printf("���� �Է� >> ");
	scanf_s("%lf", &height);

	printf("�ﰢ�� ����: %.1lf\n", width * height / 2);
	printf("Continue? ");
	scanf_s(" %c",&ans);
	
	if (ans != 'y' && ans != 'Y')
		break;
	} 
	return 0;
}