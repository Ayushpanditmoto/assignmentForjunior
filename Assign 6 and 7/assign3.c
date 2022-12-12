// Assignment 6 & 7
// Q3. Write a recursive function which returns the
// sum of individual digits of a number passed as argument.
#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sum(n / 10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of individual digits of %d is: %d", n, sum(n));
    return 0;
}