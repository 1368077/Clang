#include<stdio.h>
main()
{
	char c;
	char* c_p;
	printf("１文字入力してください:");
	scanf("%c", &c);
	c_p = &c;
	char nextchar = *c_p + 1;
	printf("その次の文字は：%c", nextchar);

}