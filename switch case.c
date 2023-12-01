#include<stdio.h>
int main(){
    char op;
printf("enter operation %c",op);
scanf("%C",&op);
int a,b;
printf("enter the number");
scanf("%d %d", &a,&b);// enter same character in the input as written in scan

switch (op)
{
    case '+':// in case of character use inverted comma  for cases but not in integer
    printf("sum is :%d",a+b);
    break;
    case'-':
    printf
    ("difference is: %d",a-b);
    break;
}
return 0;
}
