#include <stdio.h>


int main() {

    int x = 1; 
    
        {

            int x =2;

            {
                int x=3;
            }

            printf("%d", x);
        }



}