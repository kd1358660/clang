#include<stdio.h>
main()
{
	int w, a = 100, b = 200, * p_a, * p_b;
	printf("é¿çsëOÅFa=%d b=%d", a, b);
	p_a = &a, p_b = &b;
	w = *p_a, * p_a = *p_b, * p_b = w;
	printf("%d %d", a, b);
}