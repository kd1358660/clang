#include<stdio.h>
main()
{
	int low,high,mid, s, d[11] = { 4,10,22,28,30,42,59,63,70,84.88 };
	printf("探索値を入力\n");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if (s==d[mid])
		{
			break;
		}
		if (s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		
	}
	if (low > high)
	{
		printf("見つかりませんでした\n");
	}
	else
	{
		printf("%d番目にありました\n", mid);
	}
}