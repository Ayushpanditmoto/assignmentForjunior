// Assignment 8
// Q4.Write a program which accepts names, rolls and marks
// of 10 students in 6 subjects and stores it in an array of structures.
// Write a separate function which prints in ascending order the rank list
// (roll, name, average) based on the average of 6 subjects.

#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rollno;
    char name[20];
    int marks[6];
    int avg;
};
void avgMarks(struct student *ptr, int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 6; j++)
        {
            sum = sum + ptr[i].marks[j];
        }
        ptr[i].avg = sum / 6;
    }
}
void rank(struct student *ptr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ptr[j].avg > ptr[j + 1].avg)
            {
                temp = ptr[j].avg;
                ptr[j].avg = ptr[j + 1].avg;
                ptr[j + 1].avg = temp;
            }
        }
    }

    printf("%d %s %d\n", ptr[i].rollno, ptr[i].name, ptr[i].avg);
}
int main()
{
    int n, i, j;
    printf("Enter the No. of Student \n");
    scanf("%d", &n);

    struct student *ptr = (struct student *)malloc(n * sizeof(struct student));
    for (i = 0; i < n; i++)
    {
        printf("Enter the Roll No. of Student %d\n", i + 1);
        scanf("%d", &ptr[i].rollno);
        printf("Enter the Name of Student %d\n", i + 1);
        scanf("%s", ptr[i].name);
        for (j = 0; j < 6; j++)
        {
            printf("Enter the Marks of Student %d In Subject %d\n", i + 1, j + 1);
            scanf("%d", &ptr[i].marks[j]);
            int sum = 0;
        }
    }

    avgMarks(ptr, n);
    rank(ptr, n);

    return 0;
}
