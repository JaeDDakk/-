#include <stdio.h>
typedef struct {
	double real;
	double imag;
}complex;
void complex_add(complex c1, complex c2)
{
	printf("���� �Ǽ���: %lf\n", c1.real+c2.real);
	printf("���� �����: %lf\n", c2.imag+c2.imag);
}
int main()
{
	complex c1,c2;
	
	printf("ù ��° ���Ҽ��� �Ǽ���: ");	scanf("%lf",&c1.real);

	printf("ù ��° ���Ҽ��� �����: ");	scanf("%lf", &c1.imag);

	printf("�� ��° ���Ҽ��� �Ǽ���: ");	scanf("%lf", &c2.real);

	printf("�� ��° ���Ҽ��� �����: ");	scanf("%lf", &c2.imag);
	complex_add(c1, c2);
	
}