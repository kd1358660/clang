#include<stdio.h>
struct syouhin_data
{
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syouhin_data syouhin[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syouhin_data* p;
	int kingaku;
	
	p = syouhin;
	
	int i;
	for (i = 0; i < 3; i++)
	{
		kingaku = p->tanka * p->kosuu;
		printf("���i���F%s\t",p->name);
		printf("�P���F%4d\t", p->tanka);
		printf("���F%4d\n", p->kosuu);
		printf("���z�F%5d\n", kingaku);
		p++;
	}
}