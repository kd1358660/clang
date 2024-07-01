#include<stdio.h>
void hyouji(char moji, int n,int i);
main()
{
	int n,i;
	char moji;
	printf("文字？：");
	scanf("%c", &moji);
	printf("整数？：");
	scanf("%d", &n);
	hyouji(moji, n,i);
}
void hyouji(char moji, int n,int i)
{
	printf("%c\n%d\n", moji, n);
	for (i = 0; i < n; i++)
	{
		printf("%c", moji);
	}

}


