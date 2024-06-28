#include<stdio.h>
enum BitState
{
	base=0,						//00000000�ʏ�
	poison=1<<0,				//00000001��
	sleep=1<<1,					//00000010����
	paralysis=1<<2,				//00000100���
	burn=1<<3,					//00001000�₯��
	atkup=1<<4,					//00010000�U���̓A�b�v
	atkdown=1<<5,				//00100000�U���̓_�E��
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
	printf("****���݂̏��****\n");
	if (s & poison)
	{
		printf("��\n");
	}
	if (s & sleep)
	{
		printf("����\n");
	}
	if (s & paralysis)
	{
		printf("���\n");
	}
	if (s & burn)
	{
		printf("�Ώ�\n");
	}
	if (s & atkup)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & atkdown)
	{
		printf("�U���̓_�E��\n");
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