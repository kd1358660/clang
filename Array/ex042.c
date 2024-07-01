#include<stdio.h>
main()
{
	char date[]="Apple";
	int i;
	printf("ˆê•¶Žš‚¸‚Â•\Ž¦\n");
	i = 0;
	for (i = 0; date[i] != '\0'; i++)
	{
		printf("%c", date[i]);
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &date[0]);
}
