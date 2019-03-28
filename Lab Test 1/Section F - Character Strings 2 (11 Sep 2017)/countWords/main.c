#include <stdio.h>

 int countWords(char *s);

 int main() {

   char str[50];

   printf("Enter the string: \n");
   gets(str);

   printf("countWords(): %d", countWords(str));
   return 0;
}

int countWords(char *s) {
   int i,count = 0,flag = 0;

   for(i = 0; i<strlen(s);i++){

       if(flag == 0 && *(s+i) == ' '){
        count++;
        flag = 1;
       } else if (flag == 1 & *(s+i) != ' '){
        flag = 0;
       }
   }
   count++;
   return count;
}
