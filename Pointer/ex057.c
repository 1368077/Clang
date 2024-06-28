#include<stdio.h>
main()
{
	int tb[][3] =
	{ {10,20,30},
	  {40,50,60},
	  {70,80,90} };
	int* p_tbl, i, j;
	p_tbl = tb[0];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (i = 0; i <3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", *p_tbl++);
		}
		printf("\n");
	}
}