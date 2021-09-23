#include"stdio.h"
int main()
{
	int k = 1,sum = 0;
	do
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
	} while (k < 100);
	printf("=%d", sum);
}