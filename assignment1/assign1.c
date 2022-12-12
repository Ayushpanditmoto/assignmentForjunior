// Assignment 1
// Q1. Write a Program that reads two value from the keyboard,
// swaps their value and prints the result.
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping:\n%d %d", a, b);
    return 0;
}