#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile adres;
	printf("名前を入力：");
	scanf("%s", &adres.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &adres.birth[0],&adres.birth[1],&adres.birth[2]);
	printf("血液型を入力：");
	scanf("%s", &adres.blood);

	printf("%s--", adres.name);
	printf("%d年%d月%d日生まれ", adres.birth[0], adres.birth[1], adres.birth[2]);
	printf("血液型ー%s型\n", adres.blood);
}