#include <stdio.h>
typedef struct {
	int x, y;
}space;
int quadrant(space p);
int main()
{
	space p;
	printf("��ǥ�� �Է��Ͻÿ� (x , y) ");
	scanf("%d %d", &p.x, &p.y);
	printf("(%d, %d)�� ��и� = %d", p.x, p.y, quadrant(p));

}
int quadrant(space p)
{
	if (p.x == 0 && p.y == 0)
		return 0;
	if (p.x > 0 && p.y > 0)
		return 1;
	if (p.x < 0 && p.y > 0)
		return 2;
	if (p.x < 0 && p.y < 0)
		return 3;
	if (p.x > 0 && p.y < 0)
		return 4;
}