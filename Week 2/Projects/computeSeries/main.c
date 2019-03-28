#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, denominator = 1;
     float x,
     result = 1.0,
     numerator = 1.0;

     printf("Enter x: \n");
     scanf("%f", &x);

      for(n = 1; n < 10; n++){

        denominator *= n; //Denominator is not fixed
        printf("Denominator is : %.2f \n",denominator);
        numerator *= x; // Numerator is not fixed
        printf("Numerator is :%.2f \n",numerator);

         result += numerator/denominator;

      }

    printf("Result = %.2f\n",  result);
    return 0;
}
