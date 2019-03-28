#include <stdio.h>

int rNumDigits1(int num);

int main() {

    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rNumDigits1(): %d\n", rNumDigits1(number));

    return 0;
}

int rNumDigits1(int num) {

    if(num > 10){
        return 1 + rNumDigits1(num/10);

    }else{
        return 1;
    }
}

