// Assignment 1
// Q4. An integer is entered as a input through keyboard .
// Write a program to find out wheter the number is odd or even.

#include <stdio.h>
void oddEven(int n)
{
    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else if (n % 2 == 1)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    oddEven(n);
    return 0;
}