#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);

int main() {

    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j;

   printf("Enter row size of the 2D array: \n");
   scanf("%d", &rowSize);
   printf("Enter column size of the 2D array: \n");
   scanf("%d", &colSize);
   printf("Enter the matrix (%d x %d): \n", rowSize, colSize);

   for (i=0; i<rowSize; i++)
    for (j=0; j<colSize; j++)
    scanf("%d", &ar[i][j]);

   reduceMatrix2D(ar, rowSize, colSize);
   printf("reduceMatrix2D(): \n");
   display(ar, rowSize, colSize);
   return 0;
}

void display(int ar[][SIZE], int rowSize, int colSize) {
    int l,m;
     for (l = 0; l < rowSize; l++) {
            for (m = 0; m < colSize; m++)
            printf("%d ", ar[l][m]);
     printf("\n");
     }
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {

    int r,c;

    int sum = 0; //handles which row to keep value

    for(c = 0; c < colSize; c++){

        for(r = c; r < rowSize; r++){
            sum += ar[r][c];
            ar[r][c] = 0;

        }

        ar[c][c] = sum;

        sum = 0; //reset the sum

    }

}
