#include<stdio.h>
#include<stglib.h>
#include<time.h>
main()
{
	int player, cpu;
	srand(time(0));
	printf("何を出しますか？\n(１：グー　２：チョキ　３：パー)>");
	scanf("%d", &player);
	player--;
	if(player=0)printf("プレイヤーはグーです")
}
