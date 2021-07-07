// Exercise 4.35 Solution 

#include <stdio.h>

// begin function main
int main(void) {
    unsigned int x;   // declared here so it can be used after loop
    int breakOut = 1; // breakout condition

   // loop 10 times
    for (x = 1; x <= 10 && breakOut == 1; ++x) {

        // if x is 5, terminate loop
        if (x == 4) {
            breakOut = -1; // break loop only if x is 5
        }

        printf("%u ", x);
    }

    printf("\nBroke out of loop at x == %u\n", x);
} // end function main