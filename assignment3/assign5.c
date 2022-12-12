// Assignment 3
// Q5 Write a C program to find out sum of the
// following series  S=1.2+2.3+3.4+4.5+ ... +n.(n+1)
#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n * (n + 1) * (n + 2) / 3;
    printf("Sum of the series S=1.2+2.3+3.4+4.5+...+%d is %d", n, t);
    return 0;
}