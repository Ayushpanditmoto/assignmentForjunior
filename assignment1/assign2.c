// Assignment 1
// Q2. The length and breadth of a rectangle and radius of a circle
// are input throiugh the keyboard. Write a program to calculate the
// area and perimeter of a rectangle and the area and perimeter of a circle.

#include <stdio.h>
int main()
{
    float length, breadth, radius;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of rectangle: %f\n", length * breadth);
    printf("Perimeter of rectangle: %f\n", 2 * (length + breadth));
    printf("Area of circle: %f\n", 3.14 * radius * radius);
    printf("Perimeter of circle: %f\n", 2 * 3.14 * radius);
    return 0;
}