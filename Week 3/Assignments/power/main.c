#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
 int power;
 float number, result=-1;

 printf("Enter the number and power: \n");
 scanf("%f %d", &number, &power);
 printf("power1(): %.2f\n", power1(number, power));
 power2(number,power,&result);
 printf("power2(): %.2f\n", result);
 return 0;
}

float power1(float num, int p)
{
  float pow1;

  pow1 = pow(num,p);

  return pow1;
}

void power2(float num, int p, float *result)
{
   *result = 0;

   *result = pow(num,p);
}
