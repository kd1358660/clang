#include<stdio.h>
main()
{
	char moji1[101], moji2[101], w[101];
	int i;
	i = 0;
	printf("文字列１を入力：");
	scanf("%s", moji1);

	printf("文字列2を入力：");
	scanf("%s", moji2);

	printf("moji1=%s \t moji2=%s\n", &moji1[0], &moji2[0]);
	printf("\n入れ替えると\n");
	for (i = 0; moji1[i] != '\0'; i++)
	{
		w[i] = moji1[i];
	}
	w[i] = '\0';
	for (i = 0; moji2[i] != '\0'; i++)
	{
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
	for (i = 0; w[i] != '\0'; i++)
	{
		moji2[i] = w[i];
	}
	moji2[i] = '\0';
	printf("moji1=%s \t moji2=%s\n", &moji1[0], &moji2[0]);
}