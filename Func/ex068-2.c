#include<stdio.h>
main()
{
	char dummy[256];
	char* cp;
	printf("•¶Žš—ñ‚ð“ü—Í>");
	cp = gets(dummy);

	while (cp!=NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", cp);
		printf("•¶Žš—ñ“ü—Í>");
		cp = gets(dummy);
	}
}