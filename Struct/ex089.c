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
	printf("���O����́F");
	scanf("%s", &adres.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &adres.birth[0],&adres.birth[1],&adres.birth[2]);
	printf("���t�^����́F");
	scanf("%s", &adres.blood);

	printf("%s--", adres.name);
	printf("%d�N%d��%d�����܂�", adres.birth[0], adres.birth[1], adres.birth[2]);
	printf("���t�^�[%s�^\n", adres.blood);
}