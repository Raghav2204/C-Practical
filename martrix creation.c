
//creating a 3*3 matrix
#include <stdio.h>
//this is a 3*3 matrix

int main() {
  int i,j;
  int matrix[3][3];

  for(int i =0; i<3 ; i++){
    for(int j = 0; j<3 ; j++){
      printf("enter the element at %d%d position:-", i+1,j+1);
      scanf("%d",&matrix[i][j]);

    }

  }
  printf("the matrix is :\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",matrix[i][j]);
    }
   printf("\n");
  }
 return 0;
}
