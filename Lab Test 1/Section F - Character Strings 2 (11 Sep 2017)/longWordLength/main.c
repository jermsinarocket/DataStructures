#include <stdio.h>

int longWordLength(char *s);

int main()  {

    char str[80];

   printf("Enter a string: \n");
   gets(str);

   printf("longWordLength(): %d\n", longWordLength(str));
   return 0;
}


int longWordLength(char *s) {
    int i, max = 0, count = 0;

    for(i = 0;i<=strlen(s);i++){

        if(isalpha(*(s+i))){
            count++;
        } else{
         if(count > max){
            max = count;
          }
          count = 0;
        }
    }

    return max;
}
