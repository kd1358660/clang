#include<stdio.h>
main()
{
	char a[100];
	int i;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &a[0]);
	i = 0;
	for (i = 0; a[i] != '\0'; i++);
		printf("•¶š—ñ:%s@@•¶š”:%d•¶š\n", a, i);
}