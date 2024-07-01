#include<stdio.h>
main()
{
	int i;
	printf("0‚©‚ç100‚Ü‚Å‚Ì®”");
	scanf("%d", &i);
	if (i < 29)
	{
		printf("‚»‚ÌŒ‹‰Ê‚Í‚P‚Å‚·");
	}else
		if ( i < 50)
		{
			printf("‚»‚ÌŒ‹‰Ê‚Í‚Q‚Å‚·");
		}else
			if ( i < 80)
			{
				printf("‚»‚ÌŒ‹‰Ê‚Í‚R‚Å‚·");
			}
			else
				if ( i <90 )
				{
					printf("‚»‚ÌŒ‹‰Ê‚Í4‚Å‚·");
				}else
					{
						printf("‚»‚ÌŒ‹‰Ê‚Í5‚Å‚·");
					}
}