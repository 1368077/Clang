#include<stdio.h>
main()
{
	int a, b,w;
	a = 5;
	b = 3;
	printf("����ւ��Oa=%d\tb=%d\n", a, b);
	w = a;
	a = b;
	b = w;
	printf("����ւ���a=%d\tb=%d\n", a, b);
}