// Write a program in C to read some  strings through the keyboard and sort it using bubble sort. [OPTIONAL]

#include<stdio.h>
#include<string.h>
void bubble_sort(char *str, int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("%s\n", str);
}
int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    bubble_sort(str, strlen(str));
    return 0;
}