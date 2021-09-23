// Exercise 5.10 Solution
// Rounding Numbers

#include <stdio.h>
#include <math.h>

void calculateCeil(void); // function prototype

int main(void)
{
	calculateCeil(); // call function calculateCeil
} // end main

// calculateCeil rounds 5 inputs
void calculateCeil(void)
{
	double x; // current input
	double y; // current input rounded
	int loop; // loop counter

	// loop for 5 inputs
	for (loop = 1; loop <= 5; loop++) {
		printf("%s", "Enter a floating point value: ");
		scanf_s("%lf", &x);

		// y holds rounded input
		y = ceil(x - .5);
		printf("%f rounded is %.1f\n\n", x, y);
	} // end for

} // end function calculateCeil 
	