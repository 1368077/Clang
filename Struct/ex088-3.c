#include<stdio.h>
#include<string.h>
typedef struct {
	char neme[20];
	int tanka;
}商品データ;
typedef int 整数;
main() {
	整数 a = 10;
	printf("a=%d\n", a);
	商品データ syohin1, syohin2;
	strcpy(syohin1.neme, "エンピツ(^-^#))//");
	syohin1.tanka = 30;
	strcpy(syohin2.neme, "エンピツ2(^-^#))//");
	syohin2.tanka = 30;
	printf("syohin1.neme=%s\n", syohin1.neme);
	printf("syohin1.tanka=%d\n", syohin1.tanka);
	printf("syohin2.neme=%s\n", syohin2.neme);
	printf("syohin2.tanka=%d\n", syohin2.tanka);
}