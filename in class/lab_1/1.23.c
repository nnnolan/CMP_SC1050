/*

1.23 LAB* Part 4 (Honors Only): Program: ASCII cat
Program Specifications Pictures made from keyboard characters are known as ASCII art and can be quite intricate. ASCII Art Archive provides examples. Write a program that reads a cat name (char*) and outputs the drawing using several printf statements.

Note: a backslash \ in a string acts as an escape character, such as with a newline \n. So, to print a single backslash, include two backslashes next to each other. Ex: The following prints a single backslash: printf("\\");


Note: This program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step to confirm progress.

Ex: If the input is:

Mittens
the output is:

      /\_/\
 /\  / o o \
//\\ \~(*)~/
`  \/   ^ /
   | \|| ||
   \ '|| ||
    \)()-())
My cat Mittens
Step 1 (2 pts). Write two output statements for the first two lines of the figure. Hint: The first line starts with 6 blank spaces before the first slash symbol. Submit for grading to confirm 1 test passes.

Step 2 (2 pts). Write two more output statements for the next two lines. Hint: The third line starts a slash symbol. Submit for grading to confirm 2 tests pass.

Step 3 (2 pts). Write three more output statements to complete the figure without the text label. Submit for grading to confirm 3 tests pass.

Step 4 (4 pts). Read from input the cat name (char*) and output the text label. Submit for grading to confirm all tests pass

*/

#include <stdio.h>

int main() {

   // every backslask has to be "\\" because of special characters, same thing w double quotes
   // i wonder if there is an easier way to accomplish this. 
   
   printf("      /\\_/\\\n");
   printf(" /\\  / o o \\\n");
   printf("//\\\\ \\~(*)~/\n");
   printf("`  \\/   ^ /\n");
   printf("   | \\|| ||\n");
   printf("   \\ '|| ||\n");
   printf("    \\)()-())\n");


   // cat name ^_^, 100 size should b plenty :p 
   char catName[100];
   
   //if this was real id prompt but nbd here
   scanf("%s", catName);
   printf("My cat %s\n", catName);

   return 0;
}
