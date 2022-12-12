// Write a program that reads a line and deletes from it all occurrences of the word “the”. Do not use any string library function. [OPTIONAL]

#include <stdio.h>
#include<string.h>
int main(){
    char str[100]="ju is the the  the our";
    //intf("Enter a string: ");
    //gets(str);

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 't' && str[i+1] == 'h' && str[i+2] == 'e'){
           i=i+4;
          continue;
        }
        else{
            printf("%c", str[i]);
            i++;
        }
     
    }
    return 0;
}
