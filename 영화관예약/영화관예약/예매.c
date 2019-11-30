#include <stdio.h>
#include <string.h>
#define SEAT_COL 10
#define SEAT_ROW 10
#define USER_MAX 10
void pattern();
void seat();
void seat_status();
void reservation();
void cancel_reservation();
int print_menu();
int ans1;
int seats[SEAT_ROW][SEAT_COL] = { 0 };	//�¼� �迭
char Login[USER_MAX][2][30];
int main()
{
	char id[30], pw[30];
	int first_menu_ans, index;
	while (1)
	{
		printf("1. �α��� �� �¼�����\n");
		printf("2. ȸ������\n");
		printf("3. ����\n");
		scanf_s("%d", &first_menu_ans);

		if (first_menu_ans == 1) //�α���
		{

			printf("Id�� �Է��Ͻÿ�: ");
			scanf_s("%s", id);
			index = 0;
			for (int i = 0; i < USER_MAX; i++)
			{
				if (strcmp(Login[index][0], id, 30) == 0)
				{
					printf("Pw�� �Է��Ͻÿ�: ");
					scanf_s("%s", pw);
					if (strcmp(Login[index][1], pw, 30) == 0)
					{
						printf("�α��� �Ǿ����ϴ�.\n\n");

						ans1 = print_menu(); //���� ��� ����
						if (ans1 == 3)
							break;
						pattern();//========
						seat();//1 2 3 4....10
						pattern();//========
						seat_status(); // 0 0 0 0 0 0 0 0 0
						reservation(); // ����, �̹̿���Ǹ� �ٽ�
						cancel_reservation();//���, �̹̺��ڸ��� �ٽ�
					}
				}
				index++;
			}
			printf("����\n");
		} //�α���
		else if (first_menu_ans == 2)//ȸ������
		{
			static int user_count = 0;
			if (user_count >= 9)
				printf("ȸ������ ���� á���ϴ�.");
			else
			{
				while (1)
				{
					printf("Id�� �Է��Ͻÿ�: ");
					scanf_s("%s", Login[user_count][0],id,30);
					index = 0;
					for (int i = 0; i < USER_MAX; i++)//�ߺ� Ȯ��
					{
						if (strcmp(Login[index][0], id, 30) == 0)
						{
							printf("���̵� �ߺ��Ǿ����ϴ�.");
							break;
						}
						index++;
					}
					strcpy_s(Login[user_count][0], id, 30);
					printf("Pw�� �Է��Ͻÿ�: ");
					strcpy_s(Login[user_count][1], pw, 30);
					user_count++;
					break;
				}
			}
		}
		else if (first_menu_ans == 3)//����
		{
			break;
		}
	}
	return 0;
}//����
void pattern()
{
	int i;
	for (i = 0; i < 36; i++)
	{
		printf("=");
	}printf("\n");
}// ==
void seat()
{
	int i;
	printf("   |");
	for (i = 0; i < SEAT_COL; i++)
	{
		if (i >= 10)
			printf("  %d", i + 1);
		else
			printf("  %d", i + 1);
	}printf("\n");
}//�� ����
int print_menu()
{

	printf("1. ����\n");//1.���� 2.��� 3.����
	printf("2. ���\n");
	printf("3. ����\n");
	scanf_s("%d", &ans1);
	return ans1;
}
void seat_status()
{
	int i, j;
	for (i = 0; i < SEAT_ROW; i++) //�¼� ��Ȳǥ
	{
		if (i >= 9)					//�� 1
			printf("%d |", i + 1);	//�� 2 ...
		else
			printf(" %d |", i + 1);	//�� 10

		for (j = 0; j < SEAT_COL; j++)
		{
			if (j >= 10)
				printf("   %d", seats[i][j]);
			else
				printf("  %d", seats[i][j]);
		}printf(" |\n");
	}pattern();
}
void reservation()
{
	int ans2, ans3;
	if (ans1 == 1) //����
	{
		printf("���° �¼��� �����Ͻðڽ��ϱ�?(�� ,��) \n");
		scanf_s("%d %d", &ans2, &ans3);
		if (seats[ans2 - 1][ans3 - 1] == 0)
		{
			seats[ans2 - 1][ans3 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �¼��Դϴ�.\n");
	}
}
void cancel_reservation()
{
	int ans2, ans3;
	if (ans1 == 2)//���
	{
		printf("���° �¼��� ����Ͻðڽ��ϱ�?(�� ,��) \n");
		scanf_s("%d %d", &ans2, &ans3);
		if (seats[ans2 - 1][ans3 - 1] == 1)
		{
			seats[ans2 - 1][ans3 - 1] = 0;
			printf("��ҵǾ����ϴ�.\n");
		}
		else
			printf("�̹� ���¼��Դϴ�.\n");
	}
}