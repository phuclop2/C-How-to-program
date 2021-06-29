// Exercise 3.37 Solution
// Detecting Multiples of a Number

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int count = 1; // counter

	// loop to 500
	while (count <= 500) {
		
		// print a new line after every 50 dollar signs
		count % 50 == 0 ? printf("%s", "$\n") : printf("%s", "$");

		++count; // increment counter
	} // end while
} // end function main