#include<stdio.h>
void Str_Cat(char *a1,char*a2);
main()
{
	char a[256], b[256];
	printf("�z��a:");
	gets(a);
	printf("�z��b�F");
	gets(b);
	Str_Cat(a, b);
	printf("�z��a:%s\n", a);
}
void Str_Cat(char* a1, char* a2)
{
	int i, j;
	for (i = 0; *(a1 + i) != '\0'; i++);
	for (j = 0; *(a1 + i) = *(a2 + j); i++, j++);
}