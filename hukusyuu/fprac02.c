#include<stdio.h>
main()
{
	int score = 0,max_score=0;
	char ch, max_neme[20], neme[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_neme, &max_score);
		fclose(fp);
	}
	printf("�ō����_�@���O:%s �X�R�A:%d\n", max_neme, max_score);
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
	if (score>max_score)
	{
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", neme, score);
			fclose(fp);
		}
	}
}