#include<stdio.h>
void hyouji(char moji, int n,int i);
main()
{
	int n,i;
	char moji;
	printf("�����H�F");
	scanf("%c", &moji);
	printf("�����H�F");
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


