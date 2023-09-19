#include <stdio.h>

// defines gives symbolic constants, so we can use them in place of numbers, so we can change them easily
// more readable, and easier to debug

#define LOWER 0
#define UPPER 300
#define STEP 20

int main () {

 
    // print reverse, 300 to 0 degrees using the for loop

    int fahr;

    for (fahr=LOWER; fahr<=UPPER; fahr = fahr + STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }

    return 0;



}