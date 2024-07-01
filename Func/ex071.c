#include<stdio.h>
int goukei(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b,c, kotae1;
	float kotae2;
	printf("®”‚ğ‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	kotae1 = goukei(a,b,c);
	kotae2 = heikin(a, b, c);
	printf("‡Œv%d •½‹Ï%.2f\n", kotae1, kotae2);
}
int goukei(int a, int b, int c)
{
	return a + b + c;
}
float heikin(int a, int b, int c)
{
	return (float)(a+b+c) / 3;
}