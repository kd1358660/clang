#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (; moji <= 'z'; moji + 0x1)
	{
		printf("%c ", moji);
	}
}