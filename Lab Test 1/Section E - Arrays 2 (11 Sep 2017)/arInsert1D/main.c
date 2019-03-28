#include <stdio.h>
#define SIZE 10
#define INIT_VALUE -1

int arInsert1D(int *size, int ar[], int num);
void display(int size, int ar[]);

int main() {
    int  ar[SIZE], size, i, num, result = INIT_VALUE;
    printf("Enter size (max is %d): \n", SIZE);

    scanf("%d", &size);
    printf("Enter %d data in ascending order: \n", size);

    for (i=0; i < size; i++)
        scanf("%d", &ar[i]);
    printf("Enter an integer to insert: \n");

    scanf("%d", &num);
    printf("arInsert1D(): ");

    result = arInsert1D(&size, ar, num);

    if (result == 0)
        display(size, ar);
    else if (result == 1)
        printf("The array is full\n");
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

int arInsert1D(int *size, int ar[], int num)  {
    if(*size == SIZE){
        return 1;

    }else{
        int i = *size-1;

        while(num<ar[i] && i>=0){
            ar[i+1] = ar[i];
            i--;
        }
        ar[i+1] = num;
        *size+=1;
        return 0;
    }
}

