#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char s[100];
	char* token;
	int i, count = 0;
	
	printf("���ڿ� �Է� >> ");
	gets_s(s, sizeof(s));

	token = strtok(s, " ");
	for (i = 0; token != NULL; i++)
	{
		token = strtok(NULL, " ");
		count++;
	}
	printf("%d", count);
}