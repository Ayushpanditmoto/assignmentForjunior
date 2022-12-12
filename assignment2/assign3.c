// In a town, the percentage of men is 52. The percentage of total literacy is 48. If the total percentage of literate men is 35% of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double men, wmen, litm, litwo, illit, lit, tot = 80000, illitwmen;
    men = (52.0 / 100.0) * 80000.0;
    wmen = tot - men;
    lit = (48.0 / 100.0) * 80000.0;
    litm = (35.0 / 100.0) * 80000.0;
    litwo = lit - litm;
    illitwmen = wmen - litwo;
    printf("Hence the total illiterate men of the town is %f\n", men - litm);
    printf("Hence the total illiterate women is %f\n", illitwmen);
    return 0;
}