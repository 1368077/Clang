#include<stdio.h>
main()
{
	int tb[][3] =
	{ {10,20,30},
	  {40,50,60},
	  {70,80,90} };
	int* p_tbl, i, j;
	p_tbl = tb[1];
	printf("2次元配列tblの内容\n");
		for (i= 0; i< 3; i++) {
			printf("%d\t", *p_tbl++);
		}
		
}