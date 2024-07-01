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
	struct profile adres[5];
	struct profile* p;
	p = adres;
	for (int i = 0; i < 5; i++)
	{
		printf("%d人目　名前を入力：",i+1);
		scanf("%s", p->name);
		printf("%d人目　生年月日を空白で区切って入力：",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d人目　血液型を入力：",i+1);
		scanf("%s", p->blood);
		p++;
	}
	p = adres;
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--", p->name);
			printf("%d年%d月%d日生まれ", p->birth[0], p->birth[1], p->birth[2]);
			printf("血液型ー%s型\n", p->blood);
		}
		p++;
	}
}