#include <stdio.h>


// if we wanted to use static variables, we could do this
// typically capitalized to show the global nature of the variable
// #define NUM_ANIMALS 15
// #define LEG_COUNT 4

int main () {

    int nums_animals, leg_count, cows, chickens;
    cows = chickens = nums_animals = leg_count = 0;

    while(nums_animals <= 0) {
        printf("How many animals are there?\n");
        scanf("%d", &nums_animals);
    }

    //leg count has >= double the number of animals, but less than 4x the number of animals
    // also need to make sure that the leg count is an even number, no half animals
    // double pipe is OR, double ampersand is AND
    while(leg_count < (nums_animals*2) || leg_count > (nums_animals*4) || leg_count % 2 != 0) {
        // while leg count is less than double the number of animals, or greater than 4x the number of animals, or not an even number
        printf("How many legs are there?\n");
        scanf("%d", &leg_count);
    }

    cows = (leg_count - (nums_animals*2)) / 2;
    chickens = nums_animals - cows; // could also do (leg_count - (cows*4)) / 2
    

    printf("There are %d cows and %d chickens\n", cows, chickens);


    return 0;
}

float q_rsqrt(float number)
{
  long i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y  = number;
  i  = * ( long * ) &y;                       // evil floating point bit level hacking
  i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
  y  = * ( float * ) &i;
  y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
  // y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

  return y;
}