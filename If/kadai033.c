#include<stdio.h>
main()
{
	char n;
	printf("アルファベット？");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("小文字やでぇ～");
	}
	if (n >= 'A' && n <= 'Z')
	{
		printf("大文字やでぇ～");
	}
}