// Assignment 1
// Q7. Accept three integer  numbers and find their average.
// Next display which numbers are below and above the average.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int average = (a + b + c) / 3;
    if (a < average)
        printf("%d is below the average\n", a);
    if (b < average)
        printf("%d is below the average\n", b);
    if (c < average)
        printf("%d is below the average\n", c);
    if (a > average)
        printf("%d is above the average\n", a);
    if (b > average)
        printf("%d is above the average\n", b);
    if (c > average)
        printf("%d is above the average\n", c);
    return 0;
}