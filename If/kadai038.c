#include<stdio.h>
main()
{
	char n;
	printf("1•¶Žš“ü—Í");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê%c", n-0x20);
	}
	if(n >= 'A' && n <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê%c", n+0x20);
	}
}