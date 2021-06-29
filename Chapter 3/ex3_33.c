// Exercise 3.33 Solution
// Hollow Square of Asterisks

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int side;		 // side counter
	int rowPosition; // row counter
	int size;		 // length of side

	printf("%s", "Enter the square side: "); // prompt for side length
	scanf("%d", &side);

	size = side; // set size counter to length of side

	// loop side number of times
	while (side > 0) {
		rowPosition = size; // set row counter to length of size

		// loop rowPosition number of times
		while (rowPosition > 0) {

			// if side or row counter is 1 or size print an asterisk
			if (size == side) {
				printf("*");
			} // end if
			else if (side == 1) {
				printf("*");
			} // end else if
			else if (rowPosition == 1) {
				printf("*");
			} // end else if
			else if (rowPosition == size) {
				printf("*");
			} // end else if
			else { // otherwise, print a space
				printf(" ");
			} // end else

			--rowPosition; // decrement row counter
		} // end inner while

		printf("\n"); // newline for next row
		--side; // decrement side counter
	} // end outer while
} // end function main