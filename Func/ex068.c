#include<stdio.h>
main()
{
	int c;
	char dumy[256];

	//getchraが最初の１文字目をとってくる
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();
	}
}