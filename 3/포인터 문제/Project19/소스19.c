#include <stdio.h>
#include <string.h>
#define size 100;
int main()
{
	char asdf[200] = { NULL };
	char a[100];
	for (int i = 0; i < 2; i++)
	{
		printf("���ڿ� �Է� >> ");
		fgets(a, sizeof(a) - 1, stdin);
		strcat(asdf, a);
	}

}
//�𸣰ڴ� 