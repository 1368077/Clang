#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	printf("何を出しますか？\n(1:グー　2:チョキ　3:パー)>");
	scanf("%d",&pl);
	if (pl == 1) {
		printf("プレイヤーはグーです\n");
	}
	if (pl == 2) {
		printf("プレイヤーはチョキです\n");
	}
	if (pl == 3) {
	    printf("プレイヤーはパーです\n");
	}

	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0) {
		printf("コンピューターはグーです\n");
	}
	if (cpu == 1) {
		printf("コンピューターはチョキです\n");
	}
	if (cpu == 2) {
		printf("コンピューターはパーです\n");
	}
	
	
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2) 
		|| (pl == 3 && cpu == 0)) {
		printf("プレイヤーの勝ち所詮コンピューター!!\n");
	}

	if ((pl == 1 && cpu == 2)
		|| (pl == 2 && cpu == 0)
		|| (pl == 3 && cpu == 1)) {
		printf("プレイヤーの負けざこが！！！\n");
	}

	if ((pl == 1 && cpu == 0)
		|| (pl == 2 && cpu == 1)
		|| (pl == 3 && cpu == 2)) {
		printf("あいこです早よ勝敗決めろや！！\n");
	}


}