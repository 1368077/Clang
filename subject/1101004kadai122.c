#include<stdio.h>
main()
{
	int a = 5, b = 30, wrk, * p_a = &a, * p_b = &b, * p_wrk = &wrk;
	puts("���s�O");
	printf("a=%d\tb=%d\n", *p_a, *p_b);

	wrk = *p_a;
	*p_a = *p_b;
	*p_b = wrk;
	puts("���s��");
	printf("a=%d\tb=%d\n", *p_a, *p_b);
}