#include <stdio.h>

int main() {

    // int upper, lower; 
    // int fahr, cel, step;

    // fahr = lower;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // while (fahr <= upper ) {

    //     // note that we have to multiply  by 5/9 because c does integer division, that means that divison truncates the decimal part... 5/9 = 0.5555... = 0
    //     cel = 5 * (fahr-32) / 9; // celsisus = 5/9 * (fahr-32)

    //     /*i have no clue what the printf line does */
    //     // update, %d is a format specifier, it's a placeholder for an integer value, the first %d is replaced by the value of fahr, the second %d is replaced by the value of cel
    //     // \t is a tab character, it's a whitespace character that moves the cursor to the next tab stop... sick
    //     printf("%d\t%d\n", fahr, cel); 

    //     fahr = fahr + step;


    // }

    // /* this time with floats */

    // float fahr2, cel2;
    // int upper2, lower2, step2;

    // lower2 = 0;
    // upper2 = 300;
    // step2 = 20;

    // fahr = lower;

    // /* exercise 1-3, print a heading above the table
    // seems easy enough, \t for a spacing and just write something*/

    // printf("Farenheit\tCelsisus\n");
    // while (fahr<=upper) {


    //     /* note how we don't have to multiply by 5/9 because we're using floats, andfloats can have decimal values */
    //     cel2 = (5.0/9.0) * (fahr2-32.0);

    //     /* 
    //     the 3.0f\t%6.1f is a format specifier, it's a placeholder for a float value, the first %3.0f is replaced by the value of fahr2,
    //      the second %6.1f is replaced by the value of cel2
    //      % tells format specifier, 3 gives the minimum width, and .0 gives the number of decimal places, zero in this case, f is the type of value, float, \t is a tab character, it's a whitespace character that moves the cursor to the next tab stop... sick
    //     */
    //     printf("%3.0f\t%6.1f\n", fahr2, cel2);

    // }


    /* exercise 1-4, write the inverse, celsisus to farenheit now 
    reassigning vars bc busy*/

    float cel, fahr;
    int upper, lower, step;

    // using step size of ten and upper of 150 c, just cause it makes more sense realsitically
    // but im also a nihilistic programmer so who knows if anything maekes sense at all o_o
    // lower = 0;
    // upper = 150;
    // step = 10;

    // cel = lower;

    // while (cel <= upper) {

    //     fahr = cel *1.8 + 32;

    //     printf("%3.0f\t%6.1f\n", cel, fahr);

    //     cel = cel + step;


    // }
    // very nice ^_^   

    // for loop this time
    
    // int fahr; // note the int

    for (fahr = 0; fahr<= 300; fahr = fahr + 20) {

        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    }

    return 0;
}



