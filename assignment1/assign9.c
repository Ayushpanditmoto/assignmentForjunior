// Assignment 1
// Q9. Write a program which accept basic salary as input and print the gross
// salary of the employee. which is sum of basic salary ,
// DA(60% of basic salary) and HRA(15% of Basic salary) of basic salary
#include <stdio.h>
int main()
{
    int basic_salary;
    printf("Enter the basic salary: ");
    scanf("%d", &basic_salary);
    int da = basic_salary * 60 / 100;
    int hra = basic_salary * 15 / 100;
    int gross_salary = basic_salary + da + hra;
    printf("The gross salary is %d\n", gross_salary);
    return 0;
}