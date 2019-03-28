#include <stdio.h>
#define INIT_VALUE -1

int palindrome(char *str);

int main() {
    char str[80];
    int result = INIT_VALUE;

    printf("Enter a string: \n");
    gets(str);

    result = palindrome(str);
    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else
        printf("An error\n");

    return 0;
}

int palindrome(char *str) {
   int i,result = 0;
   int len = strlen(str);

   for(i = 0; i<len/2;i++,len--){
        if(*(str+i) == *(str+len-1)){
            result = 1;
        }else{
            result = 0;
            break;
        }
   }

   return result;
}

