#include<stdio.h>
void maxmin(int d1, int d2, int d3, int *max, int *min);
main()
{
	int d1, d2, d3, max, min;
	printf("整数を３つ入力");
	scanf("%d%d%d", &d1, &d2, &d3);
	maxmin(d1, d2, d3, &max, &min);
	printf("最大値 %d 最小値 %d", max, min);
}
void maxmin(int d1, int d2, int d3, int* max, int* min)
{
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
	//if (d1 > d2 && d2 > d3) { *max = d1; *min = d3; }
	//if (d2 > d1 && d1 > d3) { *max = d2; *min = d3; }
	//if (d2 > d1 && d3 > d1) { *max = d2; *min = d1; }
	//if (d1 > d2 && d3 > d2) { *max = d1; *min = d2; }
	//if (d3 > d2 && d2 > d1) { *max = d3; *min = d1; }
	//if (d3 > d1 && d1 > d2) { *max = d3; *min = d2; }
}