#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SEAT_COL 10
#define SEAT_ROW 10
#define USER_MAX 10
#define SIZE 10
typedef struct __member
{
	char Id[30];
	char Pw[30];
	char Name[30];
	int Age;
	int r_seats[SEAT_ROW][SEAT_COL];
}member;
void show();
void pattern();
void seat();
void seat_status();
void reservation();
void cancel_reservation();
int print_menu();
int ans1;
int seats[SEAT_ROW][SEAT_COL] = { 0, };	//�¼� �迭

int main()
{	
	char check;
	int i ,index;
	char ans_id[30], ans_pw[30], ans_name[30];
	int first_menu_ans, user_count = 0;
	member user[USER_MAX];
	user[USER_MAX].r_seats[SEAT_ROW][SEAT_COL] = 0;

	while (1)
	{
		printf("\n1. �α��� �� �¼�����\n");
		printf("2. ȸ������\n");
		printf("3. ����\n\n");
		scanf_s("%d", &first_menu_ans);
		
		if (first_menu_ans == 3) // 3�� �� ����
			break;	
		if (first_menu_ans == 2) // 2�� �� ȸ������
		{
			while(1)
			{
				if (user_count >= USER_MAX)
				{
					printf("ȸ���� �� á���ϴ�.");
					break;
				}
				printf("ȸ������ �Ͻðڽ��ϱ�? Y or N ");
				scanf(" %c", &check);
				if (check == 'N')
					break;
				else if (check == 'Y')
				{
					printf("Id�� �Է��ϼ��� >> ");
					scanf(" %s", ans_id);
					index = 0;

					for (i = 0; i < user_count; i++)
					{
						if (strcmp(user[i].Id, ans_id) == 0)	//
						{										//���̵� �ߺ� üũ
							index++;							//
						}										//
					}
					if (index == 0)
					{
						strcpy(user[user_count].Id, ans_id);
						printf("Pw�� �Է��ϼ��� >> ");
						scanf(" %s", ans_pw);
						strcpy(user[user_count].Pw, ans_pw);
						printf("Name�� �Է��ϼ��� >> ");
						scanf(" %s", ans_name, 29);
						strcpy(user[user_count].Name, ans_name);
						printf("Age�� �Է��ϼ��� >> ");
						scanf("%d", &user[user_count].Age);
						printf("ȸ�����Կ� �����Ͽ����ϴ�.\n");
						user_count++;
						break;
					}
					else
					{
						printf("�̹� ��ϵǾ��ִ� Id�Դϴ�.\n\n");
						break;
					}
				}
			}
		}
		if (first_menu_ans == 1)//�α��� �� ���� 
		{
			while (1)
			{
				printf("�α��� �Ͻðڽ��ϱ�? Y or N ");
				scanf(" %c", &check);
				if (check == 'N')
					break;
				else if (check == 'Y')
				{
					printf("Id�� �Է��ϼ��� >> ");
					scanf(" %s", ans_id,29);
					printf("Pw�� �Է��ϼ��� >> ");
					scanf(" %s", ans_pw,29);
					for (i = 0; i < user_count; i++)
					{
						if (strcmp(user[i].Id, ans_id) == 0)
						{
							if (strcmp(user[i].Pw, ans_pw) == 0)
							{
								printf("\n�α��� �Ǿ����ϴ�.\n");
							}
							else
								printf("\n����\n");
						}
						else
						{
							printf("\n����\n\n");
						}
							
					}
				}
			}
		}
		//show();
	}
	return 0;
}//����
void show()
{
	while (1)
	{
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