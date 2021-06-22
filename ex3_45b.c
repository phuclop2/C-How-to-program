// Exercise 3.45b Solution
// Factorial

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int n = 0;		   // loop counter for accuracy
	int fact = 1;	   // current n factorial
	double e = 0;	   // current estimated value of e

	// loop until degree of accuracy
	while (n <= 10) {

		if (n == 0) {
			fact *= 1;
		} // end if
		else {
			fact *= n;
		} // end else

		e += 1.0 / fact;
		++n;
	} // end while

	printf("e is %f\n", e); // display estimated value
} // end function main