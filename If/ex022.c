#include<stdio.h>
main()
{
	int year;
	printf("西暦を入力する:");
	scanf("%d", &year);
		if (year <= 1988) {
			printf("昭和です\n");
		}
		else {
			printf("平成です\n");
		}
}