//Write a C program to replace a square matrix by its transpose without using a second matrix. [OPTIONAL]

#include<stdio.h>
int main(){
    int a[3][3],i,j,temp;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("The transpose of the matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
	printf("\n");
    }
    return 0;
}
