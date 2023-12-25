#include <stdio.h>
int main() {
    int a ,b;
    printf("the first number is: ");
    scanf("%d",&a);
    printf("the second number is: ");
    scanf("%d",&b);
    swapn(&a,&b);
    printf("after swapping values of a and b\n");
    printf("a = %d", a);
    printf("b = %d", b);
    return 0;
}
void swapn(int i, int j) 
{
    int temp = i;
    i = j;
    j = temp;
}
