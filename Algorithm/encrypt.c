#include<stdio.h>
main()
{
	char d[50];
	int i;
	printf("���͂��Ă�������");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0', d[i]++; i++);
	printf("�Í��������� %s", &d[0]);

}