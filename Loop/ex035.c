#include<stdio.h>
main()
{
	int num=0, sum=0;
	
	while (1)
	{
		printf("��������:");
		scanf("%d", &num);
		if (num == -999) {
			break;
		}
		sum += num;
	}
	printf("���v=%d\n", sum);



}

