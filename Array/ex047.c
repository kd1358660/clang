#include<stdio.h>
main()
{
	float x[3][2], heik;
	int i, j;
	for (j = 0; j < 3; j++) {
		for (heik = 0, i = 0; i < 2; i++)
		{
			printf("x[%d][%d]=",j, i);
			scanf("%f", &x[j][i]);
			heik += x[j][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n",j, heik / 2);
	}
}