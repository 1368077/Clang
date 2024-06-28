#include<stdio.h>
main()
{
	float x[3][2];
	int i, j;

	for (i=0;i<3;j++)
	{
		for (j=0;j<2;j++)
		{
			printf("x[%d][%d]=",i,j);
			scanf("%f",&x[i][j]);
		}
	}
	//•½‹Ï’l‚Ì•\Ž¦
	printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",i, (x[i][0] + x[i][1]) / 2);



}