#include<stdio.h>
main()
{
	long i;
	printf("整数は？");
	scanf("%ld", &i);
	printf("２倍すると%ld\n", i * 2);
	printf("3倍すると%ld\n", i * 3);
	printf("4倍すると%ld", i * 4);
}