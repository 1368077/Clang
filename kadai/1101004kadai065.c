#include<stdio.h>

main()
{
	int num=0;
	int sum = 0;
	int cnt = 0;

	do
	{
		sum += num;
		cnt++;


		printf("����(-999�ŏI��)");
		scanf("%d", &num);
		

	} while(num!=-999);
	cnt--;
	printf("���v=%d\n", sum);
	printf("����=%f\n", (float)sum / (float)cnt);

}