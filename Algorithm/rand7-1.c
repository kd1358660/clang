#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num=0, cnt=0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("�P�`�P�O�O�O�̒��œ�����̐���\�z���Ă�������\n");
	for (; ans != num; cnt++)
	{
		printf("������̐��́H");
		scanf("%d", & num);
		if (ans > num)
		{
			printf("������̐���菬�����ł�\n");
		}
		if (ans < num)
		{
			printf("������̐����傫���ł�\n");
		}
	}
	printf("�����I%d��ڂœ�����܂���", cnt);
}