#include <stdio.h>
#include <string.h>

struct student{
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total;  /* total = (testscore+examscore)/2 */
};

double average();

int main() {
    printf("average(): %.2f\n", average());
    return 0;
}

double average() {  /* Write your program code here */

    double totalaverage = 0;
    double personAverage = 0;
    int count = 0;


    struct student stud[50];


    printf("Enter Student Name: \n");
    gets(stud[count].name);

    while(strcmp(stud[count].name,"END") != 0){
        printf("Enter test score: \n");
        scanf("%lf",&stud[count].testScore);

         printf("Enter exam score: \n");
         scanf("%lf",&stud[count].examScore);

         stud[count].total = (stud[count].testScore + stud[count].examScore)/2;

         printf("Student %s total = %.2lf \n",stud[count].name,stud[count].total);

         totalaverage += stud[count].total;

         count++;

         printf("Enter Student Name: \n");
         scanf("\n");
         gets(stud[count].name);

    }

    totalaverage /= count;

    return totalaverage;
}
