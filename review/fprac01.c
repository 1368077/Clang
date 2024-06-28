#include<stdio.h>
main()
{
	int score = 0;
	char ch, neme[20];
	FILE* fp;
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
	if (fp = fopen("score.txt", "w"))
	{
		fprintf(fp, "%s\n%d\n", neme, score);
		fclose(fp);
	}
}