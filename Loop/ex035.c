#include<stdio.h>
main()
{
	int i, goke;
	goke = 0;
	while (1) {
		printf("数を入れて");
		scanf("%d", &i);
		if (i == -999)break;
		goke += i;
	}
	printf("%d", goke);
}