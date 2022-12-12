// Q6 Write a C program which accepts numbers obtained
// by five students in five subjects. Print the total marks
// obtained by all the students. Also determine the highest
// total marks.
#include <stdio.h>
int main()
{
    int student = 5;
    int a[student][5], i, j, total = 0, max = 0;
    for (i = 0; i < student; i++)
    {
        printf("Enter the marks of the %d Student\n", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    int total1[5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            total = total + a[i][j];
        }
        printf("The total marks obtained by the %d student is %d\n", i + 1, total);

        total1[i] = total;
        total = 0;
    }
    int high;

    for (i = 0; i < 5; i++)
    {

        if (total1[i] > max)
        {
            high = total1[i];
        }
    }
    printf("The highest total marks obtained by the student is %d\n", high);
    return 0;
}
