// Assignment 5
// Q1. Write a program in C to reverse the contents
// of the elements of an integer array.
#include <stdio.h>
int main()
{
    int i, j, temp;
    int n = 10;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("The reversed array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
