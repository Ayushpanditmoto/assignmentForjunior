// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the three points of the triangle: x1,y1,x2,y2,x3,y3 ");
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (a == 0)
    {
        printf("The three points fall on one straight line\n");
    }
    else
    {
        printf("The three points do not fall on one straight line\n");
    }
    return 0;
}
