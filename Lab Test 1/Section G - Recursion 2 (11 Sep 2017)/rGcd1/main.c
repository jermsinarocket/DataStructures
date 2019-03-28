#include <stdio.h>

int rGcd1(int num1, int num2);

int main() {

  int n1, n2;

   printf("Enter 2 numbers: \n");
   scanf("%d %d", &n1, &n2);

   printf("rGcd1(): %d\n", rGcd1(n1, n2));

   return 0;
}

int rGcd1(int num1, int num2) {
     if (num2 != 0 && num1 != 0)
       return rGcd1(num2, num1%num2);
    else
       return num1;
}
