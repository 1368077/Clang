#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("é¿çsëO:a=%d\tb=%d\n",a,b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;

	
	printf("é¿çså„:a=%d\tb=%d\n", a, b);
}