#include<stdio.h>
main()
{
	int i, go, kaz;
	go = 0;
	printf("数は？");
	scanf("%d ", &kaz);
	for (i=0; kaz != -999; i++)
	{
		go = kaz+go;
		printf("数は？");
		scanf("%d ", &kaz);
	}
	printf("合計=%d", go);
	printf("平均=%.2f",(float) go / i);

}