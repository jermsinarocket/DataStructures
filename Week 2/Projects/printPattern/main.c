#include <stdio.h>


int main()
{
   int row, col, height;
   int num = 0;
   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("Pattern: \n");

   for(row = 0; row < height; row++){

      for(col = 0; col < row+1; col++){ // Control number of cols to print

        printf("%d",num+1);
      }
       num = (num + 1) % 3;
     // print up to number 3 1%3 = 1, 2%3 = 2
      printf("\n");



   }

   return 0;
}
