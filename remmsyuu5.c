#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,s, i, date[100];
	srand(time(0));
	rand();
	printf("’Tõ’l‚ÍH");
	scanf("%d", &s);
	for (i = 0 ; i < 100; i++)
	{
		date[i] = rand() % 200+1;
	}
	for (i = 0; i < 100; i++)
	{
		if (s == date[i])break;
		{

		}
	}
	if (i >= 100)
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	else
	{
		printf("%d”Ô–Ú‚É‚ ‚Á‚½\n", i);
	}
}