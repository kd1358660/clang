#include<stdio.h>
main()
{
	char d[50];
	int i;
	printf("入力してください");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0' ; i++)
	{	
		d[i]--;
	}
	printf("解読文字%s", &d[0]);

}