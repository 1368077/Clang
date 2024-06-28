#include<stdio.h>
struct profile {
	char neme[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile *p;
	p = &data;
	printf("–¼‘O‚ð“ü—Í:");
	scanf("%s", p->neme);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%s", &p->blood);
	printf("%s--%d”N%dŒŽ%d“ú¶@ŒŒ‰tŒ^-%sŒ^ (“VË)\n", p->neme, p->birth[0], p->birth[1], p->birth[2], p->blood);
}