#include<stdio.h>
main()
{
	char c;
	char* c_p;
	printf("�P�������͂��Ă�������:");
	scanf("%c", &c);
	c_p = &c;
	char nextchar = *c_p + 1;
	printf("���̎��̕����́F%c", nextchar);

}