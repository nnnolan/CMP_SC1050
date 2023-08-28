/*

The program contains syntax and logic errors. Fix the syntax errors in the Develop mode until the program executes. Then fix the logic errors.

Error messages are often long and technical. Do not expect the messages to make much sense when starting to learn a programming language. Use the messages as hints to locate the portion of the program that causes an error.

One error often causes additional errors further along in the program. For this exercise, fix the first error reported. Then try to run the program again. Repeat until all the compile-time errors have been corrected.

Hint: Pay attention to the one or two special lines that must appear at the beginning of the program. Unless those lines are included and are correct, the compiler will not be able to make sense of the code.

Ex: the If input is:

2 3 4
the output is:

Last night the Dodgers scored 2,
the Yankees scored 3, and
the Cubs scored 4.

*/

#include <stdio.h>

int main() {
   
   int dodgers;
   int yankees;
   int cubs;
   
   scanf("%d", &dodgers);
   scanf("%d", &yankees);
   scanf("%d", &cubs);
   
   
   printf("Last night the Dodgers scored %d,\n", dodgers);
   printf("the Yankees scored %d, and\n", yankees);
   printf("the Cubs scored %d.\n", cubs);
   
   return 0;
}
