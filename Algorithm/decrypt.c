#include<stdio.h>
main()
{
	char d[50];
	int i;
	printf("“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0' ; i++)
	{	
		d[i]--;
	}
	printf("‰ð“Ç•¶Žš%s", &d[0]);

}