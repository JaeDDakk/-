#include <stdio.h>
#include <ctype.h>
void get_response(char* prompt)
{
	int i;
	for (i = 0; prompt[i] != NULL; i++)
	{
		if (prompt[i] <= 'Z' && prompt[i] >= 'A')
		{
			prompt[i] = tolower(prompt[i]);
		}
	}
	if (strcmp("yes", prompt)==0 || strcmp("ok", prompt)==0)
	{
		printf("�������� �亯");
	}
	else if (strcmp("no", prompt) == 0)
	{
		printf("�������� �亯");
	}
}
void main()
{
	char prompt[10];
	printf("������ �Ͻðڽ��ϱ�? ");
	gets_s(prompt, 9);
	get_response(prompt);
}