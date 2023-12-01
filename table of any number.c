#include<stdio.h>
int main()
{
    int n;
   printf("Enter the number:");
   scanf("%d",&n);
   //write a table of any number

 int a;
   for(int i=1;i<=10;i=i+1){
   a=i*n;
   printf("%d*%d=%d\n",n,i,a) ;
   }

   return 0;
}
