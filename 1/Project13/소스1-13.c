#include <stdio.h>
int main()
{
	int ans, sum = 0, count = 0;
	double avr;
	
	while(1)
	{ 
		printf("���� �Է� (0~100 �̿��� �� �Է� ����) >> ");
		scanf_s("%d", &ans);
		
		if (ans < 0 || ans>100)
			break;
		count++;
		sum += ans;
	}
	avr = sum / count;
	printf("�հ�: %d / ���: %.1lf", sum, avr);
	return 0;
}