#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;

	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	i = 0;
	while(data[i] != '\0') {
		printf("%c", data[1]);
		i = i + 1;
	}

	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &data[0]);
}