#include <stdio.h>
#include <string.h>
char* token;
int count(char* s)
{
	int count = 0;
	token = strtok(s, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	return count;
}
void main()
{
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s) - 1);

	printf("�ܾ��� ���� %d�Դϴ�.", count(s));
}