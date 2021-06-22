// Exercise 3.34 Solution
// Floyd's Triangle

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int col;	// column
	int number; // define number
	int row;	// length of row

	// initialization phase
	col = 1;
	number = 1;

	// processing phase
	while (col <= 10) { // loop 10 times
		row = col;
		
		// loop through each column
		while (row > 0) {
			printf("%d ", number);
			++number; // increment number
			--row; // decrement row
		} // end inner while

		printf("%s", "\n"); // print newline
		++col; // increment column
	} // end outer while
} // end function main