#include <stdio.h>
#include <stdlib.h>

void rDigitValue2(int num, int k, int *result);

int main()
{
    int k;
    int number, digit;

    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("Enter k position: \n");
    scanf("%d", &k);

    rDigitValue2(number, k, &digit);

    printf("rDigitValue2(): %d\n", digit);
    return 0;
}

void rDigitValue2(int num, int k, int *result){

    if(k == 1 ){
        *result = (num%10);
    }else{
        rDigitValue2(num/10,k-1,result);
    }

}
