#include<stdio.h>
main()
{
	char  s[50];
	int i;
	printf("�Í������������͂��Ă�������>");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] -1;
		i++;
	}
	printf("�����ςݕ�����́A%s", &s[0]);
}