#include <stdio.h>
#define PIE 3.14
typedef struct {
	int x, y;
}point;
typedef struct {
	point center;	//���� �߽�
	double radius;	//���� ������
}circle;
double area(circle c);
double perimeter(circle c);
int main()
{
	circle c;

	printf("���� �߽���: ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("���� ������: ");
	scanf("%lf", &c.radius);
	printf("���� ����=%lf, ���� �ѷ�=%lf", area(c), perimeter(c));
	return 0;
}
double area(circle c)
{
	return c.radius * c.radius * PIE;
}
double perimeter(circle c)
{
	return c.radius * 2 * PIE;
}