#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* token;
int s_tok(char* s,char *word[])
{
	int i;
	int count = 0;
	token = strtok(s, " ");
	for (i = 0; token != NULL; i++)
	{
		word[i] = token;
		token = strtok(NULL, " ");
		count++;
	}
	return count;
}
void main()
{
	char s[100];
	char *word[100];
	int count;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	fgets(s, sizeof(s), stdin);
	s[strlen(s) - 1] = NULL;
	printf("��¹��ڿ�: ");
	count = s_tok(s, word);
	for (int i = 0; i < count; i++)
	{
		printf("%s", word[count - i - 1]);
	}
}