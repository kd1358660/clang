#include<stdio.h>
main()
{
	char a[100];
	int i;
	printf("文字列は？");
	scanf("%s", &a[0]);
	i = 0;
	for (i = 0; a[i] != '\0'; i++);
		printf("文字列:%s　　文字数:%d文字\n", a, i);
}