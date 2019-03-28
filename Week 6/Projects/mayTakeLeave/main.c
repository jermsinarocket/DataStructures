#include <stdio.h>
#define INIT_VALUE 1000
typedef struct {
   int id;           /* staff identifier */
   int totalLeave;   /* the total number of days of leave allowed */
   int leaveTaken;   /* the number of days of leave taken so far */
} leaveRecord;

int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);
int main()
{
   leaveRecord listRec[10];
   int len;
   int id, leave, canTake=INIT_VALUE;

   getInput(listRec, &len);
   printList(listRec, len);
   printf("Please input id, leave to be taken: \n");
   scanf("%d %d", &id, &leave);
   canTake = mayTakeLeave(listRec, id, leave, len);
   if (canTake == 1)
      printf("The staff %d can take leave\n", id);
   else if (canTake == 0)
      printf("The staff %d cannot take leave\n", id);
   else if (canTake == -1)
      printf("The staff %d is not in the list\n", id);
   else
      printf("Error!");
   return 0;
}
void printList(leaveRecord list[], int n)
{
   int p;

   printf("The staff list:\n");
   for (p = 0; p < n; p++)
      printf ("id = %d, totalleave = %d, leave taken = %d\n",
         list[p].id, list[p].totalLeave, list[p].leaveTaken);
}
void getInput(leaveRecord list[], int *n)
{
	int total;
	*n = 0;

	printf("Enter the number of staff records: \n");
	scanf("%d", &total);

	while( (*n) != total){
        printf("Enter id, totalleave, leavetaken: \n");
        scanf("%d %d %d", &list[*n].id, &list[*n].totalLeave, &list[*n].leaveTaken);

        (*n)++;
	}

}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n)
{
	int i;

	for(i = 0; i < n; i++ ){
        if(list[i].id == id){
            return (list[i].totalLeave >= (list[i].leaveTaken + leave));
        }
	}
	return -1;
}
