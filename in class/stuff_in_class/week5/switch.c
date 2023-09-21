#include <stdio.h>

/* intro to switch statemetns */

int main(void) {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    // switch statements are kinda like an if statement, but multiplace options and exactly one will be executed, super readable too

    switch (x) {

        case 1: // if x is 1
            printf("x is 1\n");
            break; // break is needed to stop the switch statement from executing the next case
        
        case 2: 
            printf("x is 2\n");
            break;

        // if x is not 1 or 2, then the default case will be executed
        default:
            printf("x is not 1 or 2\n");
            break;

    }
    return 0;
    // neat stuff 
}