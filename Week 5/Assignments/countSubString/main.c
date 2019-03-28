#include <stdio.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
   char str[80],substr[80];
   int result=INIT_VALUE;

   printf("Enter the string: \n");
   gets(str);
   printf("Enter the substring: \n");
   gets(substr);
   result = countSubstring(str, substr);
   printf("countSubstring(): %d\n", result);
   return 0;
}
int countSubstring(char str[], char substr[])
{
    int count = 0;
    char *tmp = str;

    while(tmp = strstr(tmp,substr)){
        count++;
        tmp++;
    }

    return count;
   /* int i,j,l,l1,l2, count, count1;
    count = 0;
    count1 = 0;

   l1 = strlen(str);
   l2 = strlen(substr);

   for(i = 0; i < l1){
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
        else
            i++; */

   //}

   //return count1;
}
