#include <stdio.h>

int main()
{
	int i = 0, sum = 0;
	while (1)
	{
		sum += ++i;
		printf("%d+", i);
		if (sum + i + 1 > 300)
		{
			break;
		}
	}
	printf("%d=%d\n", ++i, sum + i);
	return 0;
}