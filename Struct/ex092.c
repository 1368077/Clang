#include<stdio.h>
struct syohin_data
{
	char neme[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツゥ！",30,5},
								  {"ケシゴムゥ！",50,2},
								  {"フデバコゥ！",500,3} };
	int i;
	for (i = 0; i < 3; i++) {
		printf("商品名：%s\t", syohin[i].neme);
		printf("単　価：%4d\t", syohin[i].tanka);
		printf("個　数：%4d\n", syohin[i].kosuu);
	}
	

	
}