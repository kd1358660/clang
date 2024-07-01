#include<stdio.h>
main()
{
	int i;
	printf("整数は？");
	scanf("%d", &i);
	if (0 < i)
	{
		printf("入力値はプラスです");
	}
	if (0 > i)
	{
		printf("入力値はマイナスです");
	}
	if (0 == i)
	{
		printf("入力値は０です");
	}
}