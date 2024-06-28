#include <stdio.h>
main()
{
	char ch;
	printf("文字を入力:");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z') { //大文字なら小文字に変換
		printf("変換すると%c\n", ch + 0x20);
	}
	else {
		if (ch >= 'a' && ch <= 'z') { //小文字なら大文字に変換
			printf("変換すると%c\n", ch - 0x20);
		}
		else { //アルファベット以外はエラー
			printf("エラー:アルファベットを入力してください\n");
		}
	}
}