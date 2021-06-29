// Exercise 3.39 Solution
// Checkerboard Pattern of Asterisks

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int side = 8; // side counter
	int row;	  // row counter
	int mod;	  // remainder

	// loop 8 times
	while (side > 1) {
		row = 8; // reset row counter
		mod = side % 2;

		// loop 8 times
		while (row >= 1) {

			if (mod != 0) {
				printf("%s", " ");
				mod = 0;
			} // end if

			printf("%s", "* ");
			--row;
		} // end inner while

		printf("%s", "\n"); // go to next line
		--side;
	} // end outer while
} // end function main