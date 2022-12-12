// Assignment 2
// Q4. If a five-digit integer is input through the keyboard,
//  write a program to print a new number by adding one to each
// of its digits. For example if the number that is input is 12391
// then the output should be displayed as 23402.

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a five-digit number: ");
	scanf("%d", &num);
	printf("The new number is: ");
	num = num + 11111;
	printf("%d\n", num);
	return 0;
}
