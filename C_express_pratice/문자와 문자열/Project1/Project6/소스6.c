#include <stdio.h>
void str_upper(char* s)
{
	int i;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')//�ҹ���
		{
			s[i] = (s[i] - 'a' + 'A');
		}
	}
}
void main()
{
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s,99);

	str_upper(s);
	puts(s);
}