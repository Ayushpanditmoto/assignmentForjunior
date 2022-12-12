// Assignment 3
//  Q7 C program to find out sum of the following
//  series. S=1!+2!+3!+4!+ ... +n!
#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, t = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int fact = factorial(n);
        t += fact;
        n--;
    }
    printf("Sum of the series S=1!+2!+3!+4!+...+%d is %d", n, t);
    return 0;
}
