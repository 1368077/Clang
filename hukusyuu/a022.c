#include<stdio.h>
main()
{
	int y;

	y = 1918;
	
	printf("西暦入力:");
	scanf("%d", &y);
	if (y >= 1989) {
		printf("平成生まれです\n");
	}
	else {
		printf("平成より前に生まれています\n");
	}
}