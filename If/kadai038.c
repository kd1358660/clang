#include<stdio.h>
main()
{
	char n;
	printf("1��������");
	scanf("%c", &n);
	if (n >= 'a' && n <= 'z')
	{
		printf("�ϊ�����%c", n-0x20);
	}
	if(n >= 'A' && n <= 'Z')
	{
		printf("�ϊ�����%c", n+0x20);
	}
}