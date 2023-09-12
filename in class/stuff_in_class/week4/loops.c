#include <stdio.h>

int main() {

    int grade;
    int counter = 1;

    while (counter <= 10) {

        printf("c is so fun and so swag, the counter is at %d\n", counter);
        counter = counter + 1;
    }

    // now with a for loop
    // this should execute ten times, jsut like the while loop. more compact and standard tho
    // note that the declaration of i inside the loop, "int i = 0", only accesible inside the loop

    // furthermore, the statementes are seperated by ;, not , like in python

    for(int i = 0; i < 10; i++) {

        printf("c is so fun. i also know how to use for loops. the counter is at %d\n", i);

    }


    // fizz buzz, to 100
    // cs1050 is a miserable class i hope it actually starts to weed people out
    // cs majors 🤢🤢🤢🤢🤢🤢🤢🤢🤢🤢
    

    for (int i = 0; i<=100; i++) {


        if (i % 3 == 0 && i % 5) {

            printf("fizzbuzz\n");
        }

        if (i % 3 == 0) {

            printf("fizz\n");
        }

        if (i % 5 == 0) {
            printf("buzz\n");
        }

        else {
            printf("%d\n", i);
        }

    }
    return 0; 
}