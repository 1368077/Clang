#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int nu,i;
	srand(time(0));
	nu = rand() % (5 - 1+1)+1;
	printf("¡“ú‚Ì‹M—l‚Ì‰^¨‚Í");
	for (i = 0; i < nu;i++) {
		printf("š");
	}
	printf("‚Å‚·B\n");
}