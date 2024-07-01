#include<stdio.h>
main()
{
	int a = 100, * p_a;
	p_a = &a;
	printf("a=%d &a=%d", a, &a);
	printf("p_a=%d &p_a=%d *p_a=%d", p_a, &p_a,*p_a);
}