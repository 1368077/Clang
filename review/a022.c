#include<stdio.h>
main()
{
	int y;

	y = 1918;
	
	printf("�������:");
	scanf("%d", &y);
	if (y >= 1989) {
		printf("�������܂�ł�\n");
	}
	else {
		printf("�������O�ɐ��܂�Ă��܂�\n");
	}
}