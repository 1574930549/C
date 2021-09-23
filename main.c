#include"stdio.h"
void whilee();
void dowhile();
void forr();
void whilee()
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
void dowhile()
{
	int k = 1, sum = 0;
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
void forr()
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
			printf("%d", i);
			sum = sum + i;
		}
	}
	printf("=%d", sum);
}
int main()
{
	whilee();
	printf("\n");
	dowhile();
	printf("\n");
	forr();
}
