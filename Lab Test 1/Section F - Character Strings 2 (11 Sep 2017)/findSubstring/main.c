#include <stdio.h>
#define INIT_VALUE -1

int findSubstring(char *str, char *substr);

int main() {
    char str[40], substr[40];
    int result = INIT_VALUE;

   printf("Enter the string: \n");
   gets(str);

   printf("Enter the substring: \n");
   gets(substr);
   result = findSubstring(str, substr);
  if (result == 1)
  printf("findSubstring(): Is a substring\n");
  else if ( result == 0)
    printf("findSubstring(): Not a substring\n");
  else
    printf("findSubstring(): An error\n");
  return 0;
}

int findSubstring(char *str, char *substr)   {
   int sublen = 0;
   int strlen = 0;
   int i,j,count;

   for(strlen=0; *(str+strlen)!= '\0'; ++strlen);

   for(sublen=0; *(substr+sublen)!= '\0'; ++sublen);

   for(i = 0;i < strlen;){
        j= 0;
        count = 0;

        while (*(str+i) == *(substr+j))
        {
            count++;
            i++;
            j++;
        }
        if (count == sublen && sublen!=0)
        {
            return 1;
        }
        else{
            i++;
        }
   }

   return 0;
}