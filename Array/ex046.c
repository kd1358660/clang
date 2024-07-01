#include<stdio.h>
main()
{
	int i, gokei,ne;
	int a[][3] = { {10,20,30},{1,2,3,} };
	for (ne = 0; ne < 2; ne++)
	{
		for (gokei = 0, i = 0; i <= 2; i++)
		{
			printf("a[%d][%d]=%d\n", ne, i, a[ne][i]);
			gokei += a[ne][i];

		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", ne, gokei);
	}
}