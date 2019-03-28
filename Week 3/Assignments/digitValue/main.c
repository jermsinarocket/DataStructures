#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);


int main()
{
 int num, digit, result=-1;

 printf("Enter the number: \n");
 scanf("%d", &num);
 printf("Enter k position: \n");
 scanf("%d", &digit);
 printf("digitValue1(): %d\n", digitValue1(num, digit));
 digitValue2(num, digit, &result);
 printf("digitValue2(): %d\n", result);
 return 0;
}

int digitValue1(int num, int k)
{
    int digit = 0, count = 0;

    for(count=0; count < k; count++){

        digit = num%10;
        num = num/10;
    }

    return digit;
}

void digitValue2(int num, int k, int *result)
{
    int count = 0;
    *result = 0;

    for(count=0; count < k; count++){

        *result = num%10;
        num = num/10;
    }

}
