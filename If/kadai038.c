#include<stdio.h>
main()
{
	char n;
	printf("1文字入力");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("変換結果%c", n-0x20);
	}
	if(n >= 'A' && n <= 'Z')
	{
		printf("変換結果%c", n+0x20);
	}
}