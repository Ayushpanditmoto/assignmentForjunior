//  Write a function squeeze(s,c) which removes all occurrences of the character c from the string s.

#include <stdio.h>
#include <string.h>
void squeeze(char *s, char c)
{
    int i, j;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            for (j = i; j < strlen(s); j++)
            {
                s[j] = s[j + 1];
            }
            i--;
        }
    }
    printf("\nSqueezed String is: %s\n", s);
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%s", str);
    char c;
    printf("Enter the element  you want to remove ");
    scanf("%c", &c);
    scanf("%c", &c);

    squeeze(str, c);
    return 0;
}
