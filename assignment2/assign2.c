// Assignment 2
// Q2 The length and breadth of a rectangle are input through the
// keyboard. Write a programme to determine (i) radius of a circle
// and ratio of perimeters of the rectangle and the circle if the
// areas of the rectangle and the circle are equal (ii) radius of
// the circle and the ratio of the areas of the rectangle and the
// circle if the perimeters of the rectangle and the circle are equal.

#include <stdio.h>
#include <math.h>
int main()
{
    float length, breadth, radius, perimeter, area, ratio1, ratio2;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    radius = sqrt(area / 3.14);
    ratio1 = perimeter / area;
    ratio2 = area / perimeter;
    printf("Radius of the circle: %f\n", radius);
    printf("Ratio of perimeters of the rectangle and the circle: %f\n", ratio1);
    printf("Ratio of areas of the rectangle and the circle: %f\n", ratio2);
    return 0;
}