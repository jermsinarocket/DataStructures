#include <stdio.h>
typedef struct {
   char name[20];
   int age;
} Person;
Person findMiddleAge(Person *p);
int main()
{
   Person man[3], middle;
   int i;

   for (i=0; i<3; i++) {
      printf("Enter person %d: \n", i+1);
      scanf("%s", man[i].name);
      scanf("%d", &man[i].age);
   }
   middle = findMiddleAge(man);
   printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
   return 0;
}
Person findMiddleAge(Person *p)
{
    int a,b,c,i = 0;
    a = p[i++].age;
    b = p[i++].age;
    c = p[i].age;

    if( (b < a && a < c) || (c < a && a < b) )
        return p[0];

    else if( (a < b && b < c) || (c < b && b < a) )
        return p[1];

    else
        return p[2];

}

