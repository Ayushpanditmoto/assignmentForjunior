// Assignment 6 & 7
// Q6 Write a C program which accepts a string from the
//  user and prints the reverse of the string without
// using string library functions.
#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
        count++;
    for (i = count - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
