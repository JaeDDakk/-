/*18��
 *�����̾��¹��ڿ����Է¹ް�, �������Է¹޾Ƽ�
 *���ڿ��Ǹǵں���������ŭ����ϴ����α׷����ۼ��Ͻÿ�.
 *����, �Է¹������������ڿ��Ǳ��̺���ũ�ٸ�
 *�ǵں��͸�ó�������������ؾ��Ѵ�.
 *���ڿ��Ǳ��̴�100 �����̴�.
 */
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char asdf[100] = { NULL };
	int a;
	printf("���ڿ� �Է� >> ");
	scanf("%s", asdf, 99);

	printf("���� �Է� >> ");
	scanf("%d", &a);

	for (int i = 100; i >= 0; i--)
	{
		if (asdf[i] != NULL)
		{
			for (int j = a; j >= 0; j--)
			{
				printf("%c", asdf[i--]);
			}
		}
	}
	return 0;
}
//�𸣰ھ��������