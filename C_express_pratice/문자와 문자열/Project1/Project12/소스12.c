#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	char* word[100];
	char* token;
	int i, count = 0;

	printf("���� �̸��� �빮�ڷ� �Է��Ͻÿ�: ");
	fgets(s, sizeof(s), stdin);
	s[strlen(s) - 1] = NULL;
	for (i = 0; s[i] != NULL; i++)
	{
		s[i] = tolower(s[i]); //�ҹ��ڷ� ��ȯ
	}
	token = strtok(s, " ");
	for (i = 0; token != NULL; i++)
	{
		word[i] = token;
		token = strtok(NULL, " ");
		count++;
	}
	printf("��ȯ�� �̸�: %s, %s", word[1], word[0]);
}