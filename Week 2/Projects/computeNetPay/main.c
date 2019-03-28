#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float tax, grossPay, netPay;

    printf("Enter hours of work: \n");
    scanf("%d", &hours);

    if(hours <= 40){
       grossPay =   hours * 6;
    }else{
       grossPay = (hours - 40)*9 + (40*6);
    }

    if(grossPay > 0 && grossPay <= 1000){

        tax = grossPay * 0.1;
    }else if (grossPay > 1000 && grossPay<= 1500){
        tax = 1000 * 0.1 + (grossPay - 1000) * 0.2;
    }else{
        tax = 1000 * 0.1 + 500 * 0.2 + (grossPay - 1500) * 0.3;
    }

    netPay = grossPay - tax;

    printf("Gross pay = %.2f\n", grossPay);
    printf("Tax = %.2f\n", tax);
    printf("Net pay = %.2f\n", netPay);

      return 0;
}

