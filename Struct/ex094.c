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
		printf("%d�l�ځ@���O����́F",i+1);
		scanf("%s", p->name);
		printf("%d�l�ځ@���N�������󔒂ŋ�؂��ē��́F",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�l�ځ@���t�^����́F",i+1);
		scanf("%s", p->blood);
		p++;
	}
	p = adres;
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--", p->name);
			printf("%d�N%d��%d�����܂�", p->birth[0], p->birth[1], p->birth[2]);
			printf("���t�^�[%s�^\n", p->blood);
		}
		p++;
	}
}