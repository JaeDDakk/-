#include <stdio.h>
#include <string.h>
#define size 6
int main()
{
	char ch;
	char asdf[size] = { 'H','E','L','O','W','~'};
	printf("�Է� >> ");
	scanf_s("%c", &ch);
	
	for (int i = 0; i < size; i++)
	{
		if (asdf[i] == ch)
		{
			printf("%d\n", i);
		}
		printf("none");
	}
	return 0;
}