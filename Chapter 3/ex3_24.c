// Exercise 3.24 Solution
// Tabular Output

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int counter = 1; // counter

	// display table headers
	printf("N\tN^2\tN^3\tN^4\n\n");

	// loop 10 times
	while (counter <= 10) {
		printf("%d\t%d\t%d\t%d\n", counter, counter * counter, counter * counter * counter, counter * counter * counter * counter);
		++counter;
	} // end while
} // end function main
