// Exercise 3.38 Solution
// Counting 9s

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int number;			// user input
	int numCopy;		// copy of number
	int factor = 10000; // set factor to pick off digits
	int digit;			// individual digit of number
	int nines = 0;		// nines counter

	printf("%s", "Enter a 5-digit number: "); // get number from user
	scanf("%d", &number);

	numCopy = number;

	// loop through each of the 5 digits
	while (factor >= 1) {
		digit = numCopy / factor; // pick off next digit

		if (digit == 9) { // if digit equals 9, increment nines
			++nines;
		} // end if

		numCopy %= factor;
		factor /= 10; 
	} // end while

	// output number of nines
	printf("The number %d has %d nine(s) in it\n", number, nines);
} // end function main