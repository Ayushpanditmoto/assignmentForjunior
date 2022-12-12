// Assignment 6 & 7
//  Q1 Write a function to compute the distance between
//  two points and use it to develop another function that will
// compute the area of the triangle whose vertices are A(x1, y1),
//  B(x2, y2), and C(x3, y3). Use these functions to develop a function
// which returns a value 1 if the point (x, y) lies inside the triangle ABC,
// otherwise a value 0.
#include <stdio.h>
float areaTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int area = 0;
    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
    return area;
}
int main()
{
    float x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter the coordinates of the first point\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter the coordinates of the second point\n");
    scanf("%f%f", &x2, &y2);
    printf("Enter the coordinates of the third point\n");
    scanf("%f%f", &x3, &y3);
    printf("Enter the coordinates of the point to be checked\n");
    scanf("%f%f", &x, &y);
    float area = areaTriangle(x1, y1, x2, y2, x3, y3);
    float area1 = areaTriangle(x, y, x2, y2, x3, y3);
    float area2 = areaTriangle(x1, y1, x, y, x3, y3);
    float area3 = areaTriangle(x1, y1, x2, y2, x, y);
    if (area >= area1 + area2 + area3)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}