#include<stdio.h>
main()
{
	int a, b,w;
	a = 5;
	b = 3;
	printf("入れ替え前a=%d\tb=%d\n", a, b);
	w = a;
	a = b;
	b = w;
	printf("入れ替え後a=%d\tb=%d\n", a, b);
}