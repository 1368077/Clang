#include <stdio.h>
main()
{
	int y;
	printf("西暦を入力:");
	scanf("%d", &y);
	if (y % 400 == 0) {
		printf("うるう年です\n");
	}
	else {
		if (y % 4 == 0) {
			if (y % 100 != 0) {
				printf("うるう年です\n");
			}
			else {
				printf("うるう年ではない\n");
			}
		}
		else {
			printf("うるう年ではない\n");
		}
	}
}