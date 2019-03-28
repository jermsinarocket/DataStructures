#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary, merit;
    printf("Enter the salary: \n");
    scanf("%d", &salary);

    printf("Enter the merit: \n");
    scanf("%d", &merit);

    if(salary > 799 || (salary >= 700 && merit >= 20)){
        printf("The Grade: A \n");
    }
    else if (salary > 649 || (salary >= 600 && merit >=10 )){
        printf("The Grade: B \n");
    }
    else if (salary >= 500){
        printf("The Grade: C \n");
    }

   return 0;
}
