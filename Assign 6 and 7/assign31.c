// Write a program named SUM2L to find out the sum of the last two numbers provided as command line arguments.

#include <stdio.h>
#include <stdlib.h>
int sum2l(int num, int l)
{
	int sum = 0;
	if (num % 10 == 0)
	{
		return 0;
	}

	for (int i = 0; i < 2; i++)
	{
		sum += num % 10;
	}
	return sum - 1;
}
int countLenth(int num)
{
	int count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return count;
}
int main()
{
	int num;

	printf("Enter a number");
	scanf("%d", &num);

	int l = countLenth(num);

	// sum2l(num,l);
	printf("Sum of last 2 digit is %d\n", sum2l(num, l));
	return 0;
}
