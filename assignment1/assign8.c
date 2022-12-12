// Assignment 1
// Q8. Temperature of a city in degrees Fahrenheit is input through Keyboard .
// write a program to convert this temperature to degrees Celsius.
#include <stdio.h>
int main()
{
    int fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    int celsius = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is %d Celsius\n ", celsius);
    return 0;
}