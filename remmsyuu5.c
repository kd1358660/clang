#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,s, i, date[100];
	srand(time(0));
	rand();
	printf("探索値は？");
	scanf("%d", &s);
	for (i = 0 ; i < 100; i++)
	{
		date[i] = rand() % 200+1;
	}
	for (i = 0; i < 100; i++)
	{
		if (s == date[i])break;
		{

		}
	}
	if (i >= 100)
	{
		printf("見つかりませんでした\n");
	}
	else
	{
		printf("%d番目にあった\n", i);
	}
}