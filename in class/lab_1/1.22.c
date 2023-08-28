/*

1.22 LAB Part 3: Fixing errors in Pluto
The program contains syntax and logic errors. Fix the syntax errors in the Develop mode until the program executes. Then fix the logic errors.

Error messages are often long and technical. Do not expect the messages to make much sense when starting to learn a programming language. Use the messages as hints to locate the portion of the program that causes an error.

One error often causes additional errors further along in the program. For this exercise, fix the first error reported. Then try to run the program again. Repeat until all the compile-time errors have been corrected.

Hint: Pay attention to the one or two special lines that must appear at the beginning of the program. Unless those lines are included and are correct, the compiler will not be able to make sense of the code.

The correct output of the program is:

Is Pluto a planet?
Some people think so, but others don't.
The Moon's mass is 6 times Pluto's.
Not much of a planet, is it?
End the last output with a newline.

*/

#include <stdio.h>

int main() {
   
   
   //vars
   int proportion = 6;

   printf("Is Pluto a planet?\n");
   printf("Some people think so, but others don't.\n");
   printf("The Moon's mass is %d times Pluto's.\n", proportion);
   printf("Not much of a planet, is it?\n");

   return 0;
}
