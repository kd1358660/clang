#include<stdio.h>
main()
{
	//�ϐ��p��
	int  i, j, w, d[5] = {30,5,29,17,11};

	//����ւ�����
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

	//�\������
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}