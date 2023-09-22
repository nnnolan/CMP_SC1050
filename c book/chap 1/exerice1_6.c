#include <stdio.h>

int main() {

    int c;

    // more readable, and condense  
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    // verify that EOF is 0 or 1
    printf("EOF is %d\n", getchar() != EOF);
    // why did this print -1? 


    // print the value of EOF
    printf("EOF: %d", EOF);
    return 0;

}