#include <stdio.h>
int main()
{
	int width, length, area;

	printf("�� �� �Է� >> ");
	scanf_s("%d %d", &width, &length);

	width = width + 5;
	length = length * 2;
	area = width * length;
	printf("width = %d\nlength = %d\narea = %d",width, length, area);
	return 0;
}