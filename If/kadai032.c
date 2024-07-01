#include<stdio.h>
main()
{
	int i;
	printf("整数は？");
	scanf("%d", &i);
	if (i%2 == 0)
	{
		printf("その数は「偶数です」");
	}
	else
	{
		printf("その数は「奇数です」");
	}
}