#include<stdio.h>
main()
{
	int i, ne, ret;
	printf("”‚ÍH");
	scanf("%d", &i);
	ne = 0;
	do {
		ret = 0;
		do {
			printf(" ");
			ret++;
		} while (ret < i -ne );
		ret = 0;
		do {
			printf("*");
			ret++;

		} while (ret <= ne);
		printf("\n");
		ne++;
	} while (ne < i);
}