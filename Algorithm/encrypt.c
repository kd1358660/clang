#include<stdio.h>
main()
{
	char d[50];
	int i;
	printf("入力してください");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0', d[i]++; i++);
	printf("暗号化文字列 %s", &d[0]);

}