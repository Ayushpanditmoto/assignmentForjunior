// Write a C function convert(int n, char *s, int w) that accepts three arguments. The function stores the string representation of n in s. The third argument w is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough. [OPTIONAL]

#include <stdio.h>
void convert(int n, char *s, int w)
{
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    char str[50];
    int w;
    printf("Enter the minimum field width: ");
    scanf("%d", &w);
    convert(n, str, w);
    printf("\nString is: %s", str);
    return 0;
}
