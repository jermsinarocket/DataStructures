#include <stdio.h>
#define SIZE 10

void compress2D(int data[SIZE][SIZE]);

int main()  {
    int data[SIZE][SIZE];
    int i,j;

   printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);

   for (i=0; i<SIZE; i++)
    for (j=0; j<SIZE; j++)
    scanf("%d", &data[i][j]);

   printf("compress2D(): ");
   compress2D(data);
   return 0;
}

void compress2D(int data[SIZE][SIZE]) {
    int r,c;
    int count = 1;
    int printAr[20][20];
    int j = 0;
    printf("\n");

    for(r=0;r<SIZE;r++){

        for(c=0;c<SIZE;c++){


             if(data[r][c] == data[r][c+1] && (c+1) < SIZE){
                count++;
             }else{
                printAr[r][j++] = data[r][c];
                printAr[r][j++] = count;
                if(c == SIZE-1 && j < 20){
                    while(j <20){
                            printAr[r][j++] = 11;
                    }
                }
                count = 1;
             }

        }
        j = 0;
    }

        for(r = 0; r < SIZE; r++){
            for(c = 0 ; c < 20; c++){
                if(printAr[r][c] != 11){
                    printf("%d ", printAr[r][c]);
                }else{
                    printf("dummy ");
                }
            }
            printf("\n");
        }



}
