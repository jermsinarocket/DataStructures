#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main()  {
    int ar[50],i,size;
    printf("Enter array size: \n");

    scanf("%d", &size);

    printf("Enter %d data: \n", size);

    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);

    printf("swapMinMax1D(): ");

    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}

void swapMinMax1D(int ar[], int size) {

    int min = ar[0];
    int max = ar[0];
    int poMin = 0,poMax = 0;
    int i;

    for(i=0;i<size; i++){

        if(ar[i] > max){
            max = ar[i];
            poMax = i;
        }else if(ar[i] < min){
            min = ar[i];
            poMin = i;
        }
    }

    ar[poMin] = max;
    ar[poMax] = min;

}

