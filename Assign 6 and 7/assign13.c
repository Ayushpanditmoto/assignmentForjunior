// Assignment 6 & 7
// Q13 Write a C program which accepts a string from the
//  user and checks whether it is palindrome or not. Do
// not use any string library function. [Example of a
// palindrome string: "abcba", "abba"]
#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (i = 0; i < count; i++)
    {
        if (str[i] == str[count - i - 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%s is a palindrome string\n", str);
    }
    else
    {
        printf("%s is not a palindrome string\n", str);
    }
    return 0;
}
