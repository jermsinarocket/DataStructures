#include <stdio.h>
#define INIT_VALUE 10

int rStrcmp(char *s1, char *s2);

int main() {

    char source[40], target[40];
    int result=INIT_VALUE;

    printf("Enter a source string: \n");
    gets(source);

    printf("Enter a target string: \n");
    gets(target);

    result = rStrcmp(source, target);
    printf("rStrcmp(): %d", result);
    return 0;
}

int rStrcmp(char *s1, char *s2) {

     if(*s1 != '\0' && *s2 != '\0'){
            if(*s1 > *s2){
                return 1;
            }else if(*s1 < *s2 ){
                return -1;
            }else{
                *s1++;
                *s2++;
                 rStrcmp(s1, s2);
            }
     }else if( *s1 == '\0' && *s2 != '\0'){
        return -1;
     }else if( *s1 != '\0' && *s2 == '\0'){
        return 1;

     }else{
         return 0;
     }
}
