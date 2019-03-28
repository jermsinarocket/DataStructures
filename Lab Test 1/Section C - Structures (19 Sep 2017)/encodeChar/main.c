#include <stdio.h>
#include <string.h>
typedef struct {
   char source;
   char code;
} Rule;
void encodeChar(Rule table[5], char *s, char *t);
int main()
{
   char s[80],t[80];
   Rule table[5] = {'a','d', 'b','z', 'z','a', 'd','b', '\0','\0' };

   printf("Source string: \n");
   gets(s);
   encodeChar(table,s,t);
   printf("Encoded string: %s", t);
   return 0;
}
void encodeChar(Rule table[5], char *s, char *t)
{
   int i,n;

  for(i = 0; i < strlen(s); i++){

        for(n = 0; n < 4; n++){
            if(*(s+i) == table[n].source){
                *(s+i) = table[n].code;
                break;
            }
        }
   }
   strcpy(t,s);
}
