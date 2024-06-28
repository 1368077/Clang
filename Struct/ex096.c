#include<stdio.h>
struct syohin_data {
	char neme[20];
	int tanka;
};
void display3(struct syohin_data *sp);

main()
{
	
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };
	display3(&syohin);
}
void display3(struct syohin_data *sp)
{
	printf("%s\t%d", sp->neme, sp->tanka);
}

