// Assignment 6 & 7
// Q2  A positive integer is entered through the keyboard,
// write a C function to find the binary equivalent of
// this number using recursion.
#include <stdio.h>
void binary(int n)
{
    if (n > 0)
    {
        binary(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary equivalent of %d is: ", n);
    binary(n);
    return 0;
}