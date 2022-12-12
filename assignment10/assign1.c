// Q1 Using Euler's method
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float fun(float x, float y)
{
    float f;
    f = 2 * x;
    return f;
}
float f(float a)
{
    return a * a;
}
int main()
{
    float a, b, h, t;
    printf(" enter the initial x value and corresponding y value\n");
    scanf("%f %f", &a, &b);
    printf("enter the value of the interval\n");
    scanf("%f", &h);
    printf("enter the value of x to find the corresponding Y value\n");
    scanf("%f", &t);
    float x, y, k;
    x = a;
    y = b;
    printf("\n  x\t  y           error\n");
    while (x <= t)
    {
        k = h * fun(x, y);
        y = y + k;
        x = x + h;
        printf("%0.3f\t%0.3f\t %0.3f\n", x, y, fabs(f(x) - y));
    }
    return 0;
}

// Sample Output

// ( function is Y=x^2)

// enter the initial x value and corresponding y value

// 2

// 4

// enter the value of the interval

// 0.1

// enter the value of x to find the corresponding Y value

// 3

// x            y        error

// 2.100   4.400   0.010

// 2.200   4.820   0.020

// 2.300   5.260   0.030

// 2.400   5.720   0.040

// 2.500   6.200   0.050

// 2.600   6.700   0.060

// 2.700   7.220   0.070

// 2.800   7.760   0.080

// 2.900   8.320   0.090

// 3.000   8.900   0.100

// Note: I have not covered the error calculation part.