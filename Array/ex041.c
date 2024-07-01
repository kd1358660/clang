#include<stdio.h>
main()
{
	int i;
	float gokei,a[3];
	gokei = 0;
	for (i = 0; i < 3; i++) 
	{
		printf("ŽÀ”‚ð“ü—Í\n");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("‡Œv‚Í%.2F‚Å‚·\n", gokei);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", gokei / 3);
	printf("Å‰‚Ì”%.2f", a[0]);
}