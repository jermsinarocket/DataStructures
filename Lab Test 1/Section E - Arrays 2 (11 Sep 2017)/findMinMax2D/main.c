#include <stdio.h>
#define SIZE 5

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);

int main() {
    int A[5][5];
    int i,j,min,max;

    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
        scanf("%d", &A[i][j]);
    findMinMax2D(A, &min, &max);


    printf("min = %d\nmax = %d", min, max);
    return 0;
}

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max) {
   *min = ar[0][0];
   *max = ar[0][0];

   int r,c;

   for(r = 0; r< SIZE; r++){
    for(c=0; c<SIZE; c++){

        if(ar[r][c] < *min){
            *min = ar[r][c];
        }
        if(ar[r][c] > *max){
            *max = ar[r][c];
        }
    }
   }
}
