#include<stdio.h>
main()
{
	int i, go, kaz;
	go = 0;
	printf("”‚ÍH");
	scanf("%d ", &kaz);
	for (i=0; kaz != -999; i++)
	{
		go = kaz+go;
		printf("”‚ÍH");
		scanf("%d ", &kaz);
	}
	printf("‡Œv=%d", go);
	printf("•½‹Ï=%.2f",(float) go / i);

}