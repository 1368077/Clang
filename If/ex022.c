#include<stdio.h>
main()
{
	int y;
	printf("西暦入力:");
	scanf("%d",&y);
	if (y > 1989) {
		printf("平成生まれ\n");
	}
	else {
		printf("平成より前\n");
	}
}