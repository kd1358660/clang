#include<stdio.h>
main()
{
	int i, j, w, d[5] = { 37,19,24,11,2 };
	for (i = 4; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}