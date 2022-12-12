// Assignment 5
// Q4 Write a program to find the range of a set of integers
//  entered by the user. Range is the difference between
//  the smallest and biggest number in the list.
#include <stdio.h>
int main()
{

    int a[10], i, j, min, max, temp;
    printf("Enter the elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The range of the array is %d\n", max - min);
    return 0;
}