#include<stdio.h>
int main(){

    int i,j,a,det;
    int matrix[3][3];


   //for taking values of matrix
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("Enter the element at %d%d\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    //for printing the matrix
    printf("the matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            printf("%d\t",matrix[i][j]);
            if((i+j)%2==0){
               a=1;}
                  else{
               a=-1;
    }


        }
        printf("\n");
    }

    //for finding determinant
        det=0;
    for(j=0;j<3;j++){

  det=det+a*(matrix[0][j]*(matrix[1][j+1]*matrix[2][j+2]-matrix[2][j+1]*matrix[1][j+2]));
    }
printf("determinant is : %d",det);
    return 0;
}
