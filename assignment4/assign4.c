// Assignment 4
// Q4 Write a program to print out all Armstrong numbers between
//  1 and 500. If the sum of cubes of each digit of the number is
//  equal to the number itself, then the number is called an Armstrong
//  number. For example, 153 = ( 13 ) + ( 53) + ( 33).

#include <stdio.h>
int main()
{
    int n, temp, r, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        // remainder contains the last digit
        r = temp % 10;
        result += r * r * r;
        // removing last digit from the orignal number
        temp /= 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}