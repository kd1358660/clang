#include<stdio.h>
main()
{
	int i,flg=0;
	char data[15] = "Language", * p_data, c;
	printf("data[]= %s\n", data);
	printf("����������");
	scanf("%c", &c);

	printf("�������ʂ́A");
	for (p_data = data, i = 0; *(p_data + i)!='\0'; i++)
	{
			if (c == *(p_data + i))
			{
				printf(" %d ", i + 1);
				flg = 1;
			}
			
	}
	if (flg == 1)
	{
		printf("�����ڂł�\n");
	}
	else
	{
		printf("������܂���ł���\n");
	}
}