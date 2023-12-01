#include<stdio.h>
int main( )
{
    // getting paper dimensions from a known  paper dimension value //
    int d0l,d0b,d1l,d1b,d2l,d2b,d3l,d3b,d4l,d4b,d5l,d5b;

    d0l=1189, d0b=841;
    d1l=d0b, d1b=d0l/2;
    d2l=d1b,d2b=d1l/2;
    d3l=d2b, d3b=d2l/2;
    d4l=d3b, d4b=d3l/2;
    d5l=d4b, d5b=d4l/2;
    printf("A0 is %d*%d \n", d0l,d0b);
    printf("A1 is %d*%d \n", d1l,d1b);
    printf("A2 is %d*%d \n", d2l,d2b);
    printf("A3 is %d*%d \n", d3l,d3b);
    printf("A4 is %d*%d \n", d4l,d4b);
    printf("A5 is %d*%d \n", d5l,d5b);

    return 0;

}
