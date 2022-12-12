// Assignment 1
// Q3. If a three-digit integer is input through keyboard,
// write a program to print the sum of its digits.
//(Hint: Use the modulus operator to get the remainder of the division of the number by 10.)
#include <stdio.h>
void sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}
int main()
{
    int n;
    printf("Enter a three-digit number:\n");
    scanf("%d", &n);
    sumOfDigits(n);
    return 0;
}