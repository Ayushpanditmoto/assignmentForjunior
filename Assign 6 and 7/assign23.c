// Assignment 6 & 7
// Q23. Write a program in C to store n numbers in an array
// and print the elements using pointers.  Also compute
// the sum of all elements of that array using pointers.

#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *ptr = &a[0];
    while (n--)
    {
        sum = sum + *ptr;
        // printf("Sum %d ",sum);
        ptr++;
    }
    printf("The sum of all elements is: %d\n", sum);
}
