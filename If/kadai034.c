#include<stdio.h>
main()
{
	char n;
	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("¬•¶Žš‚â‚Å‚¥`");
	}
	
	else if (n >= 'A' && n <= 'Z')
	{
		printf("‘å•¶Žš‚â‚Å‚¥`");
	}
	else
	{
		printf("ERROR");
	}
}