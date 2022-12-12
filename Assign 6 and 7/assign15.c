//  Write a C program which accepts a multi-word string in which successive words may be separated by multiple blanks and reformats the string such that successive words are separated by single blank only. Do not use any string library function. [OPTIONAL]

#include <stdio.h>

void RemoveSpace(char *str, int l)
{
    int count = 0;
    for (int i = 0; i < l; i++)
    {

        if (str[i] == ' ' && (str[i + 1] == ' ' || str[i - 1] == ' '))
        {
            for (int j = i; j < l; j++)
            {
                str[j] = str[j + 1];
                l--;
            }
        }
        else
        {
            i++;
        }
        printf("%s\n", str);
    }
}
int countLenth(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
int main()
{
    char str[100];
    int i, j, count = 0;
    printf("Enter a string: ");
    gets(str);
    int l = countLenth(str);
    RemoveSpace(str, l);
    puts(str);
    return 0;
}
