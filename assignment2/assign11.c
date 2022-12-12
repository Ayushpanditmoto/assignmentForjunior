// Assignment 2
// Q11 Given the coordinates (x, y) of a center of a circle and
// its radius, write a program which will determine whether a
// point lies inside the circle, on the circle or outside the circle.
//(Hint: #include <math.h>. Use sqrt( ) and pow( ) functions)

#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r;
    printf("Enter the coordinates of the center of the circle: ");
    scanf("%f%f", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float d = sqrt(pow(x, 2) + pow(y, 2));
    if (d <= r)
        printf("The point lies inside the circle\n");
    else if (d == r)
        printf("The point lies on the circle\n");
    else
        printf("The point lies outside the circle\n");
    return 0;
}
