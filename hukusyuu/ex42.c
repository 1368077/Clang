#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;

	printf("1�������\��\n");
	i = 0;
	while(data[i] != '\0') {
		printf("%c", data[1]);
		i = i + 1;
	}

	printf("\n������ŕ\��\n");
	printf("%s\n", &data[0]);
}