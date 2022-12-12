// Assignment 4
// Q2 Write a C program which accepts 100 integers and
// displays the counts of positives, negatives and zeros entered

#include <stdio.h>
int main()
{
    int i, a, n, pos = 0, neg = 0, zero = 0;
    printf("Enter the number of integers You want to Enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth integer: ", i + 1);
        scanf("%d", &a);
        if (a > 0)
            pos++;
        else if (a < 0)
            neg++;
        else
            zero++;
    }
    printf("The number of positives is: %d\n", pos);
    printf("The number of negatives is: %d\n", neg);
    printf("The number of zeros is: %d\n", zero);
    return 0;
}