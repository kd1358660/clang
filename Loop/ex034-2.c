#include<stdio.h>
main()
{
	int i, ne;
	printf("���́H");
	scanf("%d", &i);
	do
	{
		ne = 1;�A
		do
		{
			printf("*");
			ne++;
		} while (ne <= 5);
		i--;
		printf("\n")
	}while (i > 0);
}
