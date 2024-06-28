#include<stdio.h>
main()
{
	char c;
	char* c_p;
	printf("‚P•¶š“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%c", &c);
	c_p = &c;
	char nextchar = *c_p + 1;
	printf("‚»‚ÌŸ‚Ì•¶š‚ÍF%c", nextchar);

}