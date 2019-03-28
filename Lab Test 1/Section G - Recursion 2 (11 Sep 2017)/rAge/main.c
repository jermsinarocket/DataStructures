#include <stdio.h>
#include <stdlib.h>

int rAge(int studRank);
int main()
{
    int studRank;

    printf("Enter student rank: \n");
    scanf("%d",&studRank);

    printf("rAge(): %d\n", rAge(studRank));
    return 0;
}

int rAge(int studRank){

    if(studRank != 1){

        return  2 + (rAge(studRank -1));

    }else{

         return 10;
    }

}
