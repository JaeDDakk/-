#include <stdio.h>
int count(char* s);
int main()
{
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	fgets(s, sizeof(s), stdin);
	printf("�������� ������ %d�Դϴ�.", count(s));
	return 0;
}
int count(char* s)
{
	int i, count = 0;
	
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == '.' || s[i] == ',')
		{
			count++;
		}
	}
	return count;
}