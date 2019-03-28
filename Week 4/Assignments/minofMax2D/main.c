#include <stdio.h>
#define SIZE 10

int minofMax2D(int ar[][SIZE], int rowSize, int colSize);

int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j,min;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);

    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);

    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);

    for(i=0; i < rowSize; i++){
        for(j=0; j < colSize; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    min = minofMax2D(ar,rowSize, colSize);

    printf("minOfMax2D(): %d\n", min);

    return 0;
}

int minofMax2D(int ar[][SIZE], int rowSize, int colSize){

    int r,c,min;

    int maxAr[colSize];


    for(r = 0; r < rowSize; r++){

            maxAr[r] = ar[r][0];

            for(c =0; c < colSize; c++){

                if(ar[r][c] > maxAr[r]){

                    maxAr[r] = ar[r][c];
                }

            }


    }

    min = maxAr[0];

    for(c = 0; c < colSize; c++){
            if(maxAr[c] < min){
                min = maxAr[c];
            }
    }

    return min;

}
