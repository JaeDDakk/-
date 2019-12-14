#include <stdio.h>
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int a, b, c;
	a = x;
	b = y;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	*p_gcd = a;
	*p_lcm = (x * y) / (*p_gcd);
}
int main()
{
	int x, y;
	int p_lcm, p_gcd;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	get_lcm_gcd(x, y, &p_lcm, &p_gcd);
	printf("�ּҰ������ %d�Դϴ�.\n�ִ������� %d�Դϴ�.\n", p_lcm, p_gcd);
	
}