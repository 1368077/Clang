#include<stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstaion4" };
	int i;
	char** p;
	p = p_game;
	for (i = 0; i < 3; i++) {
		p = &p_game[i];
		while (**p)
		{
			printf("%c", **p);
			(*p)++;
		}
		printf("\n");
	}
}