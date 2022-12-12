// Write a C program that prints the following patterns for the input of n=4. The value of n is input by the user.

#include <stdio.h>
void tri1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		printf("%d",j);
		}
	printf("\n");

	}
}
void tri2(int n){
for(int i=1;i<=n;i++){
	//for space loop

	for(int j=1;j<=n-i;j++){
		printf(" ");
	}
	
	//for number
	for(int k=1;k<=i;k++){
		printf("%d",k);
	}
	printf("\n");
}
}
void tri3(int n){
for(int i=1;i<=n;i++){
	//for space loop

	for(int j=1;j<=n-i;j++){
		printf(" ");
	}
	
	//for number
	for(int k=1;k<=i;k++){
		printf("%d",k);
	}
	//for next number
	int temp=i;
	for(int k=1;k<i;k++){
		printf("%d",temp-1);
		temp--;
	}

	printf("\n");
}
}

void tri4(int n){
tri3(n);

for(int i=1;i<=n;i++){
	//for space loop

	for(int j=1;j<=i;j++){
		printf(" ");
	}
	
	//for number
	for(int k=1;k<=n-i;k++){
		printf("%d",k);
	}
	for(int m=n-i;m>1;m--){

		printf("%d",m-1);
	}
	

	printf("\n");
}
	
}

void tri5(int n){
for(int i=1;i<=n;i++){
	//for space loop

	for(int j=1;j<=n-i;j++){
		printf(" ");
	}
	
	//for number
	for(int k=1;k<=i;k++){
		printf("*");
	}
	//for next number
	int temp=i;
	for(int k=1;k<i;k++){
		printf("*");
		temp--;
	}

	printf("\n");
}
for(int i=1;i<=n;i++){
	//for space loop

	for(int j=1;j<=i;j++){
		printf(" ");
	}
	
	//for number
	for(int k=1;k<=n-i;k++){
		printf("*");
	}
	for(int m=n-i;m>1;m--){

		printf("*");
	}
	

	printf("\n");
}


}






int main()
{
	int n=10;
	tri1(n);
	tri2(n);
	tri3(n);
	tri4(n);
	tri5(n);
	
	
    
    return 0;
}
