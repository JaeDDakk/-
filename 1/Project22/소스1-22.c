#include <stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);
int main()
{
	int a, b;
	printf("�� �� �Է� >> ");
	scanf_s("%d %d", &a, &b);

	printf("�ִ� ����� = %d / �ּ� ����� = %d", gcd(a, b), lcm(a, b));
	return 0;
	
}

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
