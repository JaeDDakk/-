#include <stdio.h>
int main()
{
	char asdf[5];
	char* a = asdf;
	for (int i = 0; i < 5; i++)
	{
		printf("�Է� >> ");
		scanf(" %c", a+i);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", *(a+i));
	}
	return 0;
}