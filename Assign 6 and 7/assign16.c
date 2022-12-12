// Write a C program which accepts an integer and creates a string representation of the integer value. Do not use any string library function. [Example: If the argument is integer 1234 the program should form the string “1234”]

#include <stdio.h>
int main()
{
    int num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    char str[count];
    for (i = 0; i < count; i++)
    {
        str[i] = num % 10 + '0';
        num = num / 10;
    }
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
