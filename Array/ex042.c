#include<stdio.h>
main()
{
	char date[]="Apple";
	int i;
	printf("一文字ずつ表示\n");
	i = 0;
	for (i = 0; date[i] != '\0'; i++)
	{
		printf("%c", date[i]);
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &date[0]);
}
