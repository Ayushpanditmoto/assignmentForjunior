// Assignment 2
// Q8 Any year is input through the keyboard.
// Write a program to determine whether the year is a
// leap year or not.  (Hint: Use the % (modulus) operator)

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}