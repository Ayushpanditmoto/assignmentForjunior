// Write a program to check whether a triangle is valid or not, when (i) the three angles of the triangle are entered through the Keyboard (ii) three sides of the triangle are entered through the keyboard. 

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is invalid\n");
    }
    return 0;
}
