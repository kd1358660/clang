#include<stdio.h>
main()
{
	int i, go, kaz;
	go = 0;
	printf("���́H");
	scanf("%d ", &kaz);
	for (i=0; kaz != -999; i++)
	{
		go = kaz+go;
		printf("���́H");
		scanf("%d ", &kaz);
	}
	printf("���v=%d", go);
	printf("����=%.2f",(float) go / i);

}