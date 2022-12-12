// Write a program which accept a mumber n and print all the prime factors of n

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf(" %d\n", i);
		}
	}
}
