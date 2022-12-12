// Assignment 3
// Q12 Write a program to print the multiplication table of the
// number entered by the user. The table should get displayed in
// the following form.
//    29 * 1 = 29
//    29 * 2 = 58

#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter number: ");
    scanf("%d", &num);
    while (i != 11)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}
