#include<stdio.h>
main()
{
	int n1, n2, n3, n4;
	printf("�������R����;");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	printf("���v��%d�ł�\n", n1 + n2 + n3);
	n4 = n1 + n2 + n3;
	//printf("���ς�%.2f�ł�\n", n4 / 3.00);
    printf("���ς�%.2f�ł�\n",(float) n4/ 3);
}