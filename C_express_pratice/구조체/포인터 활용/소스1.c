#include <stdio.h>
#include <string.h>
typedef struct {
	int id;
	char title[100];
	char author[20];
	char subject[100];
}BOOK;
int main()
{
	BOOK book;//������ ����

	book.id = 1;
	strcpy(book.title, "�ٶ��� �Բ� �������");
	strcpy(book.author, "������ ��ÿ");
	
	printf("{ %d, %s, %s }", book.id, book.title, book.author);
	return 0;	
}