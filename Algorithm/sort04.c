//シェルソート（改良型挿入法）による昇順ソート
#include<stdio.h>
//データ数を定義
#define DCNT  8

main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j;
	int w;
	int gap;

	//シェルソート
	gap = DCNT / 2;
	while (gap>0)
	{
		for (i = gap; i < DCNT; i++) {
			for (j=i-gap;j>=0;i++)
			{
				int k;
				for (k = 0; k < DCNT; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");
				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
			}
		}
		gap = gap / 2;
		printf("--------------------------------\n");
	}
	for (i = 0; i < DCNT; i++) {
		printf("%d ", d[i]);
	}

}
