#include <stdio.h>

int main(void){

      int A[100][100],B[100][100],result[100][100],i,j,row1,row2,col1,col2,k,sum=0 ;

      printf("Enter your row and column for Matrix A: ");
      scanf("%d %d", &row1, &col1);
      printf("Enter your row and column for Matrix B: ");
      scanf("%d %d", &row2, &col2);
      while(row1 != col2){
      
       printf("ERROR!! The row of A matrix should be the same as B matrix's column");
       printf("Enter your row and column for Matrix A: ");
       scanf("%d %d", &row1, &col1);
       printf("Enter your row and column for Matrix B: ");
       scanf("%d %d", &row2, &col2);

      }


      //Scanning the A Matrix
      printf("The elements of Matrix A\n");
      for(i=0;i<row1;i++){
            
            for(j=0;j<col1;j++){

             printf("A[%d][%d]= ", i,j);
             scanf("%d", &A[i][j]);

            }
   }
    //Printing A martrix
    printf("\nA = ");
    for(i=0;i<row1;i++){
     
       printf("\t");
    for(j=0;j<col1;j++){

       printf("%d ", A[i][j]);
    }
       printf("\n");

  }

      //Scanning the B Matrix
      printf("The elements of Matrix B\n");
      for(i=0;i<row2;i++){
            
            for(j=0;j<col2;j++){

             printf("B[%d][%d]= ", i,j);
             scanf("%d", &B[i][j]);

            }
   }
    //Printing B martrix
    printf("\nB = ");
    for(i=0;i<row2;i++){
     
       printf("\t");
    for(j=0;j<col2;j++){

       printf("%d ", B[i][j]);
    }
       printf("\n");

  }
    //Matrix Multiplication
    for(i=0;i<row1;i++){

      for(j=0;j<col2;j++){

        for(k=0;k<col1;k++){

         sum= sum + A[i][k] * B[k][j];
        }

         result[i][j] = sum;
            sum = 0;
      }

    }

    //Printing the result
    printf("Result Matrix=\n");

    for(i=0;i<row1;i++){
     
    for(j=0;j<col2;j++){

       printf("%d ", result[i][j]);
    }
       printf("\n");

  }

}