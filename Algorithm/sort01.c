#include<stdio.h>
main()
{
	//変数用意
	int  i, j, w, d[5] = {30,5,29,17,11};

	//入れ替え処理
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if(d[i]< d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	//表示処理
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}