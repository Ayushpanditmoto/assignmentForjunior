// Assignment 1
//  Q6. Write a program to find the maximum and minimum of three numbers.
#include <stdio.h>
void findMaxMin(int a, int b, int c)
{
    int max = a;
    int min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Max: %d\nMin: %d\n", max, min);
}
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    findMaxMin(a, b, c);
    return 0;
}