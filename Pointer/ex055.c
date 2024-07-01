#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 },*p_a=a,i,a_sum=0;
	float b[] = { 11.1,22.2,33.3,44.4},*p_b=b,b_sum=0;
	for (i = 0; i < 6; i++)
	{
		a_sum += *p_a;
		p_a++;
	}
	printf("配置a　合計＝%d 平均＝%.3f", a_sum, (float)a_sum / 6);
	for (i = 0; i < 4;i++)
	{
		b_sum += *p_b;
		p_b++;
	}
	printf("配置b　合計＝%.3f 平均＝%.3f", b_sum, b_sum / 4);
}