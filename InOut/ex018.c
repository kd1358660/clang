#include<stdio.h>
main()
{
	int n1, n2, n3, n4;
	printf("整数を３個入力;");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	printf("合計は%dです\n", n1 + n2 + n3);
	n4 = n1 + n2 + n3;
	//printf("平均は%.2fです\n", n4 / 3.00);
    printf("平均は%.2fです\n",(float) n4/ 3);
}