#include<stdio.h>
main()
{
	int i;
	float gokei,a[3];
	gokei = 0;
	for (i = 0; i < 3; i++) 
	{
		printf("実数を入力\n");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("合計は%.2Fです\n", gokei);
	printf("平均は%.2fです\n", gokei / 3);
	printf("最初の数%.2f", a[0]);
}