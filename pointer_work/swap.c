#include <stdio.h>

void swap(int *a, int*b);

int main(){

    int a = 10;
    int b = 69;
    printf("a = %d, b = %d\n", a, b);
    // we could do this also by defining a variable containg the addresses of a and b
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}


void swap(int *a, int*b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}