#include<stdio.h>
main()
{
	char d[50];
	int i;
	printf("���͂��Ă�������");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0' ; i++)
	{	
		d[i]--;
	}
	printf("��Ǖ���%s", &d[0]);

}