// Write a C program to find out sum of the following series.

// S = 1@ + 2@ + 3@ + 4@ + … + n@

//             where, n@ is the sum of all factors of n. Example: 6@ = 1+2+3+6 = 12

#include <stdio.h>
int factorOfNum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + factorOfNum(i);
	}
	printf("Sum of the series is %d", sum);
	return 0;
}
