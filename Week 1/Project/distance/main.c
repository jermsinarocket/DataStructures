#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    double distance;

    printf("Enter first point x1 y1: \n");
    scanf("%d%d",&x1,&y1);

    printf("Enter first point x2 y2: \n");
    scanf("%d%d",&x2,&y2);

    distance = sqrt(pow((x1-x2),2)+pow(y1-y2,2));

    printf("The distance is %.2lf",distance);

    return 0;
}
