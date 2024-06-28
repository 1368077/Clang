#include<stdio.h>

main()
{
	int h, m, s;


	printf("秒数を入力:");
	scanf(" %d", &s);

	if (s >= 0) {
		if (s < 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d 時間 %d 分 %d 秒です\n", h, m, s);
		}
		else {
			printf("エラー:入力は5000までにしてください\n");
		}
	}
	else{
		printf("マイナスはエラーです\n");
	}
}