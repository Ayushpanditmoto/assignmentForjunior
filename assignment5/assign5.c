// Assignment 5
// Q5 Write a C program which accepts ten integers from the
//  user and prints them in ascending order. Use an array
//  to store the integers.
#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    printf("Enter the elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The array in ascending order is\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
