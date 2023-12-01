#include<stdio.h>
int main()
{
    //sum of 1st and last digit of a 4-digit number//
    int n, f, l, sum, num, d=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    while(num!=0)//num!=0 is num not equal to 0
    {
        num = num/10;
        d = d*10;
    }
    d = d/10;
    f = n/d;
    l = n%10;
    sum = f+l;

    printf("Sum of first and last digit of %d is: %d",n,sum);
return 0;
}
