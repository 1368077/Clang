#include<stdio.h>
enum BitState
{
	base=0,						//00000000通常
	poison=1<<0,				//00000001毒
	sleep=1<<1,					//00000010眠り
	paralysis=1<<2,				//00000100麻痺
	burn=1<<3,					//00001000やけど
	atkup=1<<4,					//00010000攻撃力アップ
	atkdown=1<<5,				//00100000攻撃力ダウン
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
	
}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & poison)
	{
		printf("毒\n");
	}
	if (s & sleep)
	{
		printf("睡眠\n");
	}
	if (s & paralysis)
	{
		printf("麻痺\n");
	}
	if (s & burn)
	{
		printf("火傷\n");
	}
	if (s & atkup)
	{
		printf("攻撃力アップ\n");
	}
	if (s & atkdown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == base)
	{
		printf("***********************\n");
	}
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:毒　２：睡眠　３：麻痺　４：火傷　5：攻撃↑　6：攻撃↓　0：入力終了>");
		scanf("%d", &a);
		if(a==0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= poison;
			break;
		case 2:
			*s |= sleep;
			break;
		case 3:
			*s |= paralysis;
			break;
		case 4:
			*s |= burn;
			break;
		case 5:
			*s |= atkup;
				break;
		case 6:
			*s |= atkdown;
			break;
		default:
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか？\n");
		printf("1:毒　２：睡眠　３：麻痺　４：火傷　5：攻撃↑　6：攻撃↓ 7:全回復　0：入力終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~sleep;
			break;
		case 3:
			*s &= ~paralysis;
			break;
		case 4:
			*s &= ~burn;
			break;
		case 5:
			*s &= ~atkup;
			break;
		case 6:
			*s &= ~atkdown;
		case 7:
			*s=base;
			break;
		default:
			break;
		}
	}
}