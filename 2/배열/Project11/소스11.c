/*1 ����
 *100 �̸��Ǿ��������鿡���Ͽ�,
 *�Է¹޴ٰ�0���ԷµǸ鸶�������Էµ�0�������ϰ�,
 *�׶������Էµ������ǽ����ڸ����ڰ�
 *�����������������������Ͻÿ�.
 *(�Է���0�μ��ڴ������������)
 */
#include <stdio.h>
#define size 10
int main()
{
	int arr[size] = { 0 };
	int i, count = 0, a;

	do
	{
		printf("�Է� >> ");
		scanf("%d", &a);
		if (a == 0)
			break;
		arr[a / 10]++;
	} while (a >= 0 && a < 100);
	for (i = 0; i < size; i++)
	{
		if (arr[i] != 0)
			printf("  %d : %d\n", i, arr[i]);
	}
	return 0;
}