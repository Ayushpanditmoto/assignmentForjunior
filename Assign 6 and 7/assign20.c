// Write a C program that accepts a date as a string in “dd/mm/yyyy” format from the user,
// and prints the date in “date-month-year” format. [Example: If the input date is “19/04/2010”,
// the program should print 19-April-2010]. [OPTIONAL]

#include <stdio.h>
int extractDate(char *str, int *d, int *m, int *y)
{
    int i = 0;
    while (str[i] != '/')
    {
        *d = *d * 10 + (str[i] - '0');
        i++;
    }
    i++;
    while (str[i] != '/')
    {
        *m = *m * 10 + (str[i] - '0');
        i++;
    }
    i++;
    while (str[i] != '\0')
    {
        *y = *y * 10 + (str[i] - '0');
        i++;
    }
    return 0;
}
char getMonth(int m)
{
    char[14] month = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return month[m];
}

int main()
{
    printf("%c", getMonth(8));
    // char str[50];
    // printf("Enter the date in dd/mm/yyyy format: ");
    // scanf("%s",str);
    // int d,m,y;
    // extractDate(str,&d,&m,&y);
    // printf("\nDate is: %d-%s-%d",d,getMonth(m),y);
    return 0;
}
