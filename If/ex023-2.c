#include<stdio.h>
main()
{
	int n,n1,n2,n3;
	printf("西暦を入力");
	scanf("%d", &n);
	n1 = n % 400;
	n2 = n % 4;
	n3 = n % 100;
	if ((n1 == 0)||(n2 == 0 && n3 != 0)) {
		printf("うるう年です");
	}
	else {
		printf("うる年ではありません");
	}
}