#include<stdio.h>
main()
{
	int i,flg=0;
	char data[15] = "Language", * p_data, c;
	printf("data[]= %s\n", data);
	printf("検索文字は");
	scanf("%c", &c);

	printf("検索結果は、");
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
		printf("文字目です\n");
	}
	else
	{
		printf("見つかりませんでした\n");
	}
}