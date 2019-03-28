#include <stdio.h>
#include <math.h>

int main()
{
 float x,y;
 int a1,b1,c1,a2,b2,c2;

 printf("Please input values for a1,b1,c1,a2,b2,c2:\n");
 scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);

 x = ((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
 y= ((a1*c2)-(a2*c1)) / ((a1*b2)-(a2*b1));

 printf("The value of X is: %0.2f\n",x);
 printf("The value of Y is: %0.2f\n",y);

 return 0;
}

