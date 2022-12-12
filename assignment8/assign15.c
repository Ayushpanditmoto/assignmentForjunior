// 15.   Write a program to sort some numbers in ascending
// order. The numbers are to be input from a file named ‘input.txt’.
// The output should be written in a file named ‘output.txt’.
// Use bubble sort algorithm and dynamic memory allocation for implementation.

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int n)
{

    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    FILE *fp;
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &n); // Size of the array dynamically
    int *arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    bubbleSort(arr, n);
    fp = fopen("output.txt", "w");
    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);
    return 0;
}
