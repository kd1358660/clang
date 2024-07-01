#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num=0, cnt=0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("‚P`‚P‚O‚O‚O‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	for (; ans != num; cnt++)
	{
		printf("“–‚½‚è‚Ì”‚ÍH");
		scanf("%d", & num);
		if (ans > num)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (ans < num)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
	}
	printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½", cnt);
}