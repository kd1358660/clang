#include<stdio.h>
main()
{
	int i,s, d[11] = { 32,4,1,66,40,27,95,51,18,73 };
	printf("�T���l�����\n");
	scanf("%d", &s);
	for (d[10] = s ,i = 0; s != d[i]; i++);
	if (i == 10)
	{
		printf("������Ȃ�����\n");
	}
	else {
		printf("%d�Ԗڂɂ���܂���\n", i);
	}
}