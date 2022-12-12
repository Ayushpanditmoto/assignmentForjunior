// Write a C program which accepts the names of five students and marks obtained by them in five subjects and prints the name of the students and the total marks obtained by them in order of merit. [OPTIONAL]

#include<stdio.h>
int main(){
    char name[5];
    int marks[5][5], i, j, k, count=0, flag=0;
    
    for(i=0; i<5; i++){
       printf("Enter the names of %d students: ", i+1);
         scanf("%s", name);
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Enter the marks of %s in %d subject: ", name[i], j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    
}