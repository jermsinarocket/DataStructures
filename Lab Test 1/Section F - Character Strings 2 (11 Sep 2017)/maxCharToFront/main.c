#include <stdio.h>

void maxCharToFront(char *str);

int main()  {

    char str[80];
    printf("Enter a string: \n");

    gets(str);
    printf("maxCharToFront(): ");

    maxCharToFront(str);
    puts(str);

    return 0;
}

void maxCharToFront(char *str)  {

    int i;
    int pointer = 0;
    char tempStr[50];
    char *tempStrPt = tempStr;

    for(i=1;i<strlen(str);i++){
        if(*(str+i) > *(str+pointer)){
            pointer = i;
        }
    }
    *tempStrPt = *(str+pointer);
    *tempStrPt++;

    for(i=0;i<strlen(str);i++){
        if(i != pointer){
            *tempStrPt = *(str+i);
            *tempStrPt++;
        }
    }
    *tempStrPt = '\0';

    strcpy(str,tempStr);
}


