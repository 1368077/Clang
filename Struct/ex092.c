#include<stdio.h>
struct syohin_data
{
	char neme[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"�G���s�c�D�I",30,5},
								  {"�P�V�S���D�I",50,2},
								  {"�t�f�o�R�D�I",500,3} };
	int i;
	for (i = 0; i < 3; i++) {
		printf("���i���F%s\t", syohin[i].neme);
		printf("�P�@���F%4d\t", syohin[i].tanka);
		printf("�@���F%4d\n", syohin[i].kosuu);
	}
	

	
}