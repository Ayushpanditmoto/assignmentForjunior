// Assignment 3
// Q3 Write a C program to find the reverse of a given number.

#include <stdio.h>
void reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reverse of the number: %d", rev);
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    reverse(a);
    return 0;
}