// Exercise 3.45c Solution
// Factorial

#include <stdio.h>

// function main begins program execution
int main(void)
{
	int n = 0;		   // counter
	int accuracy = 15; // degree of accuracy 
	int x = 3;		   // exponent
	int times = 0;	   // counter
	int count;		   // copy of n

	float e = 1.0;	   // raised to the x power
	float exp = 0.0;   // raised to the n power
	float fact = 1.0;  // n factorial

	// loop while less than degree of accuracy
	while (n <= accuracy) {
		count = n;

		// update n!
		if (n == 0) { // base case
			fact *= 1.0;
		} // end if
		else {
			fact *= n;
		} // end else

		while (times < count) {

			// calculate x raised to the n power
			if (times == 0) { // base case
				exp = 1.0;
				exp *= x;
			} // end if
			else {
				exp *= x;
			} // end else

			++times;
		} // end while

		e += (exp / fact); // update e rasied to the x power
		++n;
	} // end while

	// display result
	printf("e raised to the %d power is %f\n", x, e);
} // end function main