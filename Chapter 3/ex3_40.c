// Exercise 3.40 Solution
// Power of 3 with an Infinite Loop

#include <stdio.h>

/* Program execution terminates when largest integer is exceeded(i.e., the loop continuation test fails
when the maximum value for an integer is exceeded. On a 4-byte system, the largest integer value is 2147483647
and anything above that is represented by a negative number, which fails the loop continuation test. */

// function main begins program execution
int main(void)
{	
	int multiple = 1;

	// infinite loop
	while (multiple > 0) {

		// calculate the next power of three
		multiple *= 3;
		printf("%d\n", multiple);
	} // end while
} // end function main