#include<stdio.h>
main()
{
	int i, ne, cnt;
	for (i = 0; i <3; i++) {
		for (ne = 0; ne<20; ne++){
			cnt++;
			printf("%2d ", cnt);
			}
		printf("\n");
		}
}