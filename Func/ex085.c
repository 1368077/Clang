#include<stdio.h>
void Str_Cat(char *a1,char*a2);
main()
{
	char a[256], b[256];
	printf("配列a:");
	gets(a);
	printf("配列b：");
	gets(b);
	Str_Cat(a, b);
	printf("配列a:%s\n", a);
}
void Str_Cat(char* a1, char* a2)
{
	int i, j;
	for (i = 0; *(a1 + i) != '\0'; i++);
	for (j = 0; *(a1 + i) = *(a2 + j); i++, j++);
}