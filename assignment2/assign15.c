//  A certain grade of steel is graded according to the following conditions:

// Hardness must be greater than 50

// Carbon content must be less than 0.7

// Tensile strength must be greater than 5600

// The grades are as follows:

// Grade is 10 if all three conditions are met

// Grade is 9 if conditions (i) and (ii) are met

// Grade is 8 if conditions (ii) and (iii) are met

// Grade is 7 if conditions (i) and (iii) are met

// Grade is 6 if only one condition is met

// Grade is 5 if none of the conditions are met

// Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. 

#include<stdio.h>
int main()
{
    float hardness,carbon,tensile;
    printf("Enter the hardness, carbon content and tensile strength of the steel: ");
    scanf("%f%f%f",&hardness,&carbon,&tensile);
    if(hardness>50&&carbon<0.7&&tensile>5600)
    {
        printf("The grade of the steel is 10\n");
    }
    else if(hardness>50&&carbon<0.7)
    {
        printf("The grade of the steel is 9\n");
    }
    else if(carbon<0.7&&tensile>5600)
    {
        printf("The grade of the steel is 8\n");
    }
    else if(hardness>50&&tensile>5600)
    {
        printf("The grade of the steel is 7\n");
    }
    else if(hardness>50)
    {
        printf("The grade of the steel is 6\n");
    }
    else if(carbon<0.7)
    {
        printf("The grade of the steel is 6\n");
    }
    else if(tensile>5600)
    {
        printf("The grade of the steel is 6\n");
    }
    else
    {
        printf("The grade of the steel is 5\n");
    }
    return 0;
}