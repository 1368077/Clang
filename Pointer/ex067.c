#include<stdio.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" }, * w;
	char** p;
	int i, j;
	for (p =p_tbl,i=0; i < CNT - 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (strcmp(*(p_tbl+i), *(p_tbl+j)) < 0) {
				w =*( p_tbl+i);
				*(p_tbl+i) = *(p_tbl+j);
				*(p_tbl+j) = w;
			}
		}
	}
	for (p = p_tbl, i=0; i < CNT; i++) {
		printf("%s\n",*( p_tbl+i));
	}
}