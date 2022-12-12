//   Write a C program which accepts any string of the form “Ustad Bade Ghulam Ali Khan was the Tansen of the 20th century” and prints it as “Ustad|Bade|Ghulam|Ali| Khan|was|the|Tansen|of|the|20th|century”. [OPTIONAL]

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    for(i=0; i<count; i++)
    {  
       if (str[i]==' ')
       {
           printf("|");
       }
       else
         printf("%c", str[i]);
    }
    return 0;
    
}