#include <stdio.h>

/* intro to switch statemetns */

int main(void) {
    // int x;
    // printf("Enter a number: ");
    // scanf("%d", &x);

    // // switch statements are kinda like an if statement, but multiplace options and exactly one will be executed, super readable too

    // switch (x) {

    //     case 1: // if x is 1
    //         printf("x is 1\n");
    //         break; // break is needed to stop the switch statement from executing the next case
        
    //     case 2: 
    //         printf("x is 2\n");
    //         break;

    //     // if x is not 1 or 2, then the default case will be executed
    //     default:
    //         printf("x is not 1 or 2\n");
    //         break;


    // another switch example, taking grades from chars 
    char grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    printf("Enter the letter grades.\n");
    while ((grade=getchar()) != EOF) {
        switch (grade) {
            // multiple cases can be executed by the same statement
            case 'a':
            // no break statement here, so the next case will be executed
            case 'A':
                printf("90-100\n");
                ++aCount;
                break;

            case 'b':
            case 'B':
                printf("80-89\n");
                ++bCount;
                break;

            case 'c':
            case 'C':
                ++cCount;
                printf("70-79\n");
                break;

            case 'D':
            case 'd':
                printf("60-69\n");
                ++dCount;
                break;

            case 'f':
            case 'F':
                ++fCount;
                printf("0-59\n");
                break;
            
            case '\n': // getchar() will read the newline character, so we need to account for it.. just skip it
                break;
            

            default: // if none of the cases are executed, then the default case will be executed
                printf("invalid grade\n");
                break;
        }



    }

    printf("aCount: %d\n", aCount);
    printf("bCount: %d\n", bCount);
    printf("cCount: %d\n", cCount);
    printf("dCount: %d\n", dCount);
    printf("fCount: %d\n", fCount);
    
    return 0;
    // neat stuff 
}
