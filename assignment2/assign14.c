// Write a program which accepts two numbers X, Y and creates a third number Z by appending Y after X. Example: if X=12 and Y=345 then Z=12345. [

#include <stdio.h>
int combine(int a, int b)
{
    int t = 1;
    while (t <= b)
        t *= 10;
    return a * t + b;
}
int main()
{
    int x, y, z;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    z = combine(x, y);

    printf("The third number is %d\n", z);
    return 0;
}