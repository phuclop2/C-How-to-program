// Exercise 4.37 Solution

#include <stdio.h>

// function main begins program execution
int main(void) {
    // loop 10 times
    for (unsigned int x = 1; x <= 10; ++x) {

        // if x is 5, continue with next iteration of loop
        if (x == 5) {
            ++x; // skip remaining code in loop body
        } // end if

        printf("%u ", x); // display value of x
    }

    puts("\nUsed increment operator ++ to skip printing the value 5");
} // end function main