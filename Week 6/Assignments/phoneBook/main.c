#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[20];
   char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);

int main()
{
   PhoneBk s[MAX];
   char t[20];
   int size;

   size = readin(s);
   printf("Enter search name: \n");
   gets(t);
   search(s,size,t);
   return 0;
}
int readin(PhoneBk *p)
{
   PhoneBk chk = {'#'};

   int i;
   char a = '#';
   printf("Enter name: \n");
   gets((*p).name);

   i = 0;

   while(strcmp((*(p+i)).name,chk.name) != 0){
      printf("Enter tel: \n");
      gets((*(p+i)).telno);
      i++;

        printf("Enter name: \n");
        gets((*(p+i)).name);
   }

    return i;
}
void search(PhoneBk *p, int size, char *target)
{
    int i;
    int find = 0;
    for(i = 0; i < size;i++){
        if(strcmp((*(p+i)).name,target) == 0){
            printf("Name = %s, Tel = %s",(*(p+i)).name,(*(p+i)).telno);
            find = 1;
            break;
        }
    }

    if(find == 0){
        printf("Name not found!");
    }

}
