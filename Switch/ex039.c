#include<stdio.h>
main()
{
	char shori;
	int su1, su2;
	printf("処理を入力");
	scanf("%c", &shori);

	printf("整数を入力");
	scanf("%d%d", &su1, &su2);

	switch (shori)
	{
	case'd':
		if (su1 > su2)
		{
			printf("最大値は%dです", su1);
		}
		else
		{
			printf("最大値は&dです", su2);
		}
		break;
	case's':
		if (su1 < su2)
		{
			printf("最小値は%dです", su1);
		}
		else
		{
			printf("最小値は%dです", su2);
		}
		break;
	case'g':
		printf("合計は%dです", su1 + su2);
		break;

	case'h':
		printf("平均は%.2fです", (su1 + su2) / 2.00);
		break;

	}
}