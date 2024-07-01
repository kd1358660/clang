#include<stdio.h>
#include<string.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	
	struct profile adres[5] = {{ "アーサー",{2000,4,5},"A" },
								{ "うん",{2022,1,6},"A" },
								{ "まる",{2003,2,11},"A" },
								{ "かほ",{2002,5,22},"A" },
								{ "るしふぁー",{2005,6,6},"A" }
	};
	struct profile* p;
	p = adres;
	for (int i = 0; i < 5; i++)
	{
		if (p->birth.tuki==2)
		{
			printf("%s--", p->name);
			printf("%d年%d月%d日生まれ",p->birth.nen ,p->birth.tuki,p->birth.hi  );
			printf("血液型ー%s型\n", p->blood);
		}
		p++;
	}
}