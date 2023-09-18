#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   // bool isLeapYear = false;
   
   scanf("%d", &inputYear);
   if (inputYear % 100 == 0){
      if (inputYear % 400 == 0){
         printf("%d - leap year\n", inputYear);
      }
      else{
         printf("%d - not a leap year\n", inputYear);
      }
      
   }
      // bool is set to false already so no need to check
    // this might be the worst code ive ever written
   else if (inputYear % 4 == 0){
      
      printf("%d - leap year\n", inputYear);
      
   }
   else {
      printf("%d - not a leap year\n", inputYear);
   }
      
   /* Type your code here. */

   return 0;
}