#include<stdio.h>
int main()
{
    int mat[3][3];
    int i,j,a;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("Enter the element at %d%d\n",i+1,j+1);
            scanf("%d",&mat[i][j]);
               if((i+j)%2==0){
                   a=1;}
                  else{
               a=-1;
        }
    }
    printf("The matrix is :");
      for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("%d\t",mat[i][j]);

                  }
    }
    printf("\n");
      }
      int comatrix[3][3];
       for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            comatrix[i][j]=a*(mat[i+1][j+1]*mat[i+2][j+2]-mat[i+2][j+1]*mat[i+1][j+2]);
         printf("%d\t",comatrix[j][i]);
        }

printf("\n");
}
return 0;
}
