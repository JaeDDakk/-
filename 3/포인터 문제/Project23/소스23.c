#include <stdio.h>
#include <string.h>
void time(char* s, char c);
int main()
{
	char s[100];
	char c;
	

	printf("�ܾ� �Է� >> ");
	gets_s(s, sizeof(s));
	printf("ã�� ���� �Է� >>");
	c = getchar();
	getchar();
	time(s, c);
}
void time(char* s, char c)
{
	int i, check = 0;

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
		{
			printf("%d", i);
			check++;
			break;
		}
	}
	if (check == 0)
	{
		printf("Notfound");
	}
}