#include<stdio.h>
main()
{
	int i;
	float gokei,a[3];
	gokei = 0;
	for (i = 0; i < 3; i++) 
	{
		printf("���������\n");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("���v��%.2F�ł�\n", gokei);
	printf("���ς�%.2f�ł�\n", gokei / 3);
	printf("�ŏ��̐�%.2f", a[0]);
}