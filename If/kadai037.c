#include<stdio.h>
main()
{
	int i;
	printf("0から100までの整数");
	scanf("%d", &i);
	if (i < 29)
	{
		printf("その結果は１です");
	}else
		if ( i < 50)
		{
			printf("その結果は２です");
		}else
			if ( i < 80)
			{
				printf("その結果は３です");
			}
			else
				if ( i <90 )
				{
					printf("その結果は4です");
				}else
					{
						printf("その結果は5です");
					}
}