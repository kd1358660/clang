#include<stdio.h>
main()
{
	char a[100];
	int i;
	printf("������́H");
	scanf("%s", &a[0]);
	i = 0;
	for (i = 0; a[i] != '\0'; i++);
		printf("������:%s�@�@������:%d����\n", a, i);
}