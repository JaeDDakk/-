#include <stdio.h>
int main()
{
	int i;

	for (i = 1; i <= 100; i++) {

		if ((i % 3 == 0) && (i % 5 == 0))
			printf("¦���� ");
		if ((i / 10 == 3) || (i / 10 == 6) || (i / 10 == 9))
			printf("¦ ");
		else if ((i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9))
			printf("¦ ");
		else if (i % 5 == 0)
			printf("���� ");
		else if (i / 10 == 5)
			printf("���� ");
		else
			printf("%d ", i);
	}
	return 0;
}