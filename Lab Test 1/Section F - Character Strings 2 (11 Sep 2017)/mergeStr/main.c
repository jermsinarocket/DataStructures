#include <stdio.h>
#include <string.h>

void mergeStr(char *a, char *b, char *c);

int main()  {

    char a[80],b[80];
    char c[80];

   printf("Enter the first string: \n");
   gets(a);

   printf("Enter the second string: \n");
   gets(b);

   mergeStr(a,b,c);
   printf("mergeStr(): ");

    puts(c);
    return 0;
}

void mergeStr(char *a, char *b, char *c)  {
      char temp;

      strcpy(c,a);
      strcat(c,b);

      int l= strlen(c);
      int i,j;

      for(i=1;i<l;i++)
        for(j=0;j<l-i;j++)
            if(*(c+j)>*(c+j+1)){
                temp=*(c+j);
                *(c+j)=*(c+j+1);
               *(c+j+1) = temp;
             }
}
