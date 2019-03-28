#include <stdio.h>

void rReverseDigits(int num, int *result);

int main()  {
    int result=0, number;
    printf("Enter a number: \n");

    scanf("%d", &number);
    rReverseDigits(number, &result);

    printf("rReverseDigits(): %d\n", result);
    return 0;
}

void rReverseDigits(int num, int *result) {
   int r;

   if(num){
        r = num%10;
        *result = *result*10+r;
        rReverseDigits(num/10,result);
   }

}
