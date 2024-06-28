#include<stdio.h>
main()
{
	int a = 50, b = 10, c;
	int *p_a, *p_b;

	p_a = &a;
	p_b = &b;

	c = *p_a + *p_b;
	printf("%d+%d=%d\n", a, b, c);
}