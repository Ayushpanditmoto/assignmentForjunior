// Write a menu driven program which accept a number in any number system [From binary ,decimal,Octal and Hex] and convert and
// display the same in any other amonst these

#include <stdio.h>
#include <math.h>
void Convert(int n, int base)
{
    int rem, i = 0, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * pow(base, i);
        n = n / 10;
        i++;
    }
    printf("The number in decimal is %d", sum);
}
int main()
{
    int n, base;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the base: ");
    scanf("%d", &base);
    Convert(n, base);
    return 0;
}