#include<stdio.h>
struct syohin_data
{
	char neme[20];
	int tanka;
};
main()
{
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;
	printf("¤•i–¼");
	scanf("%s", p->neme);
	p->tanka = 30;
	printf("p->neme=%s\n", p->neme);
	printf("p->tanka=%d\n", p->tanka);
	printf("syohin.neme=%s\n", syohin.neme);
	printf("syohin.tanka=%d\n", syohin.tanka);
	
}