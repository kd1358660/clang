#include<stdio.h>
main()
{
	char n;
	printf("１文字入力？");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("小文字やでぇ〜");
	}
	
	else if (n >= 'A' && n <= 'Z')
	{
		printf("大文字やでぇ〜");
	}
	else
	{
		printf("ERROR");
	}
}