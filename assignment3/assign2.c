// Assignment 3
// Q2 Write a C program to find out sum of digits of a given number.

#include <stdio.h>
void sumofDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    sumofDigits(a);
    return 0;
}
