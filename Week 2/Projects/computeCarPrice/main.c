#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list, coe = 0, cat;
    double discounted, luxury = 0, gst, total;

    printf("Please enter the list price: \n");
    scanf("%d", &list);

    printf("Please enter the category: \n");
    scanf("%d", &cat);

    if(list <= 0 ){

        printf("Invalid Price \n");
        return 0;
    }
    if(cat < 1 || cat > 4){

        printf("Invalid Cat \n");
        return 0;
    }

    discounted = list * 0.9; //discounted price'

    if(discounted > 100000){
        luxury = discounted * 10;  //Luxury Tax
    }

    gst = discounted * 0.03; // GST

    switch(cat){
        case 1:
            coe = 70000;
            break;

        case 2:
            coe = 8000;
            break;

        case 3:
            coe = 23000;
            break;

        case 4:
            coe = 600;
            break;

    }

    total = discounted + luxury + gst + coe;


   printf("Total price is $%.2lf\n", total);
   return 0;
}
