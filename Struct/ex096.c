#include<stdio.h>
struct syouhin_data
{
	char name[20];
	int tanka;
};
//void display1(int a);
void display2(struct syouhin_data *syouhin);
main()
{
	//int a = 10;
	struct syouhin_data syouhin = { "�P�V�S��",50 };
	//display1(a);
	display2(&syouhin);
}

//void display1(int a)
//{
//	printf("a=%d\n", a);
//}

void display2(struct syouhin_data *syouhin )
{
	printf("%s %d\n",
		//->�͍\���̂ŃA�h���X�𔲂��o���������Ɏg��
		//->���g�킸�h�b�g���g�����ꍇ�͒ʂ�Ȃ�
		syouhin->name, syouhin->tanka);
}