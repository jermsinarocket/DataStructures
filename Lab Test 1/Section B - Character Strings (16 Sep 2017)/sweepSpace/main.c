#include <stdio.h>
#include <string.h>

char *sweepSpace(char *str);

int main() {
    char str[80];
    printf("Enter the string: \n");

    gets(str);

    printf("sweepSpace(): %s\n", sweepSpace(str));
    return 0;
}

char *sweepSpace(char *str) {
   char *output;
   output = malloc(strlen(str)+1);

    int i=0, j=0;
    for (i = 0, j = 0; i<strlen(str); i++,j++)
    {
        if (str[i]!=' ')
            output[j]=str[i];
        else
            j--;
    }

    output[j] ='\0';
    return output;

}

