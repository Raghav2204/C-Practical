#include<stdio.h>

int a,b,sum;// These are called global variables bcz everytime we take a,b they will be taken as int datatype

int main(){

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);
    sum= a+b;
    printf("The sum is:%d",sum);

    return 0;
}
