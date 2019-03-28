#include <stdio.h>
#define SIZE 10
#define INIT_VALUE -1

int arRemove1D(int *size, int ar[], int num);
void display(int size, int ar[]);

int main() {
    int  ar[SIZE], size, i, num, result=INIT_VALUE;
    printf("Enter size (max is %d): \n", SIZE);

    scanf("%d", &size);
    printf("Enter %d data in ascending order: \n", size);

    for (i=0; i < size; i++)
        scanf("%d", &ar[i]);
    printf("Enter the integer to be removed: \n");
    scanf("%d", &num);
    result = arRemove1D(&size, ar, num);

    printf("arRemove1D(): ");

    if (result == 0)
        display(size, ar);
    else if (result == 1)
        printf("Array is empty\n");
    else if (result == 2)
        printf("The number does not exist\n");
    else
        printf("An error has occurred\n");

   return 0;
}

void display(int size, int ar[])  {
    int i;
    if (size==0)
        printf("Empty array\n");
   else    {
        for (i = 0; i < size; i++)
        printf("%d ", ar[i]);
   printf("\n");
   }
}
int arRemove1D(int *size, int ar[], int num)  {

    int i,result = 0,flag = 0;

    if(*size == 0){
        return 1;
    }
    for(i=0;i<*size;i++){
        if(ar[i] == num){
            result = 0;
            break;
        }else{
            result = 2;
        }
    }

    if(result == 2){
        return 2;
    }else{
      for(i=0;i<*size;i++){

        if(ar[i] == num && flag != 1){
           flag = 1;
        }
        if(flag == 1){
            ar[i] = ar[i+1];
        }
      }
    }

    *size-=1;
    return 0;
}
