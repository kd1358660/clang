#include<stdio.h>
main()
{
	char m,j;
	m = 'A';
	for (m = 'A'; m <= 'Z'; m +0x1)
	{
		printf("%c", m);
		m += 0x1;
	}
}