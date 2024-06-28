#include<stdio.h>
main()
{
	int num, sum, cnt;

	sum = cnt = 0;
	printf("®”F");
	while (scanf("%d",&num)!=EOF)
	{
		sum += num;
		cnt++;
		printf("®”F");
	}
	printf("‡Œv=%d •½‹Ï=%.2f\n", (float)sum / cnt);
}