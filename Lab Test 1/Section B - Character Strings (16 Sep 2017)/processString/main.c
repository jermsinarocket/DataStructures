#include <stdio.h>
#include <string.h>

void processString(char *str, int *totVowels, int *totDigits);

int main() {

    char str[50];
    int totVowels, totDigits;

   printf("Enter the string: \n");
   gets(str);

   processString(str, &totVowels, &totDigits);

   printf("Total vowels = %d\n", totVowels);
   printf("Total digits = %d\n", totDigits);

   return 0;
}

void processString(char *str, int *totVowels, int *totDigits) {
    int i,j;
    *totDigits = 0;
    *totVowels = 0;
    int vowels[5] = {'a','e','i','o','u'};

    for(i = 0; i < strlen(str); i++){

        if(isdigit(*(str+i))){
            *totDigits+=1;
        }else{
            for(j=0;j<5;j++){
                if(tolower(*(str+i)) == vowels[j]){
                    *totVowels+=1;
                    break;
                }
            }
        }
    }
}
