#include<stdio.h>
main()
{
	char  s[50];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s",&s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s\n", s);
}