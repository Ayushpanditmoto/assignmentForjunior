//Write a program which takes some numbers and computes the standard deviation of them. [OPTIONAL]

#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter the Size of the array\n");
    int n;
    scanf("%d",&n);
    float a[n],temp,sum=0,mean,sd;
    int i;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++){
        temp=a[i]-mean;
        temp=temp*temp;
        sum=sum+temp;
    }
   
    printf("The standard deviation of the array is %f\n",sqrt(sum/n));
    return 0;
}
