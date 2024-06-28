#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	/*^-^*/
	char s[21];
	int k[20], i;
	srand(time(0));
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s",&s[0]);
	
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[>", i);
		scanf("%d" ,&k[i]);
		s[i] = s[i] - k[i];
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
}