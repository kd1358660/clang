#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット小文字？");
	scanf("%c", &moji);
	for (; moji <= 'z'; moji + 0x1)
	{
		printf("%c ", moji);
	}
}