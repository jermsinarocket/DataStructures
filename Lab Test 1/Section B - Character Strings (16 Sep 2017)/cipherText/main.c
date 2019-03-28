#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *cipher(char *s);
char *decipher(char *s);

int main() {
    char str[80], *q;
    int length;

    printf("Enter the string: \n");
    gets(str);
    printf("To cipher: %s -> ", str);

    q = cipher(str);
    printf("%s\n", str);
    printf("To decipher: %s -> ", str);

   q = decipher(str);
   printf("%s\n", str);
   return 0;
}

char *cipher(char *s)   {
    int i;

    for(i = 0; i<strlen(s);i++){
        if(!isdigit(s) && *(s+i) != ' '){

            if(tolower(*(s+i)) == 'z'){
                *(s+i)-= 25;
            }else{
                *(s+i)+=1;
            }
        }
    }
    return s;
}

char *decipher(char *s)   {
    int i;
    for(i = 0; i<strlen(s);i++){
        if(!isdigit(s) && *(s+i) != ' '){
            if(tolower(*(s+i)) == 'a'){
                *(s+i)+= 25;
            }else{
                *(s+i)-=1;
            }
        }
    }
}
