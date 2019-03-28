#include <stdio.h>

void rPrintArReverse(int ar[], int size);

int main() {

   int ar[80],i,size;

   printf("Enter size: \n");
   scanf("%d", &size);

   printf("Enter %d numbers: \n", size);

   for (i = 0; i < size; i++)
    scanf("%d", &ar[i]);
   printf("rPrintArReverse(): ");
   rPrintArReverse(ar, size);
   return 0;
}

void rPrintArReverse(int ar[], int size) {
    int z;

    if(size>0){
        z = size-1;
        printf("%d ",ar[z]);
        rPrintArReverse(ar,z);
    }
}
