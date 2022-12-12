//  Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.

#include <stdio.h>
#include <string.h>
int strend(char *s, char *t)
{
    int i, j;
    int l1 = strlen(s);
    int l2 = strlen(t);
    if (l1 < l2)
        return 0;
    for (i = l1 - l2; i < l1; i++)
    {
        if (s[i] != t[i - l1 + l2])
            return 0;
    }
    return 1;
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter the 1st string: ");
    scanf("%s", str1);
    printf("Enter the 2nd string: ");
    scanf("%s", str2);
    printf("\n%d", strend(str1, str2));
    if (strend(str1, str2))
        printf("\nString %s occurs at the end of %s", str2, str1);
    else
        printf("\nString %s does not occur at the end of %s", str2, str1);
    return 0;
}