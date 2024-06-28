#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;
	p_a = &a;
	b = *p_a;

	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}