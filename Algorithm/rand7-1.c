#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num=0, cnt=0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("１〜１０００の中で当たりの数を予想してください\n");
	for (; ans != num; cnt++)
	{
		printf("当たりの数は？");
		scanf("%d", & num);
		if (ans > num)
		{
			printf("当たりの数より小さいです\n");
		}
		if (ans < num)
		{
			printf("当たりの数より大きいです\n");
		}
	}
	printf("正解！%d回目で当たりました", cnt);
}