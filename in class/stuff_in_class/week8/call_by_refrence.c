#include <stdio.h>

int increment(int x);



int main() {
    
    int x = 0;

    printf("the value of x is : %d\n", x);

    increment(x);

    printf("the value of x is:%d\n", x);
    

    return 0;
}

int increment(int x) {

    x +=1;    
    return x;
}
