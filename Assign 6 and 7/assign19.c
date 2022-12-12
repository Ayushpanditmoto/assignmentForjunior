// Write a C function which takes as argument two dates in dd/mm/yyyy format as strings, compares them and returns 0 if the two dates are the same, 1 if the first date is later than the second one and -1 if the first date is earlier than the second date. [OPTIONAL]

#include <stdio.h>
#include <string.h>
int compareDate(char *str1, char *str2)
{
    int d1, m1, y1, d2, m2, y2;
    int i = 0;
    while (str1[i] != '/')
    {
        d1 = d1 * 10 + (str1[i] - '0');
        i++;
    }
    i++;
    while (str1[i] != '/')
    {
        m1 = m1 * 10 + (str1[i] - '0');
        i++;
    }
    i++;
    while (str1[i] != '\0')
    {
        y1 = y1 * 10 + (str1[i] - '0');
        i++;
    }
    i = 0;
    while (str2[i] != '/')
    {
        d2 = d2 * 10 + (str2[i] - '0');
        i++;
    }
    i++;
    while (str2[i] != '/')
    {
        m2 = m2 * 10 + (str2[i] - '0');
        i++;
    }
    i++;
    while (str2[i] != '\0')
    {
        y2 = y2 * 10 + (str2[i] - '0');
        i++;
    }
    if (y1 > y2)
    {
        return 1;
    }
    else if (y1 < y2)
    {
        return -1;
    }
    else
    {
        if (m1 > m2)
        {
            return 1;
        }
        else if (m1 < m2)
        {
            return -1;
        }
        else
        {
            if (d1 > d2)
            {
                return 1;
            }
            else if (d1 < d2)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{

    char str1[50];
    char str2[50];
    printf("Enter the 1st date in Format dd/mm/yyyy : ");
    scanf("%s", str1);
    printf("Enter the 2nd date in Format: dd/mm/yyyy ");
    scanf("%s", str2);
    printf("\n%d", compareDate(str1, str2));
    if (compareDate(str1, str2) == 0)
        printf("\nBoth dates are the same");
    else if (compareDate(str1, str2) == 1)
        printf("\n%s is later than %s", str1, str2);
    else
        printf("\n%s is earlier than %s", str1, str2);
    return 0;
}
