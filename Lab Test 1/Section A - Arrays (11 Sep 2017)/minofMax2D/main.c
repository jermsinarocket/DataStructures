#include <stdio.h>
#define SIZE 10

int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);

int main()  {

    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j,min;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);

    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);

    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);

    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);

    min=minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);

    return 0;
}

int minOfMax2D(int ar[][SIZE], int rowSize, int colSize) {

   int r,c;
   int maxAr[rowSize];
   int max = ar[0][0];

   for(r=0;r<rowSize;r++){
        for(c=0;c<colSize;c++){
            if(ar[r][c] > max){
                max = ar[r][c];
            }
        }

           maxAr[r] = max;
   }
   int min = maxAr[0];

   for(r=0; r<rowSize;r++){
        if(maxAr[r] < min){
            min = maxAr[r];
        }
   }

   return min;
}
