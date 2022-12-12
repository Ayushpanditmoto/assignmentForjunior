// Assignment 4
// Q9 Write a program to find the octal equivalent
// of the entered integer
#include <stdio.h>
int main()
{
    int n, octal = 0, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        octal = octal + (n % 8) * i;
        n = n / 8;
        i = i * 10;
    }
    printf("The octal equivalent of the number is: %d", octal);
    return 0;
}