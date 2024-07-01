#include<stdio.h>
main()
{
	int c; 
	char dumy[256];

	//getchra‚ªÅ‰‚Ì‚P•¶š–Ú‚ğ‚Æ‚Á‚Ä‚­‚é
	c = scanf();
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = scanf();
	}
}