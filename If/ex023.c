#include<stdio.h>
main()
{
	int h,m,s;
	printf("®”‚ğ“ü—Í:");
	scanf("%d", &s);

	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf(" %d ŠÔ %d •ª %d •b‚Å‚·\n",h, m,s);
	}
	else {
		printf("ƒGƒ‰[“ü—Í‚Í5000‚Ü‚Å‚É‚µ‚ë‚âI\n");
	}
}   