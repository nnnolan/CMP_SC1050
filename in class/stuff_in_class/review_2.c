#include <stdio.h>

int increment();
void printName(char n[]);

int main() {


// string stuff

    char name[20];
    scanf("%s", name);
    printf("Hello, %s\n", name);



    printf("Increment: %d\n", increment());
    printf("Increment: %d\n", increment()); 
    // static ints are initialized to 0, so this will print 1 and 2
    // the difference between a static int and a regular int is that static ints remain through invocations
    // ie, if you call increment() in another function, it will still be the same static int
    // or if my_static_int was just an int, it would be reinitialized to 0 every time you called increment()


    // func expects a string, so we pass it a string :-)
    printName(name);


    return 0;
}


int increment() {


    static int my_static_int = 0;
    my_static_int++;
    printf("this is the %d time I've been called\n", my_static_int);
    return my_static_int;

}

void printName(char n[]) {
    printf("Hi %s, nice to meet you\n", n);
    return;
}