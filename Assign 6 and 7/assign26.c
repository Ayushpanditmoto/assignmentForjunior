// Write a C function which takes as argument two strings str1 and str2 and an integer i. It returns a new string which is obtained by appending str2 from the ith character in str1. Example: If the two string arguments are “abcd” and “pqrs” and i is 2, then the function should return the string “abpqrs”. Do not use any string library function. [OPTIONAL]

#include <stdio.h>
#include <string.h>
void appendString(char *str1, char *str2, int i, char *str3)
{
    int j;
    for (j = 0; j < i; j++)
    {
        str3[j] = str1[j];
    }
    for (j = i; j < i + strlen(str2); j++)
    {
        str3[j] = str2[j - i];
    }
    str3[i + strlen(str2)] = '\0';
    printf("\nAppended String is: %s", str3);
}
int main()
{
    char str1[50];
    char str2[50];
    char str3[50];
    printf("Enter the 1st string: ");
    scanf("%s", str1);
    printf("Enter the 2nd string: ");
    scanf("%s", str2);
    printf("Enter the index: ");
    int i;
    scanf("%d", &i);
    appendString(str1, str2, i, str3);
    return 0;
}