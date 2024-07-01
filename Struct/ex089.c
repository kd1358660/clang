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
	printf("–¼‘O‚ğ“ü—ÍF");
	scanf("%s", &adres.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d", &adres.birth[0],&adres.birth[1],&adres.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—ÍF");
	scanf("%s", &adres.blood);

	printf("%s--", adres.name);
	printf("%d”N%dŒ%d“ú¶‚Ü‚ê", adres.birth[0], adres.birth[1], adres.birth[2]);
	printf("ŒŒ‰tŒ^[%sŒ^\n", adres.blood);
}