#include<stdio.h>
main()
{
	char data[15] = "Languge";
	char* p_data, ch;
	int i;

	printf("data[]=%s\n", data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (ch == *(p_data + i)) {
			printf("%d", i + 1);
		}
		
	}
	printf("‚Å‚·\n");
}