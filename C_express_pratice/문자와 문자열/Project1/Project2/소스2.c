#include <stdio.h>
void space_delete(char* str)
{
	int i = 0;
	while (str[i] != NULL)
	{
		if (str[i] != ' ')
			printf("%c", str[i]);
		i++;
	}
}
int main()
{
	char str[100];
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets(str);
	space_delete(str);
	return 0;
}