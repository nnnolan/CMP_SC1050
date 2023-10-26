#include <stdio.h>


int main() {

    // arrays are collections of elements of the same type
    int my_array[10]; // creates an array of 10 ints, the first index is 0, the last index is 9
    // be careful though because we haven't defined what is in the array, so it could be anything

    // we can also define arrays without specificying the size
    int another_array[] = {1, 2, 3, 4, 5}; // this will create an array of size 5

    // we can also define arrays with specific values
    int yet_another_array[5] = {1, 2, 3, 4, 5}; // this will create an array of size 5

    // doesnt have to be ints
    char my_char_array[10]; // creates an array of 10 chars, the first index is 0, the last index is 9, usually just used for strings

    char name[] = "Foo"; // this will create an array of size 4, the last index is 3, the null character is automatically added to the end of the string
    printf("%s\n", name); // this will print out the string "Foo"
    printf("%c\n", name[4]); // this will print out the null character

    int my_int_array[5] = {0, 1, 2}; // this will create an array of size 5, the rest of the elements will be 0's because we didn't specify what they are
    int example_int_array[5] = {1}; //like the top, even though the first array index is 1, the rest of the elements will be 0's 

    float pi = 3.14159;
    printf("%f\n", pi); // this will print out pi var, if it was a double it would be %lf, if it was a char it would be %c

    for (int i = 0; i < 10; i++) {
        printf("%d\n", my_array[i]); // this will print out the contents of the array
                                    // note that its garbage because we haven't defined what is in the array
    }
    
    for (int i=0; i<10; i++) {
        my_array[i] = i; // this will set the contents of the array to the index
        printf("%d\n", my_array[i]);
    }

    int counter = 0;
    for (int i=0; i<10; ++i, i++) {
        counter = counter + 1;
    }
    printf("%d", counter);

    return 0;
}