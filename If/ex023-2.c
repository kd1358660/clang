#include<stdio.h>
main()
{
	int n,n1,n2,n3;
	printf("��������");
	scanf("%d", &n);
	n1 = n % 400;
	n2 = n % 4;
	n3 = n % 100;
	if ((n1 == 0)||(n2 == 0 && n3 != 0)) {
		printf("���邤�N�ł�");
	}
	else {
		printf("����N�ł͂���܂���");
	}
}