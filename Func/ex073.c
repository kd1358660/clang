#include<stdio.h>
void error_msg(void);
main()
{
	int a, b;
	printf("data1 data2?", a, b);
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d/%d=%dあまり%d\n", a, b, a / b, a % b);
	}
}
void error_msg(void)
{
	printf("0で割り算はできません\n");
	return;
}
