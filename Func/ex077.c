#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, int* p_min);
main() {
	int a, b, c;
	int max,min;
	printf("����3���́F");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max , &min);
	printf("�ő�l��%d\t�ŏ��l��%d\n", max, min);


}
void maxmin(int a, int b, int c, int* p_max, int* p_min)
{
	*p_max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	*p_min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}