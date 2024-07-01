#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, tar, work, date[20];
	srand(time(0));
	rand();
	for (i = 0; i < 20; i++)
	{
		date[i] = i + 1;
	}
	for (i = 0; i < 20; i++)
	{
		tar = rand() % 20;
		work = date[i];
		date[i] = date[tar];
		date[tar] = work;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d  ", date[i]);
	}
}