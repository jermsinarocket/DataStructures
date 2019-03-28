#include <stdio.h>
#include <string.h>

void insertChar(char *str1, char *str2);

int main()  {
    char a[80],b[80];
    printf("Enter a string: \n");
    gets(a);
    insertChar(a,b);

    printf("insertChar(): ");
    puts(b);

    return 0;
}

void insertChar(char *str1, char *str2) {

    int i,j = 1,count = 1;
    *(str2) = *(str1);

    for(i=1;i<=strlen(str1);){
        if(count == 3){
            *(str2+j) = '#';
            j++;
            count = 0;
        }else{
         *(str2+j) = *(str1+i);
          i++;
          j++;
          count++;
        }
    }
    *(str2+j) = '\0';
}
