#include<stdio.h>
main()
{
	char date[]="Apple";
	int i;
	printf("�ꕶ�����\��\n");
	i = 0;
	for (i = 0; date[i] != '\0'; i++)
	{
		printf("%c", date[i]);
	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &date[0]);
}
