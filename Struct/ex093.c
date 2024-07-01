#include<stdio.h>
struct syouhin_data
{
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syouhin_data syouhin[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syouhin_data* p;
	int kingaku;
	
	p = syouhin;
	
	int i;
	for (i = 0; i < 3; i++)
	{
		kingaku = p->tanka * p->kosuu;
		printf("商品名：%s\t",p->name);
		printf("単価：%4d\t", p->tanka);
		printf("個数：%4d\n", p->kosuu);
		printf("金額：%5d\n", kingaku);
		p++;
	}
}