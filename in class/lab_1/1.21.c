/*

The program contains syntax and logic errors. Fix the syntax errors in the Develop mode until the program executes. Then fix the logic errors.

Error messages are often long and technical. Do not expect the messages to make much sense when starting to learn a programming language. Use the messages as hints to locate the portion of the program that causes an error.

One error often causes additional errors further along in the program. For this exercise, fix the first error reported. Then try to run the program again. Repeat until all the compile-time errors have been corrected.

Hint: Pay attention to the one or two special lines that must appear at the beginning of the program. Unless those lines are included and are correct, the compiler will not be able to make sense of the code.

The correct output of the program is:

Sides: 12 10
Perimeter: 44


*/

#include <stdio.h>

int main() {
   
   int longSide;
   int shortSide;
   int perimeter;
   
   longSide = 12;
   shortSide = 10;
   
   int middle;
   middle = longSide + shortSide;

   perimeter = 2 * middle;

   printf("Sides: %d", longSide);
   printf(" %d\n", shortSide);
   printf("Perimeter: %d\n", perimeter);
   
   return 0;
}
