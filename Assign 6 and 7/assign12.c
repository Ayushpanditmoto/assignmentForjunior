// Write a program that converts a string like “123” to integer 123. Do not use any string library function.

#include <stdio.h>
int main(){
    char str[100];
    int i, num=0;
    printf("Enter a string: "); scanf("%s", str);
    for(i=0; str[i]!='\0'; i++){ 
	if(str[i]>='0' && str[i]<='9'){
            printf("%c", (str[i]-'0'));
            num = num*10 + (str[i]-'0');
        }
    }
    printf("%d\n", num);
    return 0;
}
