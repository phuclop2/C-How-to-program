// Exercise 4.27 Solution
// Pythagorean Triples

#include <stdio.h>

// begin function main
int main(void) {
	int count = 0;		   // number of triples found
	long int side1;		   // side1 value counter
	long int side2;		   // side2 value counter
	long int hypotenuse;   // hypotenuse value counter
	long int hyptSquared;  // hypothenuse squared
	long int sidesSquared; // sum of squares of sides

	// side1 value range from 1 to 500
	for (side1 = 1; side1 <= 500; side1++) {

		// side2 value range from current side1 to 500
		for (side2 = side1; side2 <= 500; side2++) {

			// hypotenuse values range from current side2 to 500
			for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {

				// calculate square of hypotenuse value
				hyptSquared = hypotenuse * hypotenuse;

				// calculate sum of squares of sides
				sidesSquared = side1 * side1 + side2 * side2;

				// if hypotenuse squared = side 1 squared + side 2 squared,
				// Pythagorean triple
				if (hyptSquared == sidesSquared) {

					// display triple
					printf("%ld %ld %ld\n", side1, side2, hypotenuse);
					count++; // update count
				} // end if
			} // end for
		} // end for
	} // end for

	// dispaly total number of triples found
	printf("A total of %d triples were found.\n", count);
} // end function main