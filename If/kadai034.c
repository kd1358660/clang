#include<stdio.h>
main()
{
	char n;
	printf("�P�������́H");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("��������ł��`");
	}
	
	else if (n >= 'A' && n <= 'Z')
	{
		printf("�啶����ł��`");
	}
	else
	{
		printf("ERROR");
	}
}