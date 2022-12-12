// Write a C function which accepts a string str1 and returns a new string str2 which is str1 with each word reversed. Do not use any string library function.

#include <stdio.h>
int countLenth(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
void reverseCopyinAnotherArray(char *str, char *str2, int len)
{
    int i, j;
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        str2[i] = str[j];
    }
    str2[i] = '\0';

    printf("\nReversed String is: %s\n", str2);
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter the string: ");
    scanf("%s", str1);
    int l = countLenth(str1);
    reverseCopyinAnotherArray(str1, str2, l);
    return 0;
}
