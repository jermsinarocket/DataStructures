#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
 int x,y,result=-1;
 printf("Enter 2 numbers: \n");
 scanf("%d %d", &x, &y);
 printf("gcd1(): %d\n", gcd1(x, y));
 gcd2(x,y,&result);
 printf("gcd2(): %d\n", (void*)result);
 return 0;
}
int gcd1(int num1, int num2)
{
    int gcd;

    while(num1!= num2)
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    gcd = num1;
    return gcd;
}
void gcd2(int num1, int num2, int *result)
{

    *result = 0;


    while(num1!= num2)
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    *result = num1;
}
