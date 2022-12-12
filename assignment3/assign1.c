// Assignment 3
// Q1 Write a C program which prints all integers divisible
// by n between 1 and 100 where value
// of n is provided by the user.

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= 100; i++)
    {
        if (n % i == 0)
            printf("%d\n", i);
    }
    return 0;
}