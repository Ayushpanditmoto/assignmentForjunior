// Write a C program which accepts roll numbers of ten students and marks obtained by them in five subjects and prints the names of the students who have obtained highest and second highest marks subject wise. [OPTIONAL]

#include <stdio.h>
struct student
{
    char name[10];
    int rollno;
    int sub1, sub2, sub3, sub4, sub5;
};
int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    struct student s[n];
    int i, j, max = 0, max2 = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the student\n");
        scanf("%s", s[i].name);
        printf("Enter the roll number of the student\n");
        scanf("%d", &s[i].rollno);
        printf("Enter the marks of the student in five subjects\n");
        scanf("%d%d%d%d%d", &s[i].sub1, &s[i].sub2, &s[i].sub3, &s[i].sub4, &s[i].sub5);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (s[i].sub1 > max)
            {
                max = s[i].sub1;
            }
            if (s[i].sub2 > max)
            {
                max = s[i].sub2;
            }
            if (s[i].sub3 > max)
            {
                max = s[i].sub3;
            }
            if (s[i].sub4 > max)
            {
                max = s[i].sub4;
            }
            if (s[i].sub5 > max)
            {
                max = s[i].sub5;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (s[i].sub1 > max2)
            {
                max2 = s[i].sub1;
            }
            if (s[i].sub2 > max2)
            {
                max2 = s[i].sub2;
            }
            if (s[i].sub3 > max2)
            {
                max2 = s[i].sub3;
            }
            if (s[i].sub4 > max2)
            {
                max2 = s[i].sub4;
            }
            if (s[i].sub5 > max2)
            {
                max2 = s[i].sub5;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s[i].sub1 == max2)
        {
            printf("%s\n", s[i].name);
        }
        if (s[i].sub2 == max2)
        {
            printf("%s\n", s[i].name);
        }
        if (s[i].sub3 == max2)
        {
            printf("%s\n", s[i].name);
        }
        if (s[i].sub4 == max2)
        {
            printf("%s\n", s[i].name);
        }
        if (s[i].sub5 == max2)
        {
            printf("%s\n", s[i].name);
        }
    }
    return 0;
}
