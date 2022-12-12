// Assignment 1
// Q5. Input two integer and divide the largest number by the smallest number.
// then display the result as a fractinal number 1st  and then as a real valued number.
// Example : 9 divided by 5 shall yield "4/5" and "1.8 " respectively.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d /%d\n", a % b, b);
        printf("%f\n", (float)a / b);
    }
    else
    {
        printf("%d /%d\n", b % a, a);
        printf("%f\n", (float)b / a);
    }
}