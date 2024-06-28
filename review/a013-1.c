#include<stdio.h>
main()
{
	char su1, su2;

	su1 = '5';
	su2 = '6';

	printf("%c*%c=%d\n", su1, su2, (su1 - '0') * (su2 - '0'));
}