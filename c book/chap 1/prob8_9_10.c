#include <stdio.h>

int main () {

    // prob 8 wants us to count blanks, tabs, and newlines
    // blanks are represented by ' ', tabs by '\t', and newlines by '\n'
    // we can use a switch statement to check for these characters
    // we could also use a series of if statements, but that's not as clean

    int c, blanks, tabs, newlines;

    blanks = tabs = newlines = 0; // fancy way of initializing multiple variables to 0, how neat

    while ((c = getchar() != EOF)) { 
        switch (c) {
            case ' ':
                ++blanks;
                break;
            case '\t':
                ++tabs;
                break;
            case '\n':
                ++newlines;
                break;
            default: // things that aren't blanks, tabs, or newlines
                break;
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);

    // prob 9 has us copy the input to the output, then replace each string of one or more blanks with a single blank
    // ie like this: "hello    world" -> "hello world"
    // we can do this by checking if the current character is a blank, and if it is, check if the next character is also a blank
    // if it is, we can skip it, if it isn't, we can print it
    // we can use a boolean variable to keep track of whether or not we're in a string of blanks

    int inBlank;

    inBlank = 0; // 0 is false, 1 is true

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (inBlank == 0) {
                inBlank = 1;
                putchar(c);
            }
        } else {
            inBlank = 0;
            putchar(c);
        }
    } // neat

    // prob 10 has us replace tabs and backspaces with their escape sequences
    // we can do this by checking if the current character is a tab or backspace, and if it is, print the escape sequence

    while ((c = getchar()) != EOF ) {
        switch (c) {

            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            default:
                putchar(c);
                break;


        }
    
    }
    // cool stuff
    return 0;
}
