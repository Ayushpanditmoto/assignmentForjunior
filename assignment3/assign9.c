// Assignment 3
// Q9 Write a C program which print all prime number from 1 to 100
#include <stdio.h>
void PrimeNumber(int n)
{
	for (int i = 2; i <= n; i++)
	{
		int flag = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d ", i);
		}
	}
}
int main()
{
	int n = 100;
	// scanf("%d", &n);
	PrimeNumber(n);
	return 0;
}
