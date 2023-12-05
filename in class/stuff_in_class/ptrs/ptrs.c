#include <stdlib.h>
#include <stdio.h>

int main () {

    int *myPtr;
    // note that int* myPtr is the same as int *myPtr

    myPtr = (int*) malloc(sizeof(int));
    printf("myPtr is %p\n", myPtr);
    *myPtr = 5;
    printf("myPtr is %d\n", *myPtr);
    printf("--------------------\n");

    // now what happens if we call another malloc on myPtr?
    myPtr = (int*) malloc(sizeof(int));
    printf("myPtr is %p\n", myPtr);
    *myPtr = 5;
    printf("myPtr is %d\n", *myPtr);

    // note that we have lost the pointer to the first malloc this is called a memory leak
    // we can no longer free the memory allocated by the first malloc
    // i dont think theres a reason to ever do this but its good to know that it can happen

    // note that myptr is still ap ointer to an int, and it still points to a valid memory location
    // has a size of 4 bytes too

    // alwaus a good idea to free memory when you are done with it
    free(myPtr);


    // --------------------

    int *myPtr2;

    // we can multiply the size of the pointer by the number of elements we want to allocate
    myPtr2 = (int*) malloc(sizeof(int) * 5); // this allocates 5 ints
    
    // typical use case for malloc is to allocate an array of elements
    // this is because we dont know how many elements we will need at compile time, and avoids seg faults
    return 0;
}