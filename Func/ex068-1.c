#include<stdio.h>
main()
{
	int c; 
	char dumy[256];

	//getchra���ŏ��̂P�����ڂ��Ƃ��Ă���
	c = scanf();
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = scanf();
	}
}