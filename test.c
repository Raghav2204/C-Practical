#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("file not found");
    }
    while((c=fgetc(fp))!=EOF){

        putchar(c);
    }
    fclose(fp);
}
