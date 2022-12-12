// Assignment 6 & 7
// Q9 Write a program that reads a line and converts
// it into all capitals without using any string library function.
//(input string may also contain capital letters)
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
    for (i = 0; i < count; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    printf("%s\n", str);
    return 0;
}
