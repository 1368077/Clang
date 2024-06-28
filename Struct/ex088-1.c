#include<stdio.h>
#include<string.h>
struct syohin_data {
	char neme[20];
	int tanka;
};
main() {
	struct syohin_data syohin1, syohin2 = {"ボールペン（^-^#）",100};
	strcpy(syohin1.neme, "エンピツ(^-^#))//");
	syohin1.tanka = 30;
	printf("syohin1.neme=%s\n", syohin1.neme);
	printf("syohin1.tanka=%d\n", syohin1.tanka);
	printf("syohin2.neme=%s\n", syohin2.neme);
	printf("syohin2.tanka=%d\n", syohin2.tanka);
}