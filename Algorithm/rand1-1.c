#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,a,b,c;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		a = rand() % 100;
		b = rand() % 41;
		c = rand()%(200+100 + 1)-100;
		printf("a=%d,b=%d,c=%d\n", a, b,  c);
	}
	
}