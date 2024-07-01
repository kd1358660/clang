#include<stdio.h>
main()
{
	int s,i, date[] = { 30,57,2,58,35,24,96,13,1,75 };

	printf("’Tõ’l‚ÍH");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == date[i])break; 
		{

		}
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	else
	{
		printf("%d”Ô–Ú‚É‚ ‚Á‚½\n", i);
	}
}