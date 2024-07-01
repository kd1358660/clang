#include<stdio.h>
main()
{
	int ia, ib;
	printf("®”‚PH");
	scanf("%d", &ia);
	printf("®”2H");
	scanf("%d", &ib);
	if (ia > ib)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢", ia, ib, ia - ib);
	}
	else
	if (ia < ib)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", ia, ib,ib - ia);
	}
	else
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢",ia,ib);
	}
}