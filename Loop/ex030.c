#include<stdio.h>
main()
{
	int num, i;
	i = 0;
	printf("数をいれて");
	scanf("%d", &num);
	while (i < 11) {
		printf("%d+%d=%d\n", num, i, num + i);
		i++;
	}

}