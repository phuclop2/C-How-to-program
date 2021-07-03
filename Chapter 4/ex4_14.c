// Exercise 4.14 Solution
// Factorials

#include <stdio.h>

// function main begins program execution
int main(void)
{
	int i;		   // outer counter
	int j;		   // inner counter
	int factorial; // current factorial value

	printf("%s", "X\tFactorial of X\n"); // display table headers

	// compute the factorial from 1 to 5
	for (i = 1; i <= 5; i++) {
		factorial = 1;

		// calculate factorial of current number
		for (j = 1; j <= i; j++) {
			factorial *= j;
		} // end inner for

		printf("%d\t%d\n", i, factorial);
	} // end outer for
} // end main