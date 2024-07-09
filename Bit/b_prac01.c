#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skill_Num 3
#define Mob_Num 3
typedef unsigned int UINT;
typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Spec;
typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skill_Num];
}Chara;
typedef struct {
	Spec sp;
	int rate;
}Mob;
enum BitState
{
	base=0,						//00000000通常
	poison=1<<0,				//00000001毒
	sleep=1<<1,					//00000010眠り
	paralysis=1<<2,				//00000100麻痺
	burn=1<<3,					//00001000やけど
	atkup=1<<4,					//00010000攻撃力アップ
	atkdown=1<<5,	            //00100000攻撃力ダウン
	Dead=1<<6,					//0000 0000 0100 0000死亡フラグ
	Atk_Skill=1<<7,				//0000 0000 1000 0000
};
int TurnCount = 0;
void DisplayStatus(Chara c);
void BattleMode(Chara* c, Mob m);
int DisplayMenu(void);
int SkillMenu(Chara c);
int DamageCalc(Spec sp1, Spec sp2);
void BattleMessage(Spec sp1, Spec* sp2);
//void ChangeFlag(UINT* s);
//void ClearFlag(UINT* s);
main(int argc,char*argv[])
{
	srand(time(0));

	Chara chara = { "楓",2000,200,100,base,2000,150,
	{{"HP回復",0,	50,	800},
	 {"攻撃力アップ",1,	50,	120},
	 {"状態異常回復",2,	20,	0}} };
	Mob mob[Mob_Num] = {
		{"敵A",700,150,800,poison | Atk_Skill,30},
		{"敵B",1500,200,200,burn | Atk_Skill,30},
		{"ボス",5000,200,80,atkdown | Atk_Skill,10} };

	int num = rand() % Mob_Num;
	if (argc > 1) {
		num = atoi(argv[1]);
		if (num < 0 || num >= Mob_Num) {
			num = rand() % Mob_Num;
		}
	}
	BattleMode(&chara, mob[num]);
	if (chara.sp.state & Dead)
	{
		printf("%sの死亡によりゲームオーバー\n", chara.sp.name);
	}
}
int DamageCalc(Spec sp1, Spec sp2)
{
	int damage;
	if ((sp1.state & atkdown) && !(sp1.state & Atk_Skill))
	{
		sp1.atk *= 0.8;
	}
	damage = sp1.atk * ((float)sp1.atk / sp2.def) + sp1.atk * (rand() % 50) / 100.0;
	if (rand() % 100 == 99)
	{
		return 2 * damage;
	}
	return damage;
}
void BattleMessage(Spec sp1, Spec* sp2)
{
	int damege;
	TurnCount++;
	printf("%sの攻撃\n", sp1.name);
	damege = DamageCalc(sp1, *sp2);
	printf("%sに%dのダメージ\n\n", sp2->name, damege);
	sp2->hp -= damege;
	if (sp2->hp <= 0)
	{
		printf("%sは倒された\n", sp2->name);
		sp2->state |= Dead;
	}
}
void BattleMode(Chara* c, Mob m)
{
	int command, skill;
	system("cls");
	DisplayStatus(*c);
	printf("%sがあらわれた！\n", m.sp.name);
	while (1)
	{
		command = DisplayMenu();
		if (c->sp.state & poison)
		{
			c->sp.hp *= 0.8;
		}
		if (c->sp.state & burn)
		{
			c->sp.hp *= 0.9;
			c->mp *= 0.9;
		}
		
		if (command == 1) {
			DisplayStatus(*c);
			if (TurnCount % 2 == 0)
			{
				BattleMessage(c->sp, &m.sp);
				if (m.sp.state & Dead)
				{
					break;
				}
				else
				{
					if (rand() % 100 < m.rate)
					{
						printf("状態異常攻撃を受けた！\n");
						c->sp.state |= (m.sp.state & ~Atk_Skill);
					}
					DisplayStatus(*c);
				}
			}
			if (TurnCount%2==1)
			{
				BattleMessage(m.sp, &c->sp);
				if (c->sp.state & Dead)
				{
					break;
				}
				else
				{
					if (rand() % 100 < m.rate)
					{
						printf("状態異常攻撃を受けた！\n");
						c->sp.state |= (m.sp.state & ~Atk_Skill);
					}
					DisplayStatus(*c);
				}
			}
		}
		else if (command == -1) {
			c->sp.state |= Dead;
			return;
		}
		else if (command == 2)
		{
			printf("スキルの選択\n");
			skill = SkillMenu(*c);
			if (c->mp >= c->skl[skill].use_mp)
			{
				switch (skill)
				{
				case 0:
					c->sp.hp += c->skl[skill].effect;
					if (c->sp.hp > c->maxhp) { c->sp.hp = c->maxhp; }
					c->mp -= c->skl[skill].use_mp;
					printf("HPを%d回復した！\n", c->skl[skill].effect);
					break;
				case 1:
					c->sp.atk *= c->skl[skill].effect / 100.0;
					c->mp -= c->skl[skill].use_mp;
					c->sp.state |= atkup;
					DisplayStatus(*c);
					printf("攻撃力がアップした！\n");
					break;
				case 2:
					if (c->sp.state & atkup)
					{
						c->sp.state = base;
						c->sp.state |= atkup;
					}
					else
					{
						c->sp.state = base;
					}
					c->mp -= c->skl[skill].use_mp;
					DisplayStatus(*c);
					printf("状態異常が回復した！\n");
					break;
				default:
					break;

				}
			}
			else
			{
				printf("MPが足りない\n");
			}

		}
	}
}



void DisplayStatus(Chara c)
{
	printf("***************\n");

	printf("HP:%-4d	 MP:%-3d\n", c.sp.hp, c.mp);
	if (c.sp.state) {
		printf("状態:");

		if (c.sp.state & poison)
		{
			printf("毒");
		}
		if (c.sp.state & sleep)
		{
			printf("睡眠");
		}
		if (c.sp.state & paralysis)
		{
			printf("麻痺");
		}
		if (c.sp.state & burn)
		{
			printf("火傷");
		}
		if (c.sp.state & atkup)
		{
			printf("攻撃力アップ");
		}
		if (c.sp.state & atkdown)
		{
			printf("攻撃力ダウン");
		}
	}
	printf("\n***********************\n");
	
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
int DisplayMenu(void)
{
	char ch;
	while (1)
	{
		printf("-------\nコマンド選択\n");
		printf("1.たたかう\n2.スキル\n3.ぼうぎょ\n\n");
		ch = getch();
		if (ch > '0' && ch < '4')
		{
			return ch - '0';
		}
		else if (ch == 'q')
		{
			return-1;
		}
	}
}
int SkillMenu(Chara c)
{
	char ch;
	int i;
	while (1)
	{
		printf("------------\nスキル選択\n");
		for (i = 0; i < Skill_Num; i++)
		{
			printf("%d.%s\n", i + i, c.skl[i].name);
		}
		printf("\n");
		ch = getch();
		if (ch > '0' && ch < '4')
		{
			return ch - '0' - 1;
		}
	}
}