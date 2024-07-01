#include<stdio.h>
main()
{
	//•Ï”—pˆÓ
	int  i, j, w, d[5] = {30,5,29,17,11};

	//“ü‚ê‘Ö‚¦ˆ—
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

	//•\¦ˆ—
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}