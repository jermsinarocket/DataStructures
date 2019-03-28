#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   struct circle {
      double radius;
      double x;
      double y;
   };
   int intersect(struct circle, struct circle);
   int contain(struct circle *, struct circle *);

   int main()
   {
      struct circle c1, c2;
      char repeat = 'y', dummychar;

      do {
         printf("Enter circle 1 (radius x y): \n");
         scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
         printf("Enter circle 2 (radius x y): \n");
         scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
         printf("intersect(): %d\n", intersect(c1, c2));
         printf("contain(): %d\n", contain(&c1, &c2));
         scanf("%c",&dummychar);
         printf("\nContinue ('y' or 'n'): \n");
         scanf("%c", &repeat);
      } while (repeat == 'y');

      return 0;
   }
   int intersect(struct circle c1, struct circle c2)
   {
      double a, b;
      int result;

      a = c1.x - c2.x;
      b = c1.y - c2.y;
      return (sqrt(a*a + b*b) <= (c1.radius + c2.radius));
   }

   int contain(struct circle *c1, struct circle *c2)
   {
     double a,b;
     int result;

     a = c1->x - c2 ->x;
     b = c1->y - c2 ->y;

     return (c1->radius >= sqrt(a*a + b*b) + c2->radius);
   }
