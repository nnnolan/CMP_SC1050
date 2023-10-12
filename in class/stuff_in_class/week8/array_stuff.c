#include <stdio.h>


int main() {

    // int x[5] = {1, 2, 3, 4, 5};// creates  array


    // printf("x[4] = %d\n", x[4]);

    // for (int i=0; i<100; i++) {


    //     printf("x[%d]: %d\n", i, x[i]);  
    
    // }

    // gaussian math
    int x[100] = {0}; // sets array to 100 0's

    int lower, upper = 0;
    scanf("%d", &lower);
    scanf("%d", &upper);

    for (int i=lower, index =0; i<=upper; i++, index++) {

        x[index] = lower;


    }
    int sum = 0;
    for(int i=0; i<100; i++){

        printf("%d\n", x[i]);
        sum +=x[i];
    }
    printf("sum = %d", sum);
    return 0;

}