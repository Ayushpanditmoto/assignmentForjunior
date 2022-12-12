// Q10.Write a program which reads a list of words from a file and sorts them in alphabetical order and displays them one word per line. [OPTIONAL]

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char *str[], int n)
{
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
void print_list(char *str[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}
int main()
{
    int n, i;
    char *str[100];
    printf("Enter the number of words: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 100);
        printf("Enter the word %d: ", i + 1);
        scanf("%s", str[i]);
    }
    sort(str, n);
    print_list(str, n);
    return 0;
}
