// Exercise 3.29 Solution

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int outer_counter = 1; // initialize count
	while (outer_counter <= 10) { // loop 10 times
		int inner_counter = 1; 
		while (inner_counter <= outer_counter) {
			printf("*");
			inner_counter++; 
		} // end inner while
		printf("\n");
		outer_counter++;
	} // end outer while
} // end function main