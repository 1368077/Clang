#include<stdio.h>
main()
{
	char flg;
	int d1, d2, d3;

	printf("処理の入力：");
	scanf("%c", &flg);

	printf("整数を入力：");
	scanf("%d%d%d", &d1, &d2, &d3);

	switch (flg) {
	case'd':
	case'D':
		if (d1 > d2) {
			if (d1 > d3) {
				printf("最大値は%dです\n", d1);
			}
			else {
				printf("最大値は%dです\n", d3);
			}
		}
		else {
			if (d2 > d3) {
				printf("最大値は%dです\n", d2);
			}
			else {
				printf("最大値は%dです\n", d3);
			}
		}
		break;
	case's':
	case'S':
		if (d1 < d2) {
			if (d1 < d3) {
				printf("最小値は%dです\n", d1);
			}
			else {
				printf("最小値は%dです\n", d3);
			}
		}
		else {
			if (d2 < d3) {
				printf("最小値は%dです\n", d2);
			}
			else {
				printf("最小値は%dです\n", d3);
			}
		}
		break;
	case'g':
	case'G':
		printf("合計は%dです\n", d1 + d2 + d3);
		break;
	case'h':
	case'H':
		printf("平均は%.2fです\n", (float)(d1 + d2 + d3) / 3);
		break;
	default:
		printf("処理エラー：(d:最大値 s:最小値 g:合計 h:平均)\n");
	}
}