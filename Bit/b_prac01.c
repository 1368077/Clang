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
	base=0,						//00000000�ʏ�
	poison=1<<0,				//00000001��
	sleep=1<<1,					//00000010����
	paralysis=1<<2,				//00000100���
	burn=1<<3,					//00001000�₯��
	atkup=1<<4,					//00010000�U���̓A�b�v
	atkdown=1<<5,	            //00100000�U���̓_�E��
	Dead=1<<6,					//0000 0000 0100 0000���S�t���O
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

	Chara chara = { "��",2000,200,100,base,2000,150,
	{{"HP��",0,	50,	800},
	 {"�U���̓A�b�v",1,	50,	120},
	 {"��Ԉُ��",2,	20,	0}} };
	Mob mob[Mob_Num] = {
		{"�GA",700,150,800,poison | Atk_Skill,30},
		{"�GB",1500,200,200,burn | Atk_Skill,30},
		{"�{�X",5000,200,80,atkdown | Atk_Skill,10} };

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
		printf("%s�̎��S�ɂ��Q�[���I�[�o�[\n", chara.sp.name);
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
	printf("%s�̍U��\n", sp1.name);
	damege = DamageCalc(sp1, *sp2);
	printf("%s��%d�̃_���[�W\n\n", sp2->name, damege);
	sp2->hp -= damege;
	if (sp2->hp <= 0)
	{
		printf("%s�͓|���ꂽ\n", sp2->name);
		sp2->state |= Dead;
	}
}
void BattleMode(Chara* c, Mob m)
{
	int command, skill;
	system("cls");
	DisplayStatus(*c);
	printf("%s�������ꂽ�I\n", m.sp.name);
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
						printf("��Ԉُ�U�����󂯂��I\n");
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
						printf("��Ԉُ�U�����󂯂��I\n");
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
			printf("�X�L���̑I��\n");
			skill = SkillMenu(*c);
			if (c->mp >= c->skl[skill].use_mp)
			{
				switch (skill)
				{
				case 0:
					c->sp.hp += c->skl[skill].effect;
					if (c->sp.hp > c->maxhp) { c->sp.hp = c->maxhp; }
					c->mp -= c->skl[skill].use_mp;
					printf("HP��%d�񕜂����I\n", c->skl[skill].effect);
					break;
				case 1:
					c->sp.atk *= c->skl[skill].effect / 100.0;
					c->mp -= c->skl[skill].use_mp;
					c->sp.state |= atkup;
					DisplayStatus(*c);
					printf("�U���͂��A�b�v�����I\n");
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
					printf("��Ԉُ킪�񕜂����I\n");
					break;
				default:
					break;

				}
			}
			else
			{
				printf("MP������Ȃ�\n");
			}

		}
	}
}



void DisplayStatus(Chara c)
{
	printf("***************\n");

	printf("HP:%-4d	 MP:%-3d\n", c.sp.hp, c.mp);
	if (c.sp.state) {
		printf("���:");

		if (c.sp.state & poison)
		{
			printf("��");
		}
		if (c.sp.state & sleep)
		{
			printf("����");
		}
		if (c.sp.state & paralysis)
		{
			printf("���");
		}
		if (c.sp.state & burn)
		{
			printf("�Ώ�");
		}
		if (c.sp.state & atkup)
		{
			printf("�U���̓A�b�v");
		}
		if (c.sp.state & atkdown)
		{
			printf("�U���̓_�E��");
		}
	}
	printf("\n***********************\n");
	
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�Ł@�Q�F�����@�R�F��Ⴡ@�S�F�Ώ��@5�F�U�����@6�F�U�����@0�F���͏I��>");
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
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�Ł@�Q�F�����@�R�F��Ⴡ@�S�F�Ώ��@5�F�U�����@6�F�U���� 7:�S�񕜁@0�F���͏I��>");
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
		printf("-------\n�R�}���h�I��\n");
		printf("1.��������\n2.�X�L��\n3.�ڂ�����\n\n");
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
		printf("------------\n�X�L���I��\n");
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