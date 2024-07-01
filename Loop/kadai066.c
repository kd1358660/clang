#include<stdio.h>
main()
{
	int kazu=0, i=0;
	do 
	{
		i++;
			printf("%d+", i);
			kazu += i;
	} while (kazu <= 300);
	printf("\b=%d", kazu);
}