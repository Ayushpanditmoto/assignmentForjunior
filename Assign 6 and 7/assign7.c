// Assignment 6 & 7
// Q7 Write a C program which accepts a full name from
// the user prints the initials. Eg.  SRT for
// Sachin Ramesh Tendulkar.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (i = 0; i < count; i++)
    {
        if (i == 0)
            printf("%c", str[i]);
        if (str[i] == ' ')
            printf("%c", str[i + 1]);
    }
    printf("\n");
    return 0;
}
