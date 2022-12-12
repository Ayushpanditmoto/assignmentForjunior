// Assignment 5
// Q2 Write a program in C to read n number of values in an array.
// After that, count the total number of duplicate elements in that
// array. Then copy the elements except the duplicate elements of
// that array into another array and display this array in reverse order.
#include <stdio.h>
int main()
{
    int n, i, j, k, count = 0, flag = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
    }
    printf("The number of duplicate elements in the array is: %d", count);
    int b[n - count];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            b[i] = a[i];
        }
        flag = 0;
    }
    printf("\nThe elements of the array except the duplicate elements are: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
