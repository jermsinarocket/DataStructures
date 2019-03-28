#include <stdio.h>

void rFindMaxAr(int *ar, int size, int i, int *index);

int main()  {

    int ar[50],i,maxIndex=0,size;

   printf("Enter array size: \n");
   scanf("%d", &size);

   printf("Enter %d numbers: \n", size);

   for (i=0; i < size; i++)
    scanf("%d", &ar[i]);

   rFindMaxAr(ar,size,0,&maxIndex);
   printf("Max number: %d\n", ar[maxIndex]);

   printf("Index position: %d\n", maxIndex);
   return 0;
}

void rFindMaxAr(int *ar, int size, int i, int *index)  {
    int end = size-1;

    if(end >= 0){
        if(*(ar+end) > i){

            i = *(ar+end);
            *index = end;
        }
           rFindMaxAr(ar,end,i,index);

    }

}
