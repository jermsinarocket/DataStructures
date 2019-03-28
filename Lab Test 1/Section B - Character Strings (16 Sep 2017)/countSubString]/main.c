#include <stdio.h>
#include <string.h>

int countSubstring(char str[], char substr[]);

int main()  {
    char str[80],substr[80];

    printf("Enter the string: \n");
    gets(str);

    printf("Enter the substring: \n");
    gets(substr);

    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}

int countSubstring(char str[], char substr[]) {
   int i,j,count,count1=0;

   for(i=0; i<strlen(str);){
        j = 0;
        count = 0;

        while((str[i] == substr[j])){
            count++;
            j++;
            i++;
        }

        if(count == strlen(substr)){
            count1++;
            count = 0;
        }else{
            i++;
        }
   }

   return count1;
}
