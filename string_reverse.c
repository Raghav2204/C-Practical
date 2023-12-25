#include<stdio.h>
int main(){

    char rev[5]="saket";
    for(int i=4;i>=0;i--){
        printf("%c",rev[i]);
    }
    return 0;
}