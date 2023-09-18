#include <stdio.h>

int main(void) {

   int speed;
   int limit;
   int speedDifference;
   
   scanf("%d %d", &limit, &speed);
   
   
   speedDifference = speed - limit;

   if (speedDifference <= -10) {
      printf("50");
   }
   else if (speedDifference >= 6 && speedDifference <= 20) {
      printf("75");
   }
   else if (speedDifference >= 21 && speedDifference <= 40) {
      printf("150");
   }
   else if (speedDifference >= 41) {
      printf("300");
   }
   else {
      printf("0");
   }
   return 0;
}
