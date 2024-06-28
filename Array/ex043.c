#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("•¶š—ñ:%s\n", &data[0]);
	printf("•¶š”‚Í%d •¶š\n", i);
}