#include<stdio.h>
main()
{
	int a = 50, b = 10, c,*p_a, * p_b;
	p_a = &a;
	p_b = &b;
	c = *p_a + *p_b;
	printf("%d\n", c);
	printf("&a=%d &b=%d &c=%d",&a,&b,&c);
	printf("p_a=%d p_b=%d\n", p_a, p_b);
}