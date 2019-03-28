#include <stdio.h>

int compareStr(char *s, char *t);

int main()  {

    char a[80],b[80];

   printf("Enter the first string: \n");
   gets(a);


   printf("Enter the second string: \n");
   gets(b);

   printf("compareStr(): %d\n", compareStr(a,b));
   return 0;
}

int compareStr(char *s, char *t) {
     int value;

     while(*s == *t){
        *s++;
        *t++;
     }

     if(*s < *t){
         value = *(s) - *(t);
     }else{
         value = *(s) - *(t);
      }

     return value;
}
