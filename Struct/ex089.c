#include<stdio.h>
#include<string.h>
struct profile {
	char neme[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", &data.neme);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d %d %d" ,&data.birth[0],&data.birth[1],&data.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", &data.blood);
	printf("%s--%d”N%dŒ%d“ú¶@ŒŒ‰tŒ^-%sŒ^ (“VË)\n", data.neme, data.birth[0], data.birth[1], data.birth[2], data.blood);
}