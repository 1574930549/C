#include"stdio.h"
int main()
{
	int sum = 0;
	for (int i = 1; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("+");
		}
		else
		{
			printf("%d",i);
			sum = sum + i;
		}
	}
	printf("=%d", sum);
}