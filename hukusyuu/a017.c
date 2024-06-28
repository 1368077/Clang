#include<stdio.h>
main()
{
	float f1, f2, f3;
	
	printf("1‚Â–Ú‚ÌÀ”:");
	scanf("%f", &f1);

	printf("2‚Â–Ú‚ÌÀ”:");
	scanf("%f", &f2);

	printf("3‚Â–Ú‚ÌÀ”:");
	scanf("%f", &f3);

	printf("‡Œv‚Í%.2f•½‹Ï‚Í%.2f\n", f1 + f2 + f3, (f1 + f2 + f3) / 3);
}