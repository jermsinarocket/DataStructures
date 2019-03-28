#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{
    double volume,surface_area,radius,height;

    printf("Enter the radius:\n");
    scanf("%lf",&radius);

    printf("Enter the height:\n");
    scanf("%lf",&height);

     volume = 3.1416 * pow(radius,2) * height;
     surface_area = (2*PI*radius*height)+(2*PI*pow(radius,2));


     printf("The volume is: %0.2lf \n" , volume);
     printf("The surface area is: %0.2lf" , surface_area);


    return 0;
}
