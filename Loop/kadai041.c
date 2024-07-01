#include<stdio.h>
main()
{
	int kazu, i, ia;
	printf("®”");
	scanf("%d", &i);
	kazu = 0;
	ia = 0;
	while (i!= -999)
	{
		kazu  += i;
		ia++;
		printf("®”");
		scanf("%d", &i);
	}
	printf("‡Œv%d", kazu);
	printf("•½‹Ï%.2f", (float)kazu / ia);
}