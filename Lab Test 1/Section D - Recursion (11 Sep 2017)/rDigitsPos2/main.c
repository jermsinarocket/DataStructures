#include <stdio.h>

void rDigitPos2(int num, int digit, int *pos);

int main() {
    int number, digit, result;

   printf("Enter the number: \n");
   scanf("%d", &number);

   printf("Enter the digit: \n");
   scanf("%d", &digit);

   rDigitPos2(number, digit, &result);
   printf("rDigitPos2(): %d\n", result);

    return 0;
}

void rDigitPos2(int num, int digit, int *pos) {

    if(num%10 == digit){
        *pos = 1;
    }else if(num < 10){
        *pos = 0;
    }else{
        rDigitPos2(num/10,digit,pos);
        if(*pos > 0){
            *pos += 1;
        }else{
            *pos = 0;
        }
    }
}
