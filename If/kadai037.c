#include<stdio.h>
main()
{
	int i;
	printf("0����100�܂ł̐���");
	scanf("%d", &i);
	if (i < 29)
	{
		printf("���̌��ʂ͂P�ł�");
	}else
		if ( i < 50)
		{
			printf("���̌��ʂ͂Q�ł�");
		}else
			if ( i < 80)
			{
				printf("���̌��ʂ͂R�ł�");
			}
			else
				if ( i <90 )
				{
					printf("���̌��ʂ�4�ł�");
				}else
					{
						printf("���̌��ʂ�5�ł�");
					}
}