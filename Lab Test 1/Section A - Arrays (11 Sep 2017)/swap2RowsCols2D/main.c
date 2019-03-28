#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void swap2Rows(int ar[][SIZE], int r1, int r2);
void swap2Cols(int ar[][SIZE], int c1, int c2);
void display(int ar[][SIZE]);

int main() {
    int array[SIZE][SIZE];
    int row1, row2, col1, col2;
    int i,j;

    printf("Enter the matrix (3x3): \n");
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
            scanf("%d", &array[i][j]);
    printf("Enter two rows for swapping: \n");
    scanf("%d %d", &row1, &row2);

    swap2Rows(array, row1, row2);
    printf("The new array is: \n");
    display(array);
    printf("Enter two columns for swapping: \n");
    scanf("%d %d", &col1, &col2);
    swap2Cols(array, col1, col2);
    printf("The new array is: \n");
    display(array);
    return 0;
}

void display(int ar[][SIZE]) {
    int l,m;
   for (l = 0; l < SIZE; l++) {
        for (m = 0; m < SIZE; m++)
        printf("%d ", ar[l][m]);
   printf("\n");
   }
}

void swap2Rows(int ar[][SIZE], int r1, int r2) {

    int tempAr[SIZE][SIZE];
    int r,c;

    for(r=0; r < SIZE; r++){
        for(c=0; c < SIZE; c++){
            tempAr[r][c] = ar[r][c];
        }
    }

    for(c=0; c < SIZE; c++){
       ar[r2][c] = ar[r1][c];
       ar[r1][c] = tempAr[r2][c];
    }

}

void swap2Cols(int ar[][SIZE], int c1, int c2) {
        int tempAr[SIZE][SIZE];
        int r,c;

    for(r=0; r < SIZE; r++){
        for(c=0; c < SIZE; c++){
            tempAr[r][c] = ar[r][c];
        }
    }

    for(r=0; r < SIZE; r++){
       ar[r][c2] = ar[r][c1];
       ar[r][c1] = tempAr[r][c2];
    }

}
