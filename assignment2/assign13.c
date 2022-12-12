// Assignment 2
// Q13 Given as input an integer number of seconds, write
//  a program to print as output the equivalent time in hours,
//  minutes and seconds. Recommended output format is something
// like 7322 seconds is equivalent to 2 hours 2 minutes 2 seconds.

#include <stdio.h>
int main()
{
    int seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int seconds2 = (seconds % 3600) % 60;
    printf("%d seconds is equivalent to %d hours %d minutes %d seconds\n", seconds, hours, minutes, seconds2);
    return 0;
}