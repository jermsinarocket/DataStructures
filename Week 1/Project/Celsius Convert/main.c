#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Fahrenheit;
    float Celsius;

    printf("Enter the temperature in degree F:\n");
    scanf("%f", &Fahrenheit); //& is only used for Scan as assignment to the variable

    Celsius = (5.0/9)*(Fahrenheit-32);

    printf("Converted Degree in Celsius is: %.2f\n",Celsius);
    return 1;
}
