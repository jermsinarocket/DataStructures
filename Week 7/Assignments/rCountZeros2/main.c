#include <stdio.h>
void rCountZeros2(int num, int *result);
int main()
{
   int number, result;

   printf("Enter the number: \n");
   scanf("%d", &number);
   rCountZeros2(number,&result);
   printf("rCountZeros2(): %d\n", result);
   return 0;
}
void rCountZeros2(int num, int *result)
{
     if(num < 10 && num == 0){
       *result = 1;
     }else if(num < 10 && num != 0){
       *result = 0;
     }else{
        if(num%10 == 0){
           rCountZeros2(num/10,result);
           *result =  *result + 1;
        }else{
           rCountZeros2(num/10,result);

        }
     }
}
