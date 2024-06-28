#include<stdio.h>
struct syohin_data
{
	char neme[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツゥ(^-^#)！",30,5},
								  {"ケシゴムゥ(^-^#)！",50,2},
								  {"フデバコゥ(^-^#)！",500,3} };
	struct syohin_data* p = syohin;
	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("商品名：%s\t", p->neme);
		printf("単　価：%4d\t", p->tanka);
		printf("個　数：%4d\t", p->kosuu);
		printf("金額：￥%4d\n", p->tanka * p->kosuu);
	}



}