#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int g;

	srand(time(0));
	g = rand() % (100 - 1) + 1;
	if (g >= 50) {
		printf("šƒm[ƒ}ƒ‹\n");
	}
	else {
		if (g >= 20) {
			printf("ššƒŒƒA\n");
		}
		else {
			if (g >= 6) {
				printf("šššSR\n");
			}
			else {
				if (g >= 2) {
					printf("ššššUR\n");
				}
				else {
					printf("šššššLR\n");
				}
			}
		}
	}
   

	
}