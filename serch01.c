#include<stdio.h>
main()
{
	int s,i, date[] = { 30,57,2,58,35,24,96,13,1,75 };

	printf("探索値は？");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == date[i])break; 
		{

		}
	}
	if (i >= 10)
	{
		printf("見つかりませんでした\n");
	}
	else
	{
		printf("%d番目にあった\n", i);
	}
}