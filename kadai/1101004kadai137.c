#include<stdio.h>
int AlphaChek(char cdat);
main() {
	char c;
	int ret;
	printf("アルファベット１文字？");
	scanf("%c", &c);
	ret = AlphaChek(c);
	if (ret == 1) {
		printf("戻り値は%dなので入力した文字は大文字です\n", ret);
	}
	else {
		printf("戻り値は%dなので入力した文字は小文字です\n", ret);
	}
}

int	AlphaChek(char cdat) {
	if (cdat >= 0x41 && cdat <= 0x5A) {
		return(1);
	}
	else if (cdat >= 0x61 && cdat <= 0x7A) {
		return(0);
	}
}
