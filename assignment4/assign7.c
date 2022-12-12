// Write a program which reads a positive integer value, and compute the following sequence: if the number is even, halve it; if it’s odd, multiply by 3 and add 1. Repeat this process until the value is 1, printing out each intermediate value. Finally the program should print how many of these operations were performed. Typical output might be:
//  Inital value is 3
//  Next value is 10
//  Next value is 5
//  Next value is 16
//  Next value is 8
//  Next value is 4
//  Next value is 2
//  Next value is 1
//  Number of operations is 7

#include <stdio.h>
int main()
{
    int n, i = 1, count = 0;
    printf("Inital value is: ");
    scanf("%d", &n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        printf("Next value is %d\n", n);
        count++;
    }
    printf("Number of operations is %d", count);
    return 0;
}

// Ayush Pandit@DESKTOP-DG4RI72 MINGW64 ~/Desktop/ayush_pandit/assignment4 (master)
// $ ./a
// Inital value is: 3
// Next value is 10
// Next value is 5
// Next value is 16
// Next value is 8
// Next value is 4
// Next value is 2
// Next value is 1
// Number of operations is 7