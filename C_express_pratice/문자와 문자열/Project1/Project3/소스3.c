#include <stdio.h>
int str_chr(char* s, int c)
{
	int i, count = 0;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
			count++;
	}
	return count;
}
void main()
{
	char str[100];
	char c;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, sizeof(str) - 1);
	printf("������ �� ���ڸ� �Է��Ͻÿ�. ");
	c = getchar();
	printf("%c�� ����: %d",c ,str_chr(&str, c));
}