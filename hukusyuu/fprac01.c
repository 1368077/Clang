#include<stdio.h>
main()
{
	int score = 0;
	char ch, neme[20];
	FILE* fp;
	printf("�v���C���[������́F");
	scanf("%s", neme);
	while (1)
	{
		printf("�X�R�A%d('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (fp = fopen("score.txt", "w"))
	{
		fprintf(fp, "%s\n%d\n", neme, score);
		fclose(fp);
	}
}