#include<stdio.h>
main()
{
	char * p = "peach";
	char data1[10] = "banana", * p_data;
	char data2[20], * p_data2;
	
	p_data = data1;
	p_data2 = data2;
	while (*p_data2++ = *p_data++);
	p_data = data1;
	while (*p_data++= *p++);
	printf("data[]=%s\n", data1);
	printf("data2[]=%s\n", data2);

}