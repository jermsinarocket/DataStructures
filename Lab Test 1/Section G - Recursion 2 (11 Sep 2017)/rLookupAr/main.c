#include <stdio.h>

int rLookupAr(int array[], int size, int target);

int main() {

    int numArray[80];
    int target, i, size;

   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d numbers: \n", size);

   for (i=0; i < size; i++)
    scanf("%d", &numArray[i]);
   printf("Enter the target number: \n");
   scanf("%d", &target);

   printf("rLookupAr(): %d", rLookupAr(numArray, size, target));
   return 0;
}

int rLookupAr(int array[], int size, int target) {

    int end = size-1;

    if(end >= 0 ){
            if (array[end] == target){
                return end;
            }else{
               rLookupAr(array,end,target);
            }
    }
    return -1;

}
