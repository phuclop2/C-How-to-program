// Exercise 3.25 Solution
// Tabular Output

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int counter = 7; // counter

	// display table headers
	printf("A\tA+3\tA+6\tA+9\n\n");

	// loop 10 times
	while (counter <= 35) {
		printf("%d\t%d\t%d\t%d\n", counter, counter + 3, counter + 6, counter + 9);
		counter += 7;
	} // end while
} // end function main
