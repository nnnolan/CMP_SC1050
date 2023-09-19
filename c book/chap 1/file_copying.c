#include <stdio.h>

main() {

    // copy the input to output, first iteration

    int c;

    c = getchar(); // getchar() is a function that reads the next input character from a text stream and returns that as its value
    while (c != EOF) { // this loop will continue until the end of file character is reached
        putchar(c); // putchar() is a function that prints a character each time it's called
        c = getchar();
    }


    // faster version, second iteration

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}