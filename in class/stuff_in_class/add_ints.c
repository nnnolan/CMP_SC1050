#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers ^_^: \n");

    /*
    
    The %d will be replaced by the value of a and b
    the & sign represents C looking for the address of the variable, and not necessarily the value of the variable
    C will then store the value of the input in the address of the variable
    lot more hoops than python :p

    furthermore, we could've have made a new int variable to store the sum of a and b, but we can just print it out directly

    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);  

    */
   
    scanf("%d%d", &a, &b);

    printf("The sum of %d and %d is %d\n", a, b, a + b);


    return 0;    
}