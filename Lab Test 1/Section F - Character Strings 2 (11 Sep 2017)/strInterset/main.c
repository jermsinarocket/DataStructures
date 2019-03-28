#include <stdio.h>

void strInterset(char *str1, char *str2, char *str3);

int main()  {
    char str1[50],str2[50],str3[50];

    printf("Enter str1: \n");
    scanf("%s",str1);

    printf("Enter str2: \n");
    scanf("%s",str2);

    strInterset(str1, str2, str3);
    if (*str3 == '\0')
        printf("strIntersect(): null string\n");
    else
        printf("strIntersect(): %s\n", str3);
    return 0;
}

void strInterset(char *str1, char *str2, char *str3) {
   int len1 = strlen(str1);
   int len2 = strlen(str2);
   int i,j;

   for(i = 0;i<len1;i++){
      for(j=0;j<len2;j++){
        if(*(str1+i) == *(str2+j)){
            *str3 = *(str1+i);
            *str3++;
        }
      }
   }

   *str3 = '\0';
}
