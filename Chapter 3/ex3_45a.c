// Exercise 3.45a Solution
// Factorial

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int n;						// current multiplication factor
	int number;			        // input number
	unsigned int factorial = 1; // resulting factorial

	printf("%s", "Enter a positive integer: ");
	scanf("%d", &number);

	n = number;
	
	// compute factoring
	while (n >= 0) {

		if (n == 0) {
			factorial *= 1;
		} // end if
		else {
			factorial *= n;
		} // end else

		--n; // decrement number
	} // end while

	// display result
	printf("%d! is %u\n", number, factorial);
} // end function main