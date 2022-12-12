// Assignment 1
// Q10. A cashier has currency notes of denominations 10, 50 and 100.
// Write a C program which accepts an amount to be withdrawn ,
// and print  the total number of currency notes of each
// denomination the cashier will have to give to the withdrawer.
#include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amount);
    int notes10 = amount / 10;
    int notes50 = amount / 50;
    int notes100 = amount / 100;
    printf("The total number of notes of 10 is %d\n", notes10);
    printf("The total number of notes of 50 is %d\n", notes50);
    printf("The total number of notes of 100 is %d\n", notes100);
    return 0;
}