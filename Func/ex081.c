#include<stdio.h>
int Get_Max(int* array, int size);
int Get_min(int* array, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l%d\n", Get_Max(data, 8));
	printf("Å¬’l%d\n", Get_min(data, 8));
}
int Get_Max(int* array, int size)
{
	int i, Max;
	for (Max = *array, i = 1; i < size; i++) {
		if (Max < *(array + i)) {
			Max = *(array + i);
		}
	}
	return(Max);
}
int Get_min(int* array, int size) {
	int i, Min;
	for (Min = *array, i = 1; i < size; i++)
	{
		if (Min > *(array + i)) {
			Min = *(array + i);
		}
	}
	return(Min);
}


