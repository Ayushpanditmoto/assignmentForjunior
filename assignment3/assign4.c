// Assignment 3
// Q4 Write a C program to find out sum
// of the following series  S=1+2+3+4+ ... +n
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    // n*(n+1)/2
    printf("Sum of the series S=1+2+3+4+...+%d is %d", n, sum);
    return 0;
}
