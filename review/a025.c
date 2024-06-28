#include<stdio.h>
main()
{
	char ch;

	printf("文字を入力:");
	scanf("%c", &ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		printf("アルファベットです\n");
	}
	else {
		if (ch >= '0' && ch <= '9') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
}