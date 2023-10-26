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



    
    int x, y, z =0;

                                // in the abense of parentheses, the order of operations is:
                                // 1. increment y
                                // 2. evaluate x==5
                                // 3. evaluate y++
                                // 4. evaluate ++z
                                // 5. evaluate the || statement
                                // 6. evaluate the && statement
                                // 7. evaluate the if statement
                                // and takes precedence over or (&& takes precedence over ||)
                                
    if ( x==5 && y++ || ++z ) { // tricky, z is incremented even though the if statement is false, and since z is 1, it evaluates to true
        printf("if statement true!\n");
    }
    printf("x: %d, y: %d, z: %d\n", x, y, z);


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