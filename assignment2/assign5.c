// Assignment 2
// Q5 Write a program to find the grace marks for a student using switch.
// The user should enter the class obtained by the student and the number
// of subjects he has failed in.If the student gets first class and the
// number of subjects he failed in is greater than 3, then he does not get any grace.
//  If the number of subjects he failed in is less than or equal to 3 then the
// grace is of 5 marks per subject. If the student gets second class and the number
// of subjects he failed in is greater than 2, then he does not get any grace.
// If the number of subjects he failed in is less than or equal to 2 then the
// grace is of 4 marks per subject.If the student gets third class and the
// number of subjects he failed in is greater than 1, then he does not get any
// grace. If the number of subjects he failed in is equal to 1 then the grace is
//  of 5 marks per subject.
#include <stdio.h>
int main()
{
    int class, failed, grace;
    printf("Enter the class obtained by the student: ");
    scanf("%d", &class);
    printf("Enter the number of subjects he failed in: ");
    scanf("%d", &failed);
    switch (class)
    {
    case 1:
        if (failed > 3)
            printf("The student does not get any grace.\n");
        else
            grace = 5 * failed;
        printf("The student gets %d grace marks.\n", grace);
        break;
    case 2:
        if (failed > 2)
            printf("The student does not get any grace.\n");
        else
            grace = 4 * failed;
        printf("The student gets %d grace marks.\n", grace);
        break;
    case 3:
        if (failed > 1)
            printf("The student does not get any grace.\n");
        else
            grace = 5 * failed;
        printf("The student gets %d grace marks.\n", grace);
        break;
    default:
        printf("Invalid class.\n");
    }
    return 0;
}
