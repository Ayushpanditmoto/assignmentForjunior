// Write a program named SINE to find the sine of an angle. The angle and its unit (degree, radian or grade) should be provided as command line arguments. For the units, short forms as d/D (for degree), r/R (for radian) or g/G (for grade) may be used. The program should use the series
// sin(𝑥)=𝑥−𝑥33!+𝑥55!−⋯,
// for evaluation. Take care of negative angles and angles in all the quadrants.

// 0°	=	0 gradians
// 90°	=	100 gradians
// 180°	=	200 gradians
// 270°	=	300 gradians
// 360°	=	400 gradians

#include <stdio.h>
#include <math.h>
int main()
{
    float angle, sin, x, y, z;
    char unit;
    printf("Enter the angle in degrees\n");
    scanf("%f", &angle);
    printf("Enter the unit\n");
    scanf(" %c", &unit);
    if (unit == 'd' || unit == 'D')
    {
        x = angle;

        printf("The sine of the angle is %f\n", sin);
    }
    else if (unit == 'r' || unit == 'R')
    {
        x = angle * 180 / 3.14;

        printf("The sine of the angle is %f\n", sin);
    }
    else if (unit == 'g' || unit == 'G')
    {
        x = angle * 180 / 200;

        printf("The sine of the angle is %f\n", sin);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}