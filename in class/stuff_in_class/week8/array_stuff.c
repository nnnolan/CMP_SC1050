#include <stdio.h>


int main() {

    int x[5] = {1, 2, 3, 4, 5};// creates  array


    printf("x[4] = %d\n", x[4]);

    for (int i=0; i<100; i++) {


        printf("x[%d]: %d\n", i, x[i]);  
    
    }

    return 0;

}