#include <stdio.h>
#include <string.h>
int main()
{
	char op[10];
	int i,x, y;
	int result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%s %d %d", op, &x, &y);
	if (strcmp(op, "add") == 0)
	{
		result = x + y;
	}
	if (strcmp(op, "sub") == 0)
	{
		result = x - y;
	}
	if (strcmp(op, "mul") == 0)
	{
		result = x * y;
	}
	if (strcmp(op, "div") == 0)
	{
		result = x / y;
	}
	printf("������ ���: %d\n",result);
}