#include<stdio.h>
main()
{
	/*文字型変数　goとroを宣言*/
	char go, ro;
	/*変数goに５を代入*/
	go = '5';
	/*変数roに６を代入*/
	ro = '6';
	/*５*６の結果をgoとroの演算を使って％Dで表示*/
	printf("5*6=%d\n", (go - 48) * (ro - 48));
}