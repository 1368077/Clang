#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int sum,i;
	
	printf("�z��a =");
	sum = 0;
	for (i = 0; i < 10; i++) {
		
		printf(" %d ", a[i]);
		sum += a[i];
	}
	printf("\n���v��%d\t", sum);
	printf("���ς�%d\n",sum/10);

	printf("�z��b =");
	sum = 0;
	for (i = 0; i < 10; i++) {

		printf(" %d ", b[i]);
		sum += b[i];
	}
	printf("\n���v��%d\t", sum);
	printf("���ς�%d\n", sum / 10);
}