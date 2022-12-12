// Assignment 4
// Q3 Write a C program to print the first n numbers
//  of the Fibonacci sequence. The Fibonacci sequence is
// constructed by adding the last two numbers of the sequence
// so far to get the next number in the sequence. The first and
//  second numbers of the sequence are defined as 0 and 1. We get:
//  0, 1, 1, 2, 3, 5, 8, 13, 21…

#include <stdio.h>
int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d terms of the Fibonacci sequence are: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}