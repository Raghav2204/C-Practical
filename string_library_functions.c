#include<stdio.h>
#include<string.h>
int main(){
 char a[]={"how you doing"};
 char b[]={" pheebs"};

 int n= strlen(a);
 printf("length of \"%s\" is %d\n",a,n);

 printf("%s",strcat(a,b));
 return 0;


}
