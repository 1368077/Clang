#include<stdio.h>
#include<string.h>
struct profile {
	char neme[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	printf("���O�����:");
	scanf("%s", &data.neme);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d" ,&data.birth[0],&data.birth[1],&data.birth[2]);
	printf("���t�^�����:");
	scanf("%s", &data.blood);
	printf("%s--%d�N%d��%d�����@���t�^-%s�^ (�V��)\n", data.neme, data.birth[0], data.birth[1], data.birth[2], data.blood);
}