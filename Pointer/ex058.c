#include<stdio.h>
main()
{
	int a[3], * p;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p�E�E�E%d\n", *p);//10
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+1�E�E�E%d\n", *p + 1);//11
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*(p+1)�E�E�E%d\n", *(p + 1));//20
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+=1�E�E�E%d\n", *p+=1);//11
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p++�E�E�E%d\n", *p++);//10
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("(*p)++�E�E�E%d\n", (*p)++);//10
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*++p�E�E�E%d\n", *++p);//20
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("++*p�E�E�E%d\n", ++*p);//11
	p=a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("%d\n",p[2]); 
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("%d\n", *(a + 1));
}