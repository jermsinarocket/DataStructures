#include <stdio.h>
#include <stdlib.h>

int main()
{
    double P,I,R;

    printf("Enter the current:\n");
    scanf("%lf",&I);

    printf("Enter the resistance:\n");
    scanf("%lf",&R);

    P = pow(I,2)*R;

    printf("The power loss: %0.2lf", P);

    return 0;

}
