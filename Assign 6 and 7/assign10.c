// Write a program to count the number of occurrences of any two vowels in succession in a line of text.

#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            if (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')
            {
                count++;
            }
        }
    }
    printf("Number of occurrences of any two vowels in succession is %d\n", count);
    return 0;
}
