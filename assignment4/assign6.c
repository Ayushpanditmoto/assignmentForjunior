// An important property of square numbers: If a natural number is a square number, then it has to be the sum of Successive Odd Numbers starting from 1.Now using this property, find the square root of any perfect square.

#include <stdio.h>
int printSumOdd(int n)
{
    int sum = 0, c = 0;

    for (int i = 1; i <= n; i += 2)
    {
        if (n == sum)
        {
            return c;
        }
        sum += i;
        c++;
    }
    return c;
}
int main()
{
    int n;
    printf("Enter the Perfect Square number: ");
    scanf("%d", &n);
    printf("%d\n", printSumOdd(n));

    return 0;
}
