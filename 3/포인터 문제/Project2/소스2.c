#include <stdio.h>
int main()
{
	char asdf[5];
	char* a = asdf;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�Է� >> ");
		scanf(" %c", a + i);
	}
	printf("%c %c %c",*a,*a+2,*a+4);
	return 0;
}