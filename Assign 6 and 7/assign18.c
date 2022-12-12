// Write a recursive C function which returns the length of a string passed as an argument. [OPTIONAL]

#include<stdio.h>
#include<string.h>
int length(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }
    else
    {
        return 1+length(str+1);
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length of the string is: %d", length(str));
    return 0;

}