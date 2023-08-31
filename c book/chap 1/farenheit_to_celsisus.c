#include <stdio.h>

int main() {

    int upper, lower; 
    int fahr, cel, step;

    fahr = lower;

    lower = 0;
    upper = 300;
    step = 20;

    while (fahr <= upper ) {

        // note that we have to multiply  by 5/9 because c does integer division, that means that divison truncates the decimal part... 5/9 = 0.5555... = 0
        cel = 5 * (fahr-32) / 9; // celsisus = 5/9 * (fahr-32)

        /*i have no clue what the printf line does */
        // update, %d is a format specifier, it's a placeholder for an integer value, the first %d is replaced by the value of fahr, the second %d is replaced by the value of cel
        // \t is a tab character, it's a whitespace character that moves the cursor to the next tab stop... sick
        printf("%d\t%d\n", fahr, cel); 

        fahr = fahr + step;


    }

    /* this time with floats */

    // float fahr2, cel2;
    // int upper2, lower2, step2;



    // return 0;
}



