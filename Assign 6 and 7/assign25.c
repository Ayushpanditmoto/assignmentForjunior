// Write a C function which takes as argument two strings str1 and str2. It creates a third string str3 which is formed by taking alternating characters from each string and returns it. Example: If the two string arguments are “abcd” and “efgh” the function should return the string “aebfcgdh”, If the two string arguments are “abcd” and “efghijkl” the function should return the string “aebfcgdhijkl”. Do not use any string library function. [OPTIONAL]

#include <stdio.h>
int countLenth(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
void joinString(char *str1, char *str2, int len1, int len2)
{
    int j, i;
    char str3[50];
    int total = len1 + len2;
    for (j = 0; j < len1; j++)
    {
        str3[j] = str1[j];
    }
    for (i = len1; i < total; i++)
    {
        printf("2nd loop %d \n ", i);

        str3[i] = str2[i];
    }
    str3[total] = '\0';
    printf("\nJoined String is: %s\n", str3);
}
int main()
{
    char str1[50];
    char str2[50];

    printf("Enter the 1st string: ");
    scanf("%s", str1);
    int l1 = countLenth(str1);
    printf("Enter the 2nd string: ");
    scanf("%s", str2);
    int l2 = countLenth(str2);
    joinString(str1, str2, l1, l2);

    return 0;
}
