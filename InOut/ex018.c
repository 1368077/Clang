#include <stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;

	printf("整数を３個入力:");
	scanf(" %d%d%d", &d1, &d2, &d3);

	sum = d1 + d2 + d3;
	avg = (float)sum / 3;
	printf("合計=%d\t平均=%.2f\n", sum, avg);
	printf("神戸電子=%d\t平均=%2f\n", sum, avg);
}