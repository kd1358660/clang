#include<stdio.h>
main()
{
	double ia, ib;
	printf("２つの実数は？");
	scanf("%lf%lf", &ia, &ib);
	if (ia > ib)
	{
		printf("大きい方は＝%lf",ia);
	}
	else
	{
		printf("大きい方は＝%lf", ib);
	}
}