/*10�� 
 *�����빮�ڸ��Է¹޴ٰ�, �빮���̿��ǹ��ڰ��ԷµǸ�
 *�Է����ߴ��ϰ�, �Է��ѿ����빮�ڵ鿡����
 *�����ǰ�������������������ϴ����α׷����ۼ��Ͻÿ�.
 */
#include<stdio.h>
int main()
{
	char ch;
	char asdf[26] = { 0 };

	while (1)
	{
		printf("�Է� >> ");
		scanf(" %c", &ch);
		if (ch >= 'A' && ch <= 'Z')
		{
			asdf[ch - 'A']++;
		}
		else
			break;
	}
	for (int i = 0; i < 26; i++)
	{
		if (asdf[i] != 0)
			printf(" %c : %d\n", asdf[i + 'A'], asdf[i]);
								/*�̺κ� Ʋ��*/
	}
}