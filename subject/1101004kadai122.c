#include<stdio.h>
main()
{
	int a = 5, b = 30, wrk, * p_a = &a, * p_b = &b, * p_wrk = &wrk;
	puts("実行前");
	printf("a=%d\tb=%d\n", *p_a, *p_b);

	wrk = *p_a;
	*p_a = *p_b;
	*p_b = wrk;
	puts("実行後");
	printf("a=%d\tb=%d\n", *p_a, *p_b);
}