// Assignment 6 & 7
// Q5. Write a C program which accepts a string from
// the user and counts the number of characters in the
// string without using string library functions.
#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Number of characters in the string is: %d", count);
    return 0;
}
