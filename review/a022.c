#include<stdio.h>
main()
{
	int y;

	y = 1918;
	
	printf("¼—ï“ü—Í:");
	scanf("%d", &y);
	if (y >= 1989) {
		printf("•½¬¶‚Ü‚ê‚Å‚·\n");
	}
	else {
		printf("•½¬‚æ‚è‘O‚É¶‚Ü‚ê‚Ä‚¢‚Ü‚·\n");
	}
}