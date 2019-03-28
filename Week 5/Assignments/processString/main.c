#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
   char str[50];
   int totVowels, totDigits;

   printf("Enter the string: \n");
   gets(str);
   processString(str, &totVowels, &totDigits);
   printf("Total vowels = %d\n", totVowels);
   printf("Total digits = %d\n", totDigits);
   return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
   int i,k;

   char cmp[] = "aeiou";

   for(i = 0; i < strlen(str); i++){

       if(*(str+i) != '\0'){

            if(isdigit(*(str+i))){

               *totDigits += 1;

             }else if(isalpha(*(str+i))){

                 for(k = 0; k < strlen(cmp); k++){

                    if(tolower(*(str+i)) == tolower(cmp[k])){

                        *totVowels += 1;
                    }
                 }

            }

       }

   }
}
