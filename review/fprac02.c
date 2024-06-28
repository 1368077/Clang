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
	printf("最高得点　名前:%s スコア:%d\n", max_neme, max_score);
	printf("プレイヤー名を入力：");
	scanf("%s", neme);
	while (1)
	{
		printf("スコア%d('e'で終了)\n", score);
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