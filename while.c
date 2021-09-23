#include"stdio.h"
int main()
{
	int k = 1, sum = 0;
	while (k < 100)
	{
		if (k % 2 == 0)
		{
			printf("+");
		}
		else
		{
			printf("%d", k);
			sum = sum + k;
		}
		k++;
	}
	printf("=%d", sum);
}