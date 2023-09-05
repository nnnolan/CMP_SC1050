#include <stdio.h>


int main() {

    int x;
    int y;

    printf("first integer : ");
    scanf("%d", &x);
    
    printf("second integer : ");
    scanf("%d", &y);

    /* this makes sense */
    printf("dividing %d by %d, = %d \n ", x, y, (x/y));


    /* now what if we introduce floating point numbers */
    float a;
    float b;

    printf("first float : ");
    scanf("%f", &a);

    printf("second float : ");
    scanf("%f", &b);

    /* now division should work with decimals */
    printf("dividing %f by %f, = %f \n", a, b, (a/b));

    /* what if we divide with one float and one int ? */
    printf("diving %f (float a) by %d (int y), = %f ", a, y, (a/y));
    // 
}
