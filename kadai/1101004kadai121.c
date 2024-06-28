#include<stdio.h>
main() {
	int num1, num2;
	num1 = 100;
	num2 = 10;
	int* p_num1, * p_num2;
	p_num1 = &num1;
	p_num2 = &num2;
	printf("%d+%d=%d\n", *p_num1, *p_num2, *p_num1 + *p_num2);
	printf("%d-%d=%d\n", *p_num1, *p_num2, *p_num1 - *p_num2);
	printf("%d*%d=%d\n", *p_num1, *p_num2, *p_num1 * *p_num2);
	printf("%d/%d=%d\n", *p_num1, *p_num2, *p_num1 / *p_num2);
}